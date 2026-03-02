#include <iostream>
using namespace std;
int main () {
int m;
cout << "Введіть номер місяця:";    
cin >> m;
switch (m) {
case 4: case 6:
case 9: case 11: cout << "30 днів"; break;
case 1: case 3: case 5:
case 7: case 8: 
case 10: case 12: cout << "31 день"; break;
case 2: cout << "28 днів"; break;
}
return 0;
}
