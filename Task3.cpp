#include <iostream>
using namespace std;

bool sbstr (const char *val1, const char *val2)
{
  int inc1 = 0, inc2 = 0, inc3 = 0, cnt = 0;

  while (*(val1 + inc1) != '\0')
  {
    if (*(val2 + inc2) == *(val1 + inc1))
      inc2++;
    inc1++;
  }

  while (*(val2 + inc3) != '\0')
  {
    cnt++; inc3++;
  }

  if (inc2 == 0 || inc2 != cnt)
  {
    cout << "FALSE" << endl;
    return false;
  }
  else
  {
    cout << "TRUE" << endl;
    return true;
  }
}

int main ()
{
  const char* a = "Hello world!";
  const char* b = "wor";
  const char* c = "banana";

  cout << sbstr (a, b) << endl;
  cout << sbstr (a, c) << endl;
}
