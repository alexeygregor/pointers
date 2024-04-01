#include <iostream>
using namespace std;

void swap_
(int *l1, int *l2, int *l3, int *l4, int *l5, int *l6, int *l7, int *l8, int *l9, int *l10)
{
  char reverse_[] = {*l10, *l9, *l8, *l7, *l6, *l5, *l4, *l3, *l2, *l1};

  for (int i = 0; i < 10; i++)
  {
    cout << (int) reverse_[i] << endl;
  }
}

int main ()
{
  int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7, h = 8, i = 9, j = 10;

  swap_(&a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
}
