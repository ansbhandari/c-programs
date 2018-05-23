/*program to generate and write array of random numbers upto 100 integers*/
#include<stdio.h>

int main()
{
int i,val;
FILE *ptr;
ptr=fopen("array.txt","w+");
for(i=0;i<100;i++)
{
val=random();
fprintf(ptr,"%d\t",val%99);
}
fclose(ptr);
return 0;
}

