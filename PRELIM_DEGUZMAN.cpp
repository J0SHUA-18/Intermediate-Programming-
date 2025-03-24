#include<iostream>

using namespace std;


struct Student{
	string Name;
	int StudentID;
	float Grades[5];
};
float CAverage(float Grades[],int size){
	float sum = 0;
		for(int i = 0; i < size; i++){
		sum += Grades[i];
	}
	return sum / size;
}
	

int main(){
	Student students[3];
	
	for(int i = 0; i < 3; i++){
		cout << " PLEASE ENTER THE DETAIL OF STUDENT " << i + 1 << ":\n";
		cout << "Name: ";
		getline(cin, students[i].Name );
		cout << "PLEASE ENTER THE STUDENT ID: ";
		cin >> students[i].StudentID;
		cout << "PLEASE ENTER THE GRADES IN 5 SUBJECT: \n" ;
	for(int j = 0; j < 5; j++) {
		cin >> students[i].Grades[j];
		
	}
	cin.ignore();
	cout << endl;
}

	cout << "Average Grades: "	<< endl;
	for (int i = 0; i < 3; i++){
		float average = CAverage(students[i].Grades, 5);
		
		cout << students[i].Name << "( " << students[i].StudentID << ")-" << (int)(average*10)/10.0 << endl;
	}	
	return 0;
}
	
