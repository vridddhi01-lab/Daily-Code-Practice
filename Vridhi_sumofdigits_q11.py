n = int(input("n: "))
def sumofdigits(m):
    sum = 0
    while m > 0:
        sum += m % 10
        m = m // 10
    return sum

if n > 0:
    sum2 = sumofdigits(n)
else:
    n = -n
    sum2 = sumofdigits(n)
print(sum2)
