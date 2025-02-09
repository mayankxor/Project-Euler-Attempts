#include <stdio.h>
int main()
{
    for(int a = 1; a<=1000;a++){
      for (int b =1;b<=1000;b++){
        for (int c =1;c<=1000;c++){
          if (a+b+c==1000){
            if(a*a +b*b==c*c){
            printf("a=%d\nb=%d\nc=%d\nabc=%d\n"
            ,a,b,c,a*b*c);}
          }
        }
      }
    }
}