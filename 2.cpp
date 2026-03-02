#include <iostream>
using namespace std;
int main() {
int b;
cout << "Введіть вашу оцінку: ";
cin >> b;
if (b >= 90 && b <= 100){
cout <<"5 - Відмінно";    
}
else if (b >= 75 && b <= 89) {
cout <<"4 - Добре"; 
}
else if (b >= 62 && b <= 74) {
cout <<"3 - Задовільно"; 
}
else if (b >= 50 && b <= 61) {
cout <<"2 - Перездача"; 
}
else {
cout <<"1 - Відрахування" ;  
}    
return 0;
}