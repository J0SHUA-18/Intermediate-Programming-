//PRODUCT INVENTORY MANAGEMENT SYSTEM
#include <iostream>
#include <vector>

using namespace std;

class Product {
	private:
		string name;
		int price;
		int quantity;
		
	public:
		void addProduct() {
			cout << "Enter product name: ";
			getline(cin, name);
			cout << "Enter price: ";
			cin >> price;
			cout << "Enter quantity: ";
			cin >> quantity;
			cin.ignore();
		}
		
		void displayProducts() {
			cout << "Product Name: " << name << " | " << "Price: PHP " << price << " | " << "Quantity: " << quantity << endl;
		}
		
		void updatePrice(int newPrice) {
			price = newPrice;
		}
		
		void updateQuantity(int newQuantity) {
			quantity = newQuantity;
		}
		
		string getName() {
			return name;
		}
};

int main() {
	
	vector<Product> inventory;
	
	int choice;
	
	do {
		cout << "\n--Product Inventory Menu--\n";
		cout << "1. Add Product\n";
		cout << "2. View All Products\n";
		cout << "3. Update Price\n";
		cout << "4. Update Quantity\n";
		cout << "5. Remove Product\n";
		cout << "6. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;
		cin.ignore();
		
		switch(choice) {
			case 1: {
				Product p;
				p.addProduct();
				inventory.push_back(p);
				cout << "Product added successfully!\n";
				break;
			}
			case 2:{
				if(inventory.empty()) {
					cout << "No products in the inventory\n";
				} else {
					cout << "--Inventory List--\n";
//					for(int i = 0; i < inventory.size(); i++) {
//						cout << i;
//						inventory[i].displayProducts();						
//					}
					int count = 0;
					for(Product inv : inventory) {
						cout << count << ". ";
						inv.displayProducts();
						count++;
					}
				}
				break;
			}
			case 3: {
				int prodNum;
				int newPrice;
				cout << "Enter the product number: ";
				cin >> prodNum;
				
				if(prodNum > inventory.size() - 1) {
					cout << "Invalid product number!\n";
				} else {
					cout << "Enter new price: ";
					cin >> newPrice;
					cin.ignore();
					
					inventory[prodNum].updatePrice(newPrice);
					cout << inventory[prodNum].getName() << " price updated to PHP " << newPrice << endl;
				}	
				
				break;
			}
			case 4: {
				int prodNum;
				int newQuantity;
				cout << "Enter the product number: ";
				cin >> prodNum;
				
				if(prodNum > inventory.size() - 1) {
					cout << "Invalid product number!\n";
				} else {
					cout << "Enter new quantity: ";
					cin >> newQuantity;
					cin.ignore();
					
					inventory[prodNum].updateQuantity(newQuantity);
					cout << inventory[prodNum].getName() << " quantity updated to " << newQuantity << endl;
				}	
				
				break;
			}
			case 5: {
				int prodNum;
				cout << "Enter the product number: ";
				cin >> prodNum;
				
				if(prodNum > inventory.size() - 1) {
					cout << "Invalid product number!\n";
				} else {
					cout << inventory[prodNum].getName() << " erased.\n";
					inventory.erase(inventory.begin() + prodNum);
				}
				break;
			}
			case 6:
				cout << "Exiting Inventory System...\n";
				break;
			default:
				cout << "Invalid Choice!\n";
		}
		
	} while(choice != 6);
	
	
}
