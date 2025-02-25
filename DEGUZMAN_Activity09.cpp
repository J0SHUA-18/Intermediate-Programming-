#include <iostream>
#include<vector> 

using namespace std;

int main(){
	
	vector <int> numbers = {};
	int num;
	
	cout << "Please Enter 10 Numbers";
	
	for(int i = 0; i < 10; i++){
		cin >> num;
		numbers.push_back(num);
	}
	
	for (int i: numbers){
		cout << i << endl;
	}
	
	return 0;
}

