# Sum Square Difference
# The sum of the squares of the first ten natural numbers is,
# 1^2 + 2^2 + 3^2 + ... + 10^2 = 385
# The square of summ of first 10 natural numbers is,
# (1 + 2 + 3 + ... + 10 )^2 = 55^2 = 3025
# Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is
# 3025 - 385 = 2640
# Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

"""  Answer = 25164150  """

"""  Solution  """
# Sum of first 'n' natural numbers
def normalsum(n: int):
    return n*(n+1)/2
# Sum of square of first 'n' natural numbers
def sumOfSquares(n: int):
    return n*(n+1)*(2*n+1)/6
# Difference between Sum of squares and square of sum
def diff(n):
    return (normalsum(n))**2 - sumOfSquares(n)
print(int(diff(100)))
# 25164150
