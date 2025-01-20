#include <iostream>
#include <string>

using namespace std;

int main () {
    
    int evennumber[10];
    int number[10];
    
    for(int i  = 0; i < 10; i++){
        cin >> number[i];
    }
    for (int i = 0; i < 10; i++)
        if (number [i] % 2 == 0 ){
        evennumber[i] = number[i];
        cout << evennumber[i] << endl;
        }
    
  return 0;
 }