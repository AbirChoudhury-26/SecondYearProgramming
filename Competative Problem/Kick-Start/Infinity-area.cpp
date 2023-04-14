// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     for(int i=1;i<=t;i++)
//     {
//         int r,a,b,left=1,right=0;
//         cin>>r>>a>>b;
//         double area;
//         area=3.141592653*r*r;
//         while(r>0)      //5 2 5
//         {
//             if(left==1)
//             {
//                 r=r*a;
//                 area=area+(3.141592653*r*r);
//                 right=1;
//                 left=0;
//             }
//             else if(right==1)
//             {
//                 r=r/b;
//                 area=area+(3.141592653*r*r);
//                 left=1;
//                 right=0;
//             }
//             cout<<r<<endl;
//         }
//         cout<<"case #"<<i<<": ";
//         cout<<fixed<<setprecision(6)<<area<<endl;;
//     }
//     return 0;
}
// #include <bits/stdc++.h>
// #define PI M_PI
// using namespace std;
// int main() {
// 	int t,tt= 1;
// 	cin>>t;
// 	while(t--){
// 	    int r,a,b;
// 	    cin>>r>>a>>b;
// 	    double area = 0;
// 	    int temp = 0;
// 	    while(r>0){
// 	        if(temp==0)r = r;
// 	        else if(temp%2==0)r/=b;
// 	        else r*=a;
// 	         area+=(PI*r*r);
// 	        temp++;
// 	    }
// 	    cout<<"Case #"<<tt<<": ";
// 	    cout << fixed << setprecision(6) << area<<endl;
// 	    tt++;
// 	}
// 	return 0;
// }
#include<iostream>
#include <bits/stdc++.h>
#define PI M_PI
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int r,a,b;
	    cin>>r>>a>>b;
	    double area;
	    int f=0;
	    while(r>0){
	        if(f==0)
	         r = r;
	        else if(f%2==0)
	        {
	            r=r/b;
	        }
	        else 
	          r*=a;
	
	         area+=(PI*r*r);
	        f++;
	    }
	    cout<<"Case #"<<i<<": ";
	    cout << fixed << setprecision(6) << area<<endl;
	}
	return 0;
}