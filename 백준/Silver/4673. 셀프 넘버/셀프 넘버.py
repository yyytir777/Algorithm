N = set(range(1,10001))
remove_set = set()
for i in range(1,10001):
    for j in str(i):
        i += int(j)
    remove_set.add(i)
N -= remove_set
for i in sorted(N):
    print(i)