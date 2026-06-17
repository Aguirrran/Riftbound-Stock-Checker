#include<iostream>
#include<string>
#include<vector>

using namespace std;
//To compile you must do g++ main.cpp -o main
struct Product{ 
    string productName = "";
    string storeName = "";
    string productLink = "";
    string status = "";
};
int main(){
    Product product;
    vector<Product> products; 
    while(true){
    cout << "Enter, your product name: \n";
    getline(cin,product.productName);
    cout << "Enter, your store name: \n";
    getline(cin,product.storeName);
    cout << "Enter, your product link: \n";
    getline(cin,product.productLink);
    cout << "current status?: \n";
    getline(cin,product.status);
    products.push_back(product);
    cout << "Would you like to add another product?\n";
    string temp;
    getline(cin,temp);
        if(temp == "No" || temp == "N" || temp == "n" || temp == "no"){
            break;
        }
    }
    cout << "printing.. current products\n";
    for (size_t i = 0; i < products.size(); i++){
    cout << "Product " << i+1 << endl;
    cout << "Product Name: " << products[i].productName << "\n";
    cout << "Store Name: " << products[i].storeName << "\n";
    cout << "Product Link: " << products[i].productLink << "\n";
    cout << "Status: " << products[i].status << "\n";
    cout << endl;
    }
}

