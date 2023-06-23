#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char *argv[])
{
int i = 1 , n ;
cin >> n;
while (i <= n)
if ((i % n) == 0)
++i;
cout << i << endl;
system("PAUSE");
return 0;

}// la salida 0 sera 1, la salida 1 sera 2, la salida 3 sera infinito