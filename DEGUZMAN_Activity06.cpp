#include <iostream>

using namespace std;

void printarray(int number[10]);

int main(){
	
		int number[10];
		int evennumber[10];
 
	for(int i = 0; i < 10; i++){
		cin >> number[i];
	}
	printarray(number);
	
	return 0;
}
void printarray(int numbers[10]){
	for (int	i = 9; i >= 0; i--){
		cout << numbers[i] << endl;
	}
}

