# Largest Palindrome Product
# Problem 4
# A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009=91x99.
# Find the largest palindrome made from the product of two 3-digit numbers.

l = []
for i in range(100, 999):
    for k in range(100, 999):
        if str(k*i)==str(k*i)[::-1]:
            l.append(k*i)
print(max(l))
# 906609
