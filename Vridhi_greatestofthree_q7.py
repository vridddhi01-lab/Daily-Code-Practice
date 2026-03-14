n = int(input("First number : "))
m = int(input("second number : "))
o = int(input("third number : "))
if (n > o) and (n > m):
    print(n)
elif (m > o) and (m > n):
    print(m)
else:
    print(o)