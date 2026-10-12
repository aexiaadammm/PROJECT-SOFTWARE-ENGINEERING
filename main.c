#include<iostream>
using namespace std;
int sum(int a[],int n)
{
int sum =0;
for(int i=0;i<n;i++)
{
    sum=sum+a[i];
}
return sum;
}
int main()
{
    int a[5,10,28,30,50];
    cout<<sum(a,5);
}
