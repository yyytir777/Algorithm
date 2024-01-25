case = int(input())
for i in range(case):
    answer = input()
    number = len(answer)
    score = 0
    total = 0
    for j in range(int(number)):
        if answer[j] == 'O':
            score += 1
        else:
            score = 0
        total = total + score
    print(total)    