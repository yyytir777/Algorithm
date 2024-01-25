count_subject = int(input())
grade = list(map(int, input().split()))
subject_max = max(grade)

for i in range(count_subject):
    grade[i] = grade[i] / subject_max * 100
average = sum(grade) / count_subject
print("{0:0.2f}".format(average))