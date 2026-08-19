#include <iostream>
#include <string>
using namespace std;
class Customer {
private:
    int customerId;
    string name;
    string mobile;
    string address;
    int age;
    string email;
public:
    // Default Constructor
    Customer() {
        customerId = 0;
        name = "";
        mobile = "";
        address = "";
        age = 0;
        email = "";
    }
    // Parameterized Constructor
    Customer(int id, string n, string m, string a, int ag, string e) {
        customerId = id;
        name = n;
        mobile = m;
        address = a;
        age = ag;
        email = e;
    }
    // Input Customer Details
    void createCustomer() {
        cout << "\n===== Create Customer =====\n";
        cout << "Enter Customer ID: ";
        cin >> customerId;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Mobile Number: ";
        getline(cin, mobile);
        cout << "Enter Address: ";
        getline(cin, address);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter Email: ";
        getline(cin, email);
        cout << "\nCustomer created successfully!\n";
    }
    // Display Customer Details
    void displayCustomer() const {
        cout << "\n===== Customer Details =====\n";
        cout << "Customer ID : " << customerId << endl;
        cout << "Name        : " << name << endl;
        cout << "Mobile      : " << mobile << endl;
        cout << "Address     : " << address << endl;
        cout << "Age         : " << age << endl;
        cout << "Email       : " << email << endl;
    }
    // Update Customer Details
    void updateCustomer() {
        cout << "\n===== Update Customer =====\n";
        cin.ignore();
        cout << "Enter New Name: ";
        getline(cin, name);
        cout << "Enter New Mobile Number: ";
        getline(cin, mobile);
        cout << "Enter New Address: ";
        getline(cin, address);
        cout << "Enter New Age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter New Email: ";
        getline(cin, email);
        cout << "\nCustomer details updated successfully!\n";
    }
    // Getter Functions
    int getCustomerId() const {
        return customerId;
    }
    string getName() const {
        return name;
    }
    string getMobile() const {
        return mobile;
    }
    string getAddress() const {
        return address;
    }
    int getAge() const {
        return age;
    }
    string getEmail() const {
        return email;
    }
    // Setter Functions
    void setCustomerId(int id) {
        customerId = id;
    }
    void setName(string n) {
        name = n;
    }
    void setMobile(string m) {
        mobile = m;
    }
    void setAddress(string a) {
        address = a;
    }
    void setAge(int ag) {
        age = ag;
    }
    void setEmail(string e) {
        email = e;
    }
};
int main() {
    Customer c1;
    c1.createCustomer();
    c1.displayCustomer();
    cout << "\nUpdating customer...\n";
    c1.updateCustomer();
    c1.displayCustomer();
    return 0;
}