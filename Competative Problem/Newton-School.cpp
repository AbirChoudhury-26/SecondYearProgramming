#include<iostream>
using namespace std;
int main() {
int x,y,count=0;
cin>>x>>y;
if(x==y)
{
	count=0;
}
else if(x-y==1||y-x==1)
{
	count++;
	
}
else if(x%y==0||y%x==0)
count++;
else
count=2;
cout<<count<<endl;
}