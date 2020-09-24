#include <iostream>
using namespace std;

int main() {
  double a;
  cout << "Check whether a number is positive, negative or zero :" << endl;
  cout << "---------------------------------" << endl;

  cout << "Introduceti nr dumneavoastra: ";
  cin >> a;

  if(a < 0){
    cout << "Numarul este negativ! " << endl;
    
  }
  else 
    cout << "Numarul este pozitiv! " << endl;
  return 0;
}
//Check whether a number is positive, negative or zero :