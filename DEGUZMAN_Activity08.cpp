#include <iostream>

using namespace std;

//addition
int add(int num1, int num2);
double add(double num1, double num2);
//subtruction
int subtract(int num1, int num2);
double subtract(double num1, double num2);
//multiplication
int multiply(int num1, int num2);
double multiply (double num1, double num2);
//division
int divide(int num1, int num2);
double  devide (double num1, double num2);

int main(){

//additon
cout << add(3,3) << endl;
cout << add(7.53,2.69)<< endl;
//subtruction
cout << subtract(3,9) << endl;
cout << subtract(7.53,2.69)<< endl;
//multiplication
cout << multiply(3,9) << endl;
cout << multiply(7.53,2.69)<< endl;
//division
cout << devide(3,9) << endl;
cout << devide(7.53,2.69)<< endl;	
return 0;
	
}
//additon
int add(int num1, int num2){
return num1 + num2;
}
//subtruction
int subtract(int num1, int num2){
return num1 - num2;
}
//multiplication
int multiply(int num1, int num2){
return num1 * num2;
}
//division
int  devide(int num1, int num2){
return num1 / num2;

}
//additon
double add(double num1, double num2){
return num1 + num2;
}
//subtruction
double subtract(double num1, double num2){
return num1 - num2;
}
//multiplication
double multiply(double num1, double num2){
return num1 * num2;
}
//multiplication
double devide(double num1, double num2){
return num1 / num2;
}
