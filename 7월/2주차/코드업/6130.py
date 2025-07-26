expr = input()
x_index = expr.find('x')
a = int(expr[:x_index])
op = expr[x_index + 1]
b = int(expr[x_index + 2:])

if op == '+':
    x = -b / a
else:
    x = b / a

print(f"{x:.2f}")
