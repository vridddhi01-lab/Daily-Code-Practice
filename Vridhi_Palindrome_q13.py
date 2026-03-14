n = int(input("n:"))
m = str(n)
reverse = int(m[::-1])
print("Palindrome") if n == reverse else print("Not a Palindrome")
