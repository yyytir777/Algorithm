a = b = int(input())
count = 0
while True:
    ten = int(a // 10)
    one = int(a % 10)
    total = ten + one
    a = one * 10 + total % 10
    count += 1
    if a == b:
        break
print(count)