#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> stack;
        string s;
        int i;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (stack.empty() || s[i] != stack.top())
                stack.push(s[i]);
            else if (s[i] == stack.top())
                stack.pop();
        }
        cout << stack.size() << endl;
    }
    return 0;
}