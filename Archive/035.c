// The number, 197, is called a circular prime because all rotations of the digits: 197, 971, and 719, are themselves prime.
// There are thirteen such primes below 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.
// How many circular primes are there below one million?

#include<stdio.h>
#include<math.h>

int noOfDigits(long n){
	int summ = 0;
	while(n>0){
		summ++;
		n/=10;
	}
	return summ;
}

int isIncluded(long n, int k){
    while(n>0){
        if (n%10==k){
            return 1;
        }
        n/=10;
    }
    return -1;
}

long poweroften(int  n){
    int init = 1;
    for (int i=0; i<n; i++){
        init*=10;
    }
    return init;
}

long rotate(long n){
    int l = n%10;
    int N = noOfDigits(n);
    long res = (n-l)/10 + l*poweroften(N-1);
    return res;
}

int isPrime(long n){
    for (int i=2; i<sqrt(n); i++){
        if (n%i==0){
            return -1;
        }
    }
    return 1;
}

int isCircularPrime(long n){
    if (isIncluded(n, 0)==1 || isIncluded(n, 2)==1 || isIncluded(n, 4)==1 || isIncluded(n, 6)==1 || isIncluded(n, 8)==1 || isIncluded(n, 5)==1){
        return -1;
    }
    int N= noOfDigits(n);
        for (int i = 0; i<N; i++){
        long k = rotate(n);
        if (isPrime(k)==-1){
            return -1;
        }
        n = k;
    }
    return 1;
}

int noOfCircularPrimesbelown(long n){
    //int N = noOfDigits(n);
    int num = 0;
    for (long i = 1;i<n;i++){
        if (isCircularPrime(i)==1){
            num++;
           printf("%ld\n", i);
        }
    }
    return num;
}

int main(){
    long n = 1000000;
    int res=0;
    for (int i=1; i<n; i++){
        if (isCircularPrime(i)==1){
            res++;
        }
    }
    printf("%d", res); // 55
    return 0;
}
