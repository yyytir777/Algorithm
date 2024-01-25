for i in range(int(input())):
    k = int(input())
    n = int(input())
    cnt = [ f for f in range(n+1)]
    for j in range(k):
        for m in range(1, n+1):
            cnt[m] += cnt[m-1]
    print(cnt[-1])