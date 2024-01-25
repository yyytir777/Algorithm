testcase = int(input())
for i in range(testcase):
    count, string = input().split()
    count = int(count)
    text = ""
    for j in string:
        text += count * j
    print(text)