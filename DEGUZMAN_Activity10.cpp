#include <iostream>
#include <set>

using namespace std;

int main() {
    set<string> names;
    string name;
    
    cout << "Enter 10 names: \n";
    for (int i = 0; i < 10; i++) {
        getline(cin, name);
        names.insert(name);
    }
    cout << endl;
    cout << "Names in alphabetical order: \n";
    for (string Name : names) { // Removed the 'const' keyword
        cout << Name << endl;
    }
    
    return 0;
}

