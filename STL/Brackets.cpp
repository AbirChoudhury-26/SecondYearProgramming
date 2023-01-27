#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> ch;
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count =0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==')')
        {
            if(count>=1)
            {
                count--;
            }
            else
            {   
                char a = '(';
                ch.push_back(a);
            }
        }
        else if(s[i]== '(' )
        {   
            if(s[i+1]==')')
            {
                i++;
                continue;
            }
            count++;
        }
    }
    for (auto it = ch.begin(); it != ch.end(); it++)
        cout << *it;
    for(int i=0;s[i]!='\0';i++)
        cout<<s[i];
    for(int i=0;i<count;i++)
        cout<<")";
    return 0;
}