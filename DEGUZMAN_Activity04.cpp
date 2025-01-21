#include <iostream>

using namespace std;

int main(){
	 
	struct{
	string name= "";
	int age = 0;
	string course= "";
	int year = 0;
	string block= "";
	string gender= "";
	}student1,student2,student3,student4;
	
//student 1
	cout<<"***********************************************\n";
	student1.name ="RainelDave R. Azures";
	student1.age = 16;
	student1.course = "Bachelor of Science in Information Technology";
	student1.year = 1;
	student1.block = "B";
	student1.gender = "Male";

	cout<< student1.name << endl;
	cout<< student1.age << endl;
	cout<< student1.course << endl;
	cout<< student1.year << endl;
	cout<< student1.block << endl;
	cout<< student1.gender << endl;
	
//student 2
	cout<<"***********************************************\n";	
	student2.name ="Joshua M. De Guzman";
	student2.age = 18;
	student2.course = "Bachelor of Science in Information Technology";
	student2.year = 1;
	student2.block = "B";
	student2.gender = "Male";

	cout<< student2.name << endl;
	cout<< student2.age << endl;
	cout<< student2.course << endl;
	cout<< student2.year << endl;
	cout<< student2.block << endl;
	cout<< student2.gender << endl;
	
//student3
	cout<<"***********************************************\n";
	student3.name ="Lariel D. Conmigo";
	student3.age = 18;
	student3.course = "Bachelor of Science in Information Technology";
	student3.year = 1;
	student3.block = "B";
	student3.gender = "Male";

	cout<< student3.name << endl;
	cout<< student3.age << endl;
	cout<< student3.course << endl;
	cout<< student3.year << endl;
	cout<< student3.block << endl;
	cout<< student3.gender << endl;
	
//student4
	cout<<"***********************************************\n";
	student4.name ="Nielberto A. Cajan ";
	student4.age = 23;
	student4.course = "Bachelor of Science in Information Technology";
	student4.year = 1;
	student4.block = "B";
	student4.gender = "Female";

	cout<< student4.name << endl;
	cout<< student4.age << endl;
	cout<< student4.course << endl;
	cout<< student4.year << endl;
	cout<< student4.block << endl;
	cout<< student4.gender << endl;
	
	return 0;
	
}
