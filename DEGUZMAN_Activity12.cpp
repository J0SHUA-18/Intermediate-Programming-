#include <iostream>

using namespace std;

class Student {
	public:
		string name;
		int age;
		string course;
		string block;
		string year;
		
	Student(string getName, int getAge, string getCourse, string getBlock, string getYear) {
		name = getName;
		course = getCourse;
		block = getBlock;
		year = getYear;
		age = getAge;
	}
	
};

int main() {
	string name;
	int age;
	string course;
	string block;
	string year;
	
	cout << "Enter your name, age, course, block and year: \n";
	cout << "Name: ";
	getline (cin, name);
	cout << "Age: ";
	cin >> age;
	cin.ignore();
	cout  << "Course: ";
	getline (cin, course);
	cout << "Block: ";
	getline (cin, block);
	cout << "Year: ";
	getline (cin, year);
	cout << endl;
	
	Student pupil1(name, age, course, block, year);
	cout << "Information of Student 1: ";
	cout << pupil1.name << " " << pupil1.age << " " << pupil1.course << " " << pupil1.block << " " << pupil1.year << endl;
	cout << endl;
	
	cout << "Name: ";
	getline (cin, name);
	cout << "Age: ";
	cin >> age;
	cin.ignore();
	cout  << "Course: ";
	getline (cin, course);
	cout << "Block: ";
	getline (cin, block);
	cout << "Year: ";
	getline (cin, year);
	cout << endl;
	
	Student pupil2(name, age, course, block, year);
	cout << "Information of Student 2: ";
	cout << pupil2.name << " " << pupil2.age << " " << pupil2.course << " " << pupil2.block << " " << pupil2.year << endl;
	cout << endl;
	
	cout << "Name: ";
	getline (cin, name);
	cout << "Age: ";
	cin >> age;
	cin.ignore();
	cout  << "Course: ";
	getline (cin, course);
	cout << "Block: ";
	getline (cin, block);
	cout << "Year: ";
	getline (cin, year);
	cout << endl;
	
	Student pupil3(name, age, course, block, year);
	cout << "Information of Student 3: ";
	cout << pupil3.name << " " << pupil3.age << " " << pupil3.course << " " << pupil3.block << " " << pupil3.year << endl;
	cout << endl;
	
	cout << "Name: ";
	getline (cin, name);
	cout << "Age: ";
	cin >> age;
	cin.ignore();
	cout  << "Course: ";
	getline (cin, course);
	cout << "Block: ";
	getline (cin, block);
	cout << "Year: ";
	getline (cin, year);
	cout << endl;
	
	Student pupil4(name, age, course, block, year);
	cout << "Information of Student 4: ";
	cout << pupil4.name << " " << pupil4.age << " " << pupil4.course << " " << pupil4.block << " " << pupil4.year << endl;
	cout << endl;
	
	cout << "Name: ";
	getline (cin, name);
	cout << "Age: ";
	cin >> age;
	cin.ignore();
	cout  << "Course: ";
	getline (cin, course);
	cout << "Block: ";
	getline (cin, block);
	cout << "Year: ";
	getline (cin, year);
	cout << endl;
	
	Student pupil5(name, age, course, block, year);
	cout << "Information of Student 5: ";
	cout << pupil5.name << " " << pupil5.age << " " << pupil5.course << " " << pupil5.block << " " << pupil5.year << endl;
	cout << endl;
	
	return 0;
}

