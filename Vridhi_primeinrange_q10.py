low = int(input("range starts from: "))
high = int(input("range ends upto: "))

for i in range(low,high +1):
    for j in range(2,i):
        if i % j != 0:
            print(i, end="")
        break
        