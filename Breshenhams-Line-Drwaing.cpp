#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,y1,y2;
    cout<<"Enter the first Coordinates: ";
    cin>>x1>>y1;
    cout<<endl;
    cout<<"Enter the second Coordinates: ";
    cin>>x2>>y2;
    int dx=abs(x2-x1);
    int dy=abs(y2-y1);
    int d=(2*(dy)-dx);
    if(dy<dx)
    {
        int x=x1;
        int y=y1;
        while(x1!=x2)
        {
            if(d<0)
            {
             cout<<x<<" "<<y;
             x++;
             y=y1;
             d=d+(2*dy);
            }
            else
            {
                cout<<x<<" "<<y;
                x++;
                y=y+1;
                d=d+(2*(dy-dx));
            }
            cout<<endl;
        }
        cout<<x<<" "<<y<<endl;
    }
}