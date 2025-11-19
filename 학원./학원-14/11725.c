#include <stdio.h>
#include <stdlib.h>
#define Max 100



int main(void){
	int N;
	if(scanf("%d", &N) != 1) return 0;
	int M = N - 1;

	int *head = (int*)malloc((N+1) * sizeof(int));
	int maxE = 2 * M + 5;
	int *to = (int*)malloc(maxE * sizeof(int));
	int *nxt = (int*)malloc(maxE * sizeof(int));
	for(int i=1;i<=N;i++) head[i] = -1;
	int ec = 0;
	for(int i=0;i<M;i++){
		int u,v; scanf("%d %d", &u, &v);
		to[ec] = v; nxt[ec] = head[u]; head[u] = ec++;
		to[ec] = u; nxt[ec] = head[v]; head[v] = ec++;
	}

	int *parent = (int*)calloc(N+1, sizeof(int));
	int *q = (int*)malloc((N+1) * sizeof(int));
	int front = 0, back = 0;
	q[back++] = 1;
	parent[1] = 1;

	while(front < back){
		int cur = q[front++];
		for(int e = head[cur]; e != -1; e = nxt[e]){
			int v = to[e];
			if(parent[v] == 0){
				parent[v] = cur;
				q[back++] = v;
			}
		}
	}

	for(int i=2;i<=N;i++){
		printf("%d\n", parent[i]);
	}

	free(head); free(to); free(nxt); free(parent); free(q);
	return 0;
}