#include <iostream>
#include <process.h>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream f1, f2;
    char ch;
    f1.open("original.txt", ios::out);
    cout << "\nEnter data and press enter at last : ";
    cin.get(ch);
    while (ch != '\n')
    {
        f1.put(ch);
        cin.get(ch);
    }
    f1.close();
    f1.open("original.txt", ios::in);
    if (!f1)
    {
        cout << "\nFile not found.";
        exit(0);
    }
    cout << "\n\nOriginal file contents : ";
    f1.get(ch);
    while (!f1.eof())
    {
        cout << ch;
        f1.get(ch);
    }
    f1.close();
    f1.open("original.txt", ios::in);
    f2.open("copy.txt", ios::out);
    if (!f2)
    {
        cout << "\nFile not found.";
        exit(0);
    }
    f1.get(ch);
    while (f1)
    {
        f2.put(ch);
        f1.get(ch);
    }
    cout << "\nContents copied.";
    f1.close();
    f2.close();
    f2.open("copy.txt", ios::in);
    if (!f2)
    {
        cout << "\nFile not found.";
        exit(0);
    }
    cout << "\nContents of Copied file : ";
    f2.get(ch);
    while (!f2.eof())
    {
        cout << ch;
        f2.get(ch);
    }
    f2.close();
    return 0;
}