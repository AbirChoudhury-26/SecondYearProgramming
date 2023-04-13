#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        float p1[4],p2[4],p3[4],z[4]={0};
        for(int a=0;a<4;a++)
            cin>>p1[a];
        for(int a=0;a<4;a++)
            cin>>p2[a];
        for(int a=0;a<4;a++)
            cin>>p3[a];
        float sum=1000000;
        int j=0;
        while(sum>0&&j<4)
        {
            if(p1[j]<=p2[j]&&p1[j]<=p3[j])
            {
                z[j]=p1[j];
                sum-=p1[j];
            }
            else if(p2[j]<=p1[j]&&p2[j]<=p3[j])
            {
                z[j]=p2[j];
                sum-=p2[j];
            }
            else if(p3[j]<=p1[j]&&p3[j]<=p2[j])
            {
                z[j]=p3[j];
                sum-=p3[j];
            }
            j++;
        }
        if(sum>0)
        {
            cout<<"Case #"<<i<<": IMPOSSIBLE"<<endl;
        }
        else if(sum==0)
        {
            cout<<"Case #"<<i<<": ";
            for(int r=0;r<4;r++)
                cout<<z[r]<<" ";
            cout<<endl;
        }
        else
        {
            z[j-1]+=sum;
            cout<<"Case #"<<i<<": ";
            for(int r=0;r<4;r++)
                cout<<z[r]<<" ";
            cout<<endl;
        }
    }
}