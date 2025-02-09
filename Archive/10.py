
# Online Python - IDE, Editor, Compiler, Interpreter

def isPrime(n):
    for i in range(2,n-1,1):
        if n%i==0:
            return False
    return True
lis =[]
for i in range(2000000):
    if isPrime(i):
        lis.append(i)
print(sum(lis))