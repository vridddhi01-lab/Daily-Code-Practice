#Sum of range
m = int(input("start from: "))
n = int(input("end including: "))
sum = 0
for i in range(m,n+1,1):
    sum = sum + i
print(sum)