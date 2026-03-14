year = int(input("Write year to check: "))
if year % 100 ==0:
    if year % 400==0:
        print(year, "is a leap year")
    else:
        print("Not a leap year")
else:
    if year % 4 ==0:
        print(year, "is a leap year")