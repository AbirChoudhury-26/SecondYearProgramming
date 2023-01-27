#include <bits/stdc++.h>
#define ll long long
using namespace std;
void check(int ones){
    switch(ones){
        case 1:
            std::cout << "one" << endl;
            break;
        case 2:
            std::cout << "two" << endl;
            break;
        case 3:
            std::cout << "three" << endl;
            break;
        case 4:
            std::cout << "four" << endl;
            break;
        case 5:
            std::cout << "five" << endl;
            break;
        case 6:
            std::cout << "six" << endl;
            break;
        case 7:
            std::cout << "seven" << endl;
            break;
        case 8:
            std::cout << "eight" << endl;
            break;
        case 9:
            std::cout << "nine" << endl;
            break;
        default:
            std::cout << "zero" << endl;
            break;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ones = n%10,tens = n/10;
    switch(tens){
        case 0:
          check(ones);
          break;
        case 2:
          std::cout << "twenty" << " ";
          check(ones);
          break;
        case 3:
          std::cout << "thirty" << " ";
          check(ones);
          break;
        case 4:
          std::cout << "forty" << " ";
          check(ones);
          break;
        case 5:
          std::cout << "fifty" << " ";
          check(ones);
          break;
        case 6:
          std::cout << "sixty" << " ";
          check(ones);
          break;
        case 7:
          std::cout << "seventy" << " ";
          check(ones);
          break;
        case 8:
          std::cout << "eighty" << " ";
          check(ones);
          break;
        case 9:
          std::cout << "ninety" << " ";
          check(ones);
          break;  
        default:
          switch(ones){
              case 1:
                std::cout << "eleven" << endl;
                break;
              case 2:
                std::cout << "twelve" << endl;
                break;
              case 3:
                std::cout << "thirteen" << endl;
                break;
              case 4:
                std::cout << "forteen" << endl;
                break;
              case 5:
                std::cout << "fifteen" << endl;
                break;
              case 6:
                std::cout << "sisteen" << endl;
                break;
              case 7:
                std::cout << "seventeen" << endl;
                break;
              case 8:
                std::cout << "eighteen" << endl;
                break;
              case 9:
                std::cout << "nineteen" << endl;
                break;
              default:
                std::cout << "ten" << std::endl;
                break;
            }
         
    }
   
   
return 0;
}
