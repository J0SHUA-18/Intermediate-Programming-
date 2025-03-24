#include <iostream>

using namespace std;

class Student {
	
	private:
		string name;
		int age;
		string course;
		string block;
		string year;
		
	public:
		void setName(string params) {
			name = params;
		}
		void setAge(int params) {
			age = params;
		}
		void setCourse(string params) {
			course = params;
		}
		void setBlock(string params) {
			block = params;
		}
		void setYear(string params) {
			year = params;
		}
//output
		string getName() {
			return name;
		}		
		int getAge() {
			return age;
		}	
		string getCourse() {
			return course;
		}		
		string getBlock() {
			return block;
		}	
		string getYear() {
			return year;
		}	
		
};

int main() {
	Student pupil1, pupil2, pupil3, pupil4, pupil5;
	string sName;
	int sAge;
	string sCourse;
	string sBlock;
	string sYear;
//student 1	
	cout << "            Student 1 \n";	
	cout << "Input your name: ";
	getline(cin, sName);
	cout << "Input your age: ";
	cin >> sAge;
	cin.ignore();
	cout << "Input your course: ";
	getline(cin, sCourse);
	cout << "Input your block: ";
	getline(cin, sBlock);
	cout << "Input your year: ";
	getline(cin, sYear);
	
	pupil1.setName(sName);
	pupil1.setAge(sAge);
	pupil1.setCourse(sCourse);
	pupil1.setBlock(sBlock);
	pupil1.setYear(sYear);
//student 2	
	cout << endl;
	cout << "            Student 2 \n";
	cout << "Input your name: ";
	getline(cin, sName);
	cout << "Input your age: ";
	cin >> sAge;
	cin.ignore();
	cout << "Input your course: ";
	getline(cin, sCourse);
	cout << "Input your block: ";
	getline(cin, sBlock);
	cout << "Input your year: ";
	getline(cin, sYear);
	
	pupil2.setName(sName);
	pupil2.setAge(sAge);
	pupil2.setCourse(sCourse);
	pupil2.setBlock(sBlock);
	pupil2.setYear(sYear);
//student 3
	cout << endl;
	cout << "            Student 3 \n";
	cout << "Input your name: ";
	getline(cin, sName);
	cout << "Input your age: ";
	cin >> sAge;
	cin.ignore();
	cout << "Input your course: ";
	getline(cin, sCourse);
	cout << "Input your block: ";
	getline(cin, sBlock);
	cout << "Input your year: ";
	getline(cin, sYear);
	
	pupil3.setName(sName);
	pupil3.setAge(sAge);
	pupil3.setCourse(sCourse);
	pupil3.setBlock(sBlock);
	pupil3.setYear(sYear);
//student 4
	cout << endl;
	cout << "            Student 4 \n";
	cout << "Input your name: ";
	getline(cin, sName);
	cout << "Input your age: ";
	cin >> sAge;
	cin.ignore();
	cout << "Input your course: ";
	getline(cin, sCourse);
	cout << "Input your block: ";
	getline(cin, sBlock);
	cout << "Input your year: ";
	getline(cin, sYear);
	
	pupil4.setName(sName);
	pupil4.setAge(sAge);
	pupil4.setCourse(sCourse);
	pupil4.setBlock(sBlock);
	pupil4.setYear(sYear);
//student 5
	cout << endl;
	cout << "            Student 5 \n";
	cout << "Input your name: ";
	getline(cin, sName);
	cout << "Input your age: ";
	cin >> sAge;
	cin.ignore();
	cout << "Input your course: ";
	getline(cin, sCourse);
	cout << "Input your block: ";
	getline(cin, sBlock);
	cout << "Input your year: ";
	getline(cin, sYear);
	cout << endl;
	
	pupil5.setName(sName);
	pupil5.setAge(sAge);
	pupil5.setCourse(sCourse);
	pupil5.setBlock(sBlock);
	pupil5.setYear(sYear);

//output
	cout << "-------------------------------------------------------------------------------\n";
	cout << endl;
	cout << "Information of student 1: \n";
	cout << "Name: " << pupil1.getName() << endl;
	cout << "Age: " << pupil1.getAge() << endl;
	cout << "Course: " << pupil1.getCourse() << endl;
	cout << "Block: " << pupil1.getBlock() << endl;
	cout << "Year: " << pupil1.getYear() << endl;
	
	cout << endl;
	cout << "Information of student 2: \n";
	cout << "Name: " << pupil2.getName() << endl;
	cout << "Age: " << pupil2.getAge() << endl;
	cout << "Course: " << pupil2.getCourse() << endl;
	cout << "Block: " << pupil2.getBlock() << endl;
	cout << "Year: " << pupil2.getYear() << endl;
	
	cout << endl;
	cout << "Information of student 3: \n";
	cout << "Name: " << pupil3.getName() << endl;
	cout << "Age: " << pupil3.getAge() << endl;
	cout << "Course: " << pupil3.getCourse() << endl;
	cout << "Block: " << pupil3.getBlock() << endl;
	cout << "Year: " << pupil3.getYear() <<endl;
	
	cout << endl;
	cout << "Information of student 4: \n";
	cout << "Name: " << pupil4.getName() << endl;
	cout << "Age: " << pupil4.getAge() << endl;
	cout << "Course: " << pupil4.getCourse() << endl;
	cout << "Block: " << pupil4.getBlock() << endl;
	cout << "Year: " << pupil4.getYear() << endl;

	cout << endl;
	cout << "Information of student 5: \n";
	cout << "Name: " << pupil5.getName() << endl;
	cout << "Age: " << pupil5.getAge() << endl;
	cout << "Course: " << pupil5.getCourse() << endl;
	cout << "Block: " << pupil5.getBlock() << endl;
	cout << "Year: " << pupil5.getYear();
	return 0;
}

