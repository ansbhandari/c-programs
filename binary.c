/*binary search method divides the given array exactly into two halves each 
time reducing the search array to half, thus it is efficient searching method
for sorted array */

#include<stdio.h>

int binary(int a[],int k,int l,int h)
{
if(l==h)
	{
	if(k==a[l])
	return l;
	else
	return -1;
	}
else
	{
	int mid=(l+h)/2;
	if(k==a[mid])
	return mid;
	else
		{
		if(k<a[mid])
		binary(a,k,l,mid-1);
		else
		binary(a,k,mid+1,h);
		}
	}
}



int main(int argc, char* argv[]) /* takes arguments as (program key search_file)*/
{
int val;
FILE *input;
int key = atoi(argv[1]);
input=fopen(argv[2],"r+");
int a[101],count=0;
while(fscanf(input,"%d\t",&val)!=EOF)
{
a[count++]=val;
}
fclose(input);
int l=0;
int h=count-1;
int result=binary(a,key,l,h);
if(result==-1)
printf("Key not found in the file....Try again !!\n");
else
printf("Index Position of %d is %d\n",key,result+1);
return 0;
}
