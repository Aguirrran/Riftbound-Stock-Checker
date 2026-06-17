#include<iostream>
#include<string>

using namespace std;
//To compile you must do g++ main.cpp -o main
int main(){
    string productName = "";
    string storeName = "";
    string productLink = "";
    string status = "";
    cout << "Enter, your product name: \n";
    getline(cin,productName);
    cout << "Enter, your store name: \n";
    getline(cin,storeName);
    cout << "Enter, your product link: \n";
    getline(cin,productLink);
    cout << "current status?: \n";
    getline(cin,status);
    cout << "Product Name: " << productName << endl;
    cout << "Store Name: " << storeName << endl;
    cout << "Product Link: " << productLink << endl;
    cout << "Current Status: " << status << endl;
}