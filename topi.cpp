#include<curses.h>
#include<iostream>
using namespace std;

void solve(int a[],int val,int n)
{
int i; //insert value selecting the correct position of the particular value
for(i=n-1;val>a[i] && i>=0;i--)
a[i+1]=a[i];
a[i+1]=val;
}

int main()
{
int a[100],val,n,i;
cout<<"Enter which positioned value : ";
cin>>n;
for(i=0;i<n;i++)
a[i]=0;
cout<<"Enter the array elements : \n";
do
{
cin>>val;
solve(a,val,n);
}while(getchar()!='q');
cout<<"The "<<n<<" positioned greatest value is : "<<a[n-1]<<"\n";
for(i=0;i<n;i++)
cout<<a[i]<<"\t";
cout<<endl;
return(0);
}
