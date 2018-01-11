#include <fstream>
#include <iostream>
using namespace std;
int main()
{
  fstream file("file.txt",ios:in|ios:out);
  char x;
  while( file>>x)
  {
    file<<'0';
  }
 return 0;
}
