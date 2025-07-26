expr = input()
eq_index = expr.find('=')
left = expr[:eq_index]
right = int(expr[eq_index+1:])

x_index = left.find('x')
a = int(left[:x_index])
op = left[x_index+1]
b = int(left[x_index+2:])

if op == '+':
    x = (right - b) / a
else:
    x = (right + b) / a

print(f"{x:.2f}")
