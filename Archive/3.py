def isPrime(k):
    for i in range(2, int(k)):
        if k%i==0:
            return False
    return True
lis = []
def largestFactor(k):
    if isPrime(k):
        lis.append(k)
        return
    for i in range(2, int(k), 1):
        if isPrime(i) and k%i==0:
            lis.append(i)
            largestFactor(k/i)
            return
            
largestFactor(600851475143)
print(max(lis))
