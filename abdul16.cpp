#include<iostream>
using namespace std;
int main()
{
int n,i,c=0;
cin>>n;
for(i=1;i<=Qn;i++)
{
if(n%i==0)
c++;
}
if(c==2)
cout<<"prime number";
else
cout<<"number is not prime";
return 0;
}
