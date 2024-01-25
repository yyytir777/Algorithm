X = int(input())
line = 0
num = 0
while num < X:
    line += 1
    num += line

if line % 2 == 0:
    a = X + line - num
    b = line + 1 - a
else:
    a = num - X + 1
    b = X + line - num
    
print(a, "/", b, sep="")