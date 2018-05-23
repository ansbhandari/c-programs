#include<stdio.h>

void toh(int n, char from,char to,char aux)
{
if(n==1)
printf("\tMove 1 disk from %c to %c\n",from,to);
else
{
toh(n-1,from,aux,to);
printf("\tMove %d disk from %c to %c \n",n,from,to);
toh(n-1,aux,to,from);
}
}

int main()
{
int n;
printf("\n\tEnter how many discs : ");
scanf("%d",&n);
printf("\tProgram to move %d discs from A to B\n",n);
printf("\t------------------------------------\n");
toh(n,'A','B','C');
printf("\t------------------------------------\n");
printf("\tEND\n");
return 0;
}
