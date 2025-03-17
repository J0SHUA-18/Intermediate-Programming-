#include <iostream>

using namespace std;

class Student {
	public:
		string name;
		int age;
		string course;
		string block;
		int year;
		
	Student(string getname,string getcourse,string getblock, int getyear,int getage){
		name = getname;
		course = getcourse;
		block = getblock;
		age = getage;
		year = getyear;		
	}	
};

int main(){
	Student pupil1("Joshua M De Guzman", "BSIT", "Block-B", 1, 19);
	Student pupil2("NelBerto Cajan", "BSIT", "Block-B", 1, 69);
	Student pupil3("Miko Capillan", "BSIT", "Block-B", 1, 30);
	Student pupil4("Rainel R Azures", "BSIT", "Block-B", 1, 20);
	Student pupil5("Jian Kim Alto", "BSIT", "Block-B", 1, 60);
	
	cout << pupil1.name << " " << pupil1.course << " " << pupil1.block << " " << pupil1.year << " " << pupil1.age << endl;
	cout << pupil2.name << " " << pupil2.course << " " << pupil2.block << " " << pupil2.year << " " << pupil2.age << endl;
	cout << pupil3.name << " " << pupil3.course << " " << pupil3.block << " " << pupil3.year << " " << pupil3.age << endl;
	cout << pupil4.name << " " << pupil4.course << " " << pupil4.block << " " << pupil4.year << " " << pupil4.age << endl;
	cout << pupil5.name << " " << pupil5.course << " " << pupil5.block << " " << pupil5.year << " " << pupil5.age << endl;
}
