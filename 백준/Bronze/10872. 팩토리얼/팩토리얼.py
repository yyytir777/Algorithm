def factorial(n):
    if n > 1:
        return n * factorial(n-1)
    elif n == 1:
        return n
    elif n == 0:
        return 1
N = int(input())
print(factorial(N))