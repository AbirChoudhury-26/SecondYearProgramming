#include <iostream>  
#include <string>  
using namespace std;  
  
int main ()  
{  
    string strdata1 = "108";  
    string strdata2 = "56.78";  
    string strdata3 = "578 Welcome";  
      
    // use stoi() function to pass string as arguments  
    int intdata1 = stoi (strdata1);  
    int intdata2 = stoi (strdata2);  
    int intdata3 = stoi (strdata3);  
      
    // print the converted values  
    cout << " The conversion of string to an integer using stoi(\"" << strdata1 << "\") is " << intdata1 <<endl;  
    cout << " The conversion of string to an integer using stoi(\"" << strdata2 << "\") is " << intdata2 <<endl;  
    cout << " The conversion of string to an integer using stoi(\"" << strdata3 << "\") is " << intdata3 <<endl;  
    return 0;  
}   