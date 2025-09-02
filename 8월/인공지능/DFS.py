# 깊이 우선 탐색 DFS 함수
def DFS(graph, start, visited):
    # 시작 노드를 방문했음을 표시
    visited[start] = True
    print(start, end = ' ')

    # 시작 노드와 연결된 모든 미방문 노드를 재귀 탐색
    for neighbor in graph[start]:
        if not visited[neighbor]:
            DFS(graph, neighbor, visited)

# 딕셔너리 방식
tree = {
'A': ['B', 'C', 'D'],
'B': ['A', 'E'],
'C': ['A', 'F'],
'D': ['A', 'G', 'H'],
'E': ['B', 'I', 'J'],
'F': ['C'],
'G': ['D'],
'H': ['D', 'K'],
'I': ['E'],
'J': ['E'],
'K': ['H']
}
# 방문 여부를 나타내는 배열
visited = {node: False for node in tree}
#노드에 있는 것들을 모두 flase로 바꾼다.

# A 노드에서 DFS 시작
DFS(tree, 'A', visited)