//Write a program to create inventory management system.

#include <iostream>
using namespace std;

class Product {
public:
    int id, quantity;
    string name;
};

int main() {
    Product p[100];
    int count = 0, choice;

    do {
        cout << "\n--- Inventory Management System ---\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter Product ID: ";
            cin >> p[count].id;

            cin.ignore();
            cout << "Enter Product Name: ";
            getline(cin, p[count].name);

            cout << "Enter Quantity: ";
            cin >> p[count].quantity;

            count++;
            cout << "Product Added!\n";
            break;

        case 2:
            if(count == 0) {
                cout << "No products available!\n";
            }
            else {
                cout << "\nInventory:\n";
                for(int i = 0; i < count; i++) {
                    cout << "\nID: " << p[i].id;
                    cout << "\nName: " << p[i].name;
                    cout << "\nQuantity: " << p[i].quantity << endl;
                }
            }
            break;

        case 3: {
            int searchId, found = 0;
            cout << "Enter Product ID: ";
            cin >> searchId;

            for(int i = 0; i < count; i++) {
                if(p[i].id == searchId) {
                    cout << "Product Found\n";
                    cout << "Name: " << p[i].name << endl;
                    cout << "Quantity: " << p[i].quantity << endl;
                    found = 1;
                    break;
                }
            }

            if(!found)
                cout << "Product not found!\n";

            break;
        }

        case 4: {
            int updateId;
            cout << "Enter Product ID: ";
            cin >> updateId;

            for(int i = 0; i < count; i++) {
                if(p[i].id == updateId) {
                    cout << "Enter New Quantity: ";
                    cin >> p[i].quantity;
                    cout << "Updated Successfully!\n";
                    break;
                }
            }

            break;
        }

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}