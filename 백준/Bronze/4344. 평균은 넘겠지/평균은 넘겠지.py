C = int(input())
for i in range(C):
    doc = list(map(int, input().split()))
    N = int(doc[0])
    Sum_score = int(sum(doc[1:]))
    ave = Sum_score / N
    count = 0
    for j in doc[1:]:
        if j > ave:
            count += 1
    rate = float( count / N )
    print('%0.3f' % float(rate*100)+"%")