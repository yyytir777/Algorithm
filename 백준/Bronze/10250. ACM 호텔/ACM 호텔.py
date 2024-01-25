for i in range(int(input())):
    H, W, N = map(int, input().split())
    floor = N % H
    line = N // H + 1
    if floor == 0:
        line -= 1
        floor = H
    print(floor*100 + line)