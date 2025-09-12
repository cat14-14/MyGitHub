import React from "react";
import FloatingChips from "./FloatingChips";

export default function App() {
  return (
    <div style={{ padding: 24 }}>
      <h1 style={{ marginBottom: 12 }}>ChemVerse</h1>
      <FloatingChips height={600} searchable />
    </div>
  );
}
