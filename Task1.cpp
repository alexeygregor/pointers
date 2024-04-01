#include <iostream>
#include <numeric>
#include <limits>
using namespace std;

void swap_(int *a, int *b)
{
  swap (*a, *b);
  cout << "a = " << *a << " ; b = " << *b << endl;
}

int main ()
{
  int a = 0, b = 0;

  while (true)
  {
    cout << "Enter a & b: ";
    cin >> a;
    if (a == -1) { return 0; }
    cin >> b;

    if (cin.fail() || cin.peek() != '\n')
    {
      cerr << "Error \n";
      cin.clear();
      cin.ignore (numeric_limits < streamsize > ::max(), '\n');
      return 0;
    }
    else
      swap_(&a, &b);
  }
}
