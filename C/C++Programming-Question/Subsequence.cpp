#include <iostream>

using namespace std;

int main()
{

  int arr[] = { 1,2,3};

  // number of elements in the array 
  const int SIZE = sizeof(arr) / sizeof(*arr);

  // start marker 
  for (int i = 0; i < SIZE; i++)
  {

    // end marker 
    for (int j = i; j < SIZE; j++)
    {

      // print the array from i to j 
      for (int k = i; k <= j; k++)
      {

        cout << arr[k] << " ";

      }

      cout << endl;

    }

  }

  return 0;

}