#include <stdio.h>

int N;
char a[100][101];
int vis1[100][100];
int vis2[100][100];
int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};

void dfs1(int r, int c, char color){
	vis1[r][c] = 1;
	for(int k=0;k<4;k++){
		int nr = r + dr[k];
		int nc = c + dc[k];
		if(nr < 0 || nr >= N || nc < 0 || nc >= N) continue;
		if(!vis1[nr][nc] && a[nr][nc] == color) dfs1(nr, nc, color);	
	}
}

int same_rg(char c1, char c2){
	if(c1 == c2) return 1;
	if((c1 == 'R' || c1 == 'G') && (c2 == 'R' || c2 == 'G')) return 1;
	return 0;
}

void dfs2(int r, int c, char color){
	vis2[r][c] = 1;
	for(int k=0;k<4;k++){
		int nr = r + dr[k];
		int nc = c + dc[k];
		if(nr < 0 || nr >= N || nc < 0 || nc >= N) continue;
		if(!vis2[nr][nc] && same_rg(color, a[nr][nc])) dfs2(nr, nc, color);
	}
}

int main(void){
	if(scanf("%d", &N) != 1) return 0;
	for(int i=0;i<N;i++) scanf("%s", a[i]);

	int cnt1 = 0, cnt2 = 0;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(!vis1[i][j]){
				dfs1(i, j, a[i][j]);
				cnt1++;
			}
			if(!vis2[i][j]){
				dfs2(i, j, a[i][j]);
				cnt2++;
			}
		}
	}
	printf("%d %d\n", cnt1, cnt2);

	return 0;
}