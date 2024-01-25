N = int(input())
count = 0
for i in range(1, N+1):
    if i < 10:
        count += 1
    elif 10 <= i < 100:
        count += 1
    elif 100 <= i < 1000:
        first = i % 10
        third = i // 100
        second = (i - third*100) // 10
        if (third - second) == (second - first):
            count += 1
print(count)