#include <iostream>
using namespace std;
int main()
{
  int count = 0,f=0;
  // char a[300]="A quick brown fox jumps over a lazy dog.";
  char a[300] = "     A quick      brown fox jump' s over a lazy dog    .  Abir Choudhury.";
  for (int i = 0; a[i] != '\0'; i++)
  {
    if (a[i] != ' ')
      f = 1;
    else if(a[i]='.')
     f=0;
    if (f == 1)
    {
      if (a[i] == ' ' && (a[i + 1] != ' ' && a[i + 1] != '.'))
        count++;
      cout << a[i] << " " << count << endl;
    }
  }
}