#include <iostream>

using namespace std;

int add (int a, int b){
	int sum = a + b;
return sum;
}

int subtract (int a, int b){
	int nus = a - b;
return nus;
}


int multiply (int a, int b){
	int multi = a * b;
return multi;
}

int division (int a, int b){
int quotient = a/ b;
return quotient;
}


int main(){
	cout<< add(2,4) << endl;
	cout<< subtract(4,10) << endl;
	cout<< multiply(2,3) << endl;
	cout<< division(12,2) << endl;
	return 0;
}

