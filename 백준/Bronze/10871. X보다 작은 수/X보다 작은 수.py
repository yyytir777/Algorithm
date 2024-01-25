count, num = map(int, input().split())
Arr = list(map(int, input().split()))
for i in range(count):
        if Arr[i] < num:
            print(Arr[i], end=" ")
