#include <iostream>
using namespace std;

int main() {
int n=0, a=1, b=1, c=0;
cin >> n;
If (n>=2) {
cout << a << endl << b << endl ;
for (int i=0; i <= n; i++){
c=a+b;
a=b;
b=c;
cout << c << endl;

  }
}
Else {
cout << "errore" << endl;
}
   return 0;
}
