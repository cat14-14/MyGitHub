board = [list(map(int, input().split())) for _ in range(10)]
pieces = list(map(int, input().split()))

for col in range(10):
    if pieces[col] == 1:
        result = "safe"
        for row in range(9, -1, -1):
            if board[row][col] > 0:
                result = "crash"
                break
            elif board[row][col] < 0:
                result = "fall"
                break
        print(col + 1, result)
