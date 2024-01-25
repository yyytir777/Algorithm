import math
A, B, C = map(int, input().split())
n = 0
if B >= C:
    print("-1")
else:
    breaking_point = (A / (C - B) + 1)
    print(int(breaking_point))