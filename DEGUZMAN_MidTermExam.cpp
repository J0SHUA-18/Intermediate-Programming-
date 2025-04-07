#include <iostream>
#include <queue>
#include <string>

using namespace std;

void addCustomer(queue<string> &customers) {
    string name;
    cout << "Enter the Name: ";
    cin >> name;
    customers.push(name);
    cout << "Customer " << name << " added." << endl << endl;
}

void serveCustomer(queue<string> &customers) {
    if (customers.empty()) {
        cout << "No customers to serve, the queue is empty!" << endl << endl;
    } else {
        cout << "Serving Now: " << customers.front() << endl;
        customers.pop();
        cout << endl;
    }
}

void displayQueue(queue<string> customers) {
    if (customers.empty()) {
        cout << "The queue is empty." << endl << endl;
    } else {
        cout << "Current queue of customers: ";
        while (!customers.empty()) {
            cout << customers.front() << " ";
            customers.pop();
        }
        cout << endl << endl;
    }
}

int main() {
    queue<string> customers;
    int choice;

    do {
        cout << "Customer Support System Menu:" << endl;
        cout << "1. Add Customer to Queue" << endl;
        cout << "2. Serve Next Customer" << endl;
        cout << "3. Display Customer Queue" << endl;
        cout << "4. Exit System" << endl;
        cout << "Select an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addCustomer(customers);
                break;
            case 2:
                serveCustomer(customers);
                break;
            case 3:
                displayQueue(customers);
                break;
            case 4:
                cout << "Exiting the Customer Support System. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl << endl;
        }
    } while (choice != 4);

    return 0;
}
