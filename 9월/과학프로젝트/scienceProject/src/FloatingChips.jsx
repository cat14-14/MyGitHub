// FloatingChips.jsx  —  단일 파일 컴포넌트 (스타일 포함)
import React, { useEffect, useMemo, useRef, useState } from "react";

/** 기본 데이터: 주기율표 예시(원하시는 텍스트/색상으로 자유 교체) */
const DEFAULT_ITEMS = [
  { label: "H",  sublabel: "Hydrogen",     color: "#E6F4EA" },
  { label: "He", sublabel: "Helium",       color: "#F0F7FF" },
  { label: "Li", sublabel: "Lithium",      color: "#FEF3C7" },
  { label: "Be", sublabel: "Beryllium",    color: "#FFF1F2" },
  { label: "B",  sublabel: "Boron",        color: "#F1F5F9" },
  { label: "C",  sublabel: "Carbon",       color: "#F8FAFC" },
  { label: "N",  sublabel: "Nitrogen",     color: "#ECFEFF" },
  { label: "O",  sublabel: "Oxygen",       color: "#ECFDF5" },
  { label: "F",  sublabel: "Fluorine",     color: "#FAF5FF" },
  { label: "Ne", sublabel: "Neon",         color: "#EEF2FF" },
  { label: "Na", sublabel: "Sodium",       color: "#FEF9C3" },
  { label: "Mg", sublabel: "Magnesium",    color: "#E0F2FE" },
  { label: "Al", sublabel: "Aluminium",    color: "#F1F5F9" },
  { label: "Si", sublabel: "Silicon",      color: "#F8FAFC" },
  { label: "P",  sublabel: "Phosphorus",   color: "#ECFEFF" },
  { label: "S",  sublabel: "Sulfur",       color: "#FEF3C7" },
  { label: "Cl", sublabel: "Chlorine",     color: "#DCFCE7" },
  { label: "Ar", sublabel: "Argon",        color: "#EEF2FF" },
  { label: "K",  sublabel: "Potassium",    color: "#FEF9C3" },
  { label: "Ca", sublabel: "Calcium",      color: "#E0F2FE" },
  { label: "Sc", sublabel: "Scandium",     color: "#F1F5F9" },
  { label: "Ti", sublabel: "Titanium",     color: "#F8FAFC" },
  { label: "V",  sublabel: "Vanadium",     color: "#FEF3C7" },
  { label: "Cr", sublabel: "Chromium",     color: "#E0F2FE" },
  { label: "Mn", sublabel: "Manganese",    color: "#F1F5F9" },
  { label: "Fe", sublabel: "Iron",         color: "#FFE4E6" },
  { label: "Co", sublabel: "Cobalt",       color: "#E0E7FF" },
  { label: "Ni", sublabel: "Nickel",       color: "#ECFDF5" },
  { label: "Cu", sublabel: "Copper",       color: "#FFF7ED" },
  { label: "Zn", sublabel: "Zinc",         color: "#F1F5F9" },
  { label: "Ga", sublabel: "Gallium",      color: "#E0E7FF" },
  { label: "Ge", sublabel: "Germanium",    color: "#E2E8F0" },
  { label: "As", sublabel: "Arsenic",      color: "#FEF3C7" },
  { label: "Se", sublabel: "Selenium",     color: "#F0FDF4" },
  { label: "Br", sublabel: "Bromine",      color: "#FFE4E6" },
  { label: "Kr", sublabel: "Krypton",      color: "#EEF2FF" },
];

/** 스타일 인젝션(프로젝트 전역 CSS에 넣어도 됨) */
const injectStyles = (() => {
  let done = false;
  return () => {
    if (done) return;
    done = true;
    const css = `
    .fc-root {
      position: relative;
      width: 100%;
      border-radius: 16px;
      background: #f7f6ef; /* 따뜻한 아이보리 배경 */
      overflow: hidden;
      box-shadow: 0 6px 24px rgba(0,0,0,0.08) inset;
      user-select: none;
    }
    .fc-toolbar {
      position: absolute; top: 12px; left: 12px; right: 12px;
      display: flex; gap: 8px; align-items: center; z-index: 2;
    }
    .fc-search {
      flex: 1;
      background: rgba(255,255,255,0.8);
      backdrop-filter: blur(8px);
      border: 1px solid rgba(0,0,0,0.06);
      border-radius: 12px;
      padding: 10px 12px;
      font-size: 14px;
      outline: none;
    }
    .fc-grid {
      position: absolute; inset: 0;
    }
    .fc-chip {
      position: absolute;
      width: 48px; height: 48px;
      border-radius: 10px;
      display: grid; place-items: center;
      box-shadow: 0 4px 10px rgba(0,0,0,0.12);
      border: 1px solid rgba(0,0,0,0.08);
      transform: translate3d(0,0,0);
      will-change: transform;
      transition: transform .2s ease, box-shadow .2s ease, filter .2s ease;
      font-weight: 700;
      font-family: ui-sans-serif, system-ui, -apple-system, "Segoe UI", Roboto;
    }
    .fc-chip:hover {
      transform: scale(1.12);
      box-shadow: 0 10px 24px rgba(0,0,0,0.18);
      z-index: 2;
      filter: saturate(1.2);
    }
    .fc-chip .fc-chip-label {
      font-size: 16px; line-height: 1;
    }
    .fc-chip .fc-chip-sub {
      position: absolute; bottom: -18px;
      font-size: 10px; font-weight: 600; opacity: .7;
      white-space: nowrap; pointer-events: none;
    }
    @keyframes fc-float {
      0%   { transform: translate(var(--x0), var(--y0)) rotate(var(--r0)); }
      100% { transform: translate(calc(var(--x0) + var(--dx)), calc(var(--y0) + var(--dy))) rotate(calc(var(--r0) + var(--dr))); }
    }
    `;
    const style = document.createElement("style");
    style.textContent = css;
    document.head.appendChild(style);
  };
})();

/** 랜덤 유틸 */
const rand = (min, max) => Math.random() * (max - min) + min;
const randPick = (arr) => arr[Math.floor(Math.random() * arr.length)];

export default function FloatingChips({
  items = DEFAULT_ITEMS,
  height = 540,
  searchable = true,
  density = 0.8, // 0~1: 컨테이너를 얼마나 채울지(칩 개수 스케일)
  minAnimSec = 7,
  maxAnimSec = 16,
}) {
  injectStyles();

  const rootRef = useRef(null);
  const [query, setQuery] = useState("");

  const filtered = useMemo(() => {
    if (!query.trim()) return items;
    const q = query.toLowerCase();
    return items.filter(
      ({ label, sublabel }) =>
        label.toLowerCase().includes(q) || (sublabel || "").toLowerCase().includes(q)
    );
  }, [items, query]);

  // 뷰포트(컨테이너) 크기 가져오기
  const [box, setBox] = useState({ w: 800, h: height });
  useEffect(() => {
    const el = rootRef.current;
    if (!el) return;
    const ro = new ResizeObserver((ents) => {
      const r = ents[0].contentRect;
      setBox({ w: r.width, h: r.height });
    });
    ro.observe(el);
    return () => ro.disconnect();
  }, []);

  // 렌더에 사용할 칩 배치/애니메이션 값 생성
  const chips = useMemo(() => {
    const count = Math.round(filtered.length * density) || filtered.length;
    const selected = filtered.slice(0, count);

    return selected.map((item, i) => {
      // 초기 위치(칩 크기 48, 여백 32 고려)
      const x0 = rand(32, Math.max(33, box.w - 80));
      const y0 = rand(48, Math.max(49, box.h - 90));

      // 이동 벡터(왕복 애니메이션)
      const dx = rand(-60, 60);
      const dy = rand(-60, 60);
      const r0 = `${rand(-10, 10)}deg`;
      const dr = `${rand(-25, 25)}deg`;

      const dur = rand(minAnimSec, maxAnimSec).toFixed(2) + "s";
      const delay = rand(-6, 0).toFixed(2) + "s"; // 시작 시 흩뿌려진 느낌

      return {
        ...item,
        key: `${item.label}-${i}`,
        style: {
          "--x0": `${x0}px`,
          "--y0": `${y0}px`,
          "--dx": `${dx}px`,
          "--dy": `${dy}px`,
          "--r0": r0,
          "--dr": dr,
          animation: `fc-float ${dur} ease-in-out ${delay} infinite alternate`,
          background: item.color || "#F1F5F9",
        },
      };
    });
  }, [filtered, density, box, minAnimSec, maxAnimSec]);

  return (
    <div
      className="fc-root"
      ref={rootRef}
      style={{ height, position: "relative" }}
      aria-label="Floating chips playground"
    >
      {searchable && (
        <div className="fc-toolbar">
          <input
            className="fc-search"
            placeholder="검색: 기호/이름"
            value={query}
            onChange={(e) => setQuery(e.target.value)}
          />
        </div>
      )}

      <div className="fc-grid" role="list">
        {chips.map(({ key, label, sublabel, style }) => (
          <div className="fc-chip" role="listitem" key={key} style={style} title={sublabel || label}>
            <span className="fc-chip-label">{label}</span>
            {sublabel && <span className="fc-chip-sub">{sublabel}</span>}
          </div>
        ))}
      </div>
    </div>
  );
}

/* ----------------------------
   예시 사용(App.jsx 등)
----------------------------- */
// import FloatingChips from "./FloatingChips";
// export default function App() {
//   return (
//     <div style={{ padding: 24 }}>
//       <h1 style={{ marginBottom: 12 }}>ChemVerse</h1>
//       <FloatingChips
//         items={DEFAULT_ITEMS} // 또는 원하는 데이터로 교체
//         searchable
//         height={600}
//       />
//     </div>
//   );
// }
