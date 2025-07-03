def get_name(a,b):
    if b in a:
        return a[b]
    else:
        return '?'

sample_info = {
    39: "Justin",
    14: "John",
    67: "Mike",
    105: "Summer"
}

print(get_name(sample_info, 105))
print(get_name(sample_info, 777))