def divisors(n):
	llist = []
	for i in range(1, n):
		if n%i==0:
			llist.append(i)
	return llist
def admicableSum(n):
	return sum(divisors(n))
def isAmicable(n):
	k = admicableSum(n)
	if admicableSum(k)==n:
		if n!=k:
			return True
	return False
summ=0
for i in range(10000):
	if isAmicable(i):
		summ+=i
print(summ)
# 31626
