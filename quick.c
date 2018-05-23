/* Quick sort is one of the most efficient sorting algorithm which has complexity order of nlogn in its best case and n*n in its worst case*/

#include<stdio.h>

int partition(int a[],int i,int j)
{
int l=i;
int r=j;
int pivot=a[i],temp;
while(l<r)
{
	while(a[l]<=pivot)
	{l++;}
	while(a[r]>pivot)
	{r--;}
	if(l<r)
	{ temp=a[l]; /* swap greater value(left) with smaller value(right) */
	a[l]=a[r];
	a[r]=temp;
	}
}
a[i]=a[r];  /*swap pivot value with samller(a[r]) or the same(itself) value*/
a[r]=pivot;
return r;
}


void quicksort(int a[],int l,int h)
{
if(l<h)
{
	int p=partition(a,l,h);
	quicksort(a,l,p-1);
	quicksort(a,p+1,h);
}
}

int main(int argc, char* argv[])
{
int val,i=0,j;
int a[101];
FILE *input, *output;
input=fopen(argv[1],"r=");
output=fopen(argv[2],"w+");
while(fscanf(input,"%d\t",&val)!=EOF)
{
a[i++]=val;
}

quicksort(a,0,i-1);

printf("\nSorted array is : \n");
for(j=0;j<i;j++)
{
printf("%d\t",a[j]);
fprintf(output,"%d\t",a[j]);
}
printf("\n");
fclose(input);
fclose(output);
return 0;
}
