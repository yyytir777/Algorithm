H1, M1 = input().split()
H = int(H1)
M = int(M1)
if M<45:
    if H > 0:
        print(H - 1, 15 + M)
    else:
        print(23, 15 + M)
else:
    print(H, M - 45)