N = int(input())
n = 2
while True:
    if N == 1:
        print("1")
        break
    elif 2 <= N < 8:
        print("2")
        break
    elif (3 * n * (n-1) < N-1) and (N-1 <= 3 * n * (n+1)):
        print(n+1)
        break
    else:
        n += 1
        continue