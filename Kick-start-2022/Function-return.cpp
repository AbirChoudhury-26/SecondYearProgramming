#include <iostream>
#include <string>

using namespace std;

string GetRuler(const string &kingdom)
{
    string ruler;
    char c = kingdom[kingdom.length() - 1];
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        ruler = "Alice";
    else if (c == 'Y' || c == 'y')
        ruler = "nobody";
    else 
        ruler = "Bob";
    return ruler;
}

int main()
{
    int testcases;
    cin >> testcases;
    string kingdom;

    for (int t = 1; t <= testcases; ++t)
    {
        cin >> kingdom;
        cout << "Case #" << t << ": " << kingdom << " is ruled by "
             << GetRuler(kingdom) << ".\n";
    }
    return 0;
}
