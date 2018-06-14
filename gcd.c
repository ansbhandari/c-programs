#include<stdio.h>
int gcd(int, int);

int gcd(int a, int b){
if(b==0)
return a;
else return gcd(b,a%b);
}

int main(){
int a,b;
printf("Enter two numbers: ");
scanf("%d%d", &a,&b);
int g = gcd(a,b);
printf("%d\n",g);
return 0;
}


