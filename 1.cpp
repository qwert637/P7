#include <iostream>
using namespace std;
int main () {
int d;
cout << "Введіть номер сьогоднішнього дня:";    
cin >> d;
switch (d) {
case 1 : cout << "Понеділок"; break;
case 2 : cout << "Вівторок"; break;
case 3 : cout << "Середа"; break;
case 4 : cout << "Четверг"; break;
case 5 : cout << "П'ятниця"; break;
case 6 : cout << "Cубота"; break;
case 7 : cout << "Неділя"; break;
}
return 0;
}

