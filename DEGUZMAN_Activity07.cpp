#include <iostream>

using namespace std;

 struct Name{
	string name= "";
	int age = 0;
	string course= "";
	int year = 0;
	string block= "";
	string gender= "";
	};
	
	void getInput(Name &student);
	void displayName(Name student1);
	
int main(){
	
	Name student1,student2,student3,student4; 
	
	cout << "ENTER PERSON 1\n";
	getInput(student1);
	displayName(student1);
	cout << "ENTER PERSON 2\n";
	getInput(student2);
	displayName(student2);
	cout << "ENTER PERSON 3\n";
	getInput(student3);
	displayName(student3);
	cout << "ENTER PERSON 4\n";
	getInput(student4);
	displayName(student1);
	return 0;
}
	void getInput(Name &student){
	cout <<"Enter Name: ";
	getline(cin, student.name);
	cout <<"Enter Age: ";
 cin >> student.age;
	cin.ignore();
	cout <<"Enter Course: ";
	getline(cin, student.course);;
	cout <<"Enter Year: ";
	cin >> (cin, student.year);
	cin.ignore();
	cout <<"Enter Block: ";
	getline(cin, student.block);
	cout <<"Enter Gender: ";
	getline(cin, student.gender);
}
void displayName(Name student1){
	cout << student1.name << endl;
	cout << student1.age << endl;
	cout << student1.course << endl;
	cout << student1.year << endl;
	cout << student1.block << endl;
	cout << student1.gender << endl;
}	
	
