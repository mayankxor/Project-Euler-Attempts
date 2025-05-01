#include <stdio.h>

int GCD(int a, int b){
    int c = b%a;
    while(c!=0){
        b=a;
        a=c;
        c=b%a;
    }
    return a;
}

long LCM(long a, long b){
    return (a*b)/GCD(a, b);
}

int main()
{
    int n = 20;
    long res = 2;
    for (int i=1; i<n; i++){
        res = LCM(res, i+1);
    }
    printf("%ld", res); //232792560
    return 0;
}
