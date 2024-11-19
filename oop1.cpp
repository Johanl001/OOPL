#include <iostream>
#include <string>
using namespace std;

class SBI_BANK {
    string IFSC_CODE;
    string bank_name;
    string branch;

public:
    void accept();
    void display();
};

void SBI_BANK::accept() {
    cout << "Enter the IFSC Code, Bank name and branch for SBI: ";
    cin >> IFSC_CODE >> bank_name >> branch;
}

void SBI_BANK::display() {
    cout << "\nSBI Bank Name: " << bank_name << "\nIFSC Code: " <<IFSC_CODE << "\nBranch: " << branch;
}

class HDFC_BANK {
    string IFSC_CODE;
    string bank_name;
    string branch;

public:
    void accept();
    void display();
};

void HDFC_BANK::accept() {
    cout << "Enter the IFSC Code, Bank name and branch for HDFC: ";
    cin >> IFSC_CODE >> bank_name >> branch;
}

void HDFC_BANK::display() {
    cout << "\nHDFC Bank Name: " << bank_name << "\nIFSC Code: " << IFSC_CODE << "\nBranch: " << branch;
}

class Customer : public SBI_BANK, public HDFC_BANK {
    string customername;
    int accno;

public:
    void accept();
    void display();
};

void Customer::accept() {
    cout << "Enter customer name and account number: ";
    cin >> customername >> accno;
    SBI_BANK::accept();  
    HDFC_BANK::accept(); 
}

void Customer::display() {
    cout << "\nCustomer Name: " << customername << "\nAccount Number: " << accno;
    
    SBI_BANK::display();  
    HDFC_BANK::display();
}

int main() {
    Customer cc;
    cc.accept();
    cc.display();  
    return 0;
}

