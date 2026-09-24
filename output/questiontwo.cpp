#include <iostream>
#include <string>
using namespace std;
class Product
{
    int productId;
    string productName;
    double price;
public:
    Product(int id, string name, double p)
    {
        productId = id;
        productName = name;
        price = p;
    }
    double calculatePrice()
    {
        return price;
    }
    double calculatePrice(double discount)
    {
        return price-(price * discount / 100);
    }
    double calculatePrice(double discount, double deliveryCharge)
    {
        return price-(price * discount / 100)+deliveryCharge;
    }
    void display()
    {
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Original Price: " << price << endl;
        cout << "Original Price: " << calculatePrice() << endl;
        cout << "After 10% Discount: "
             << calculatePrice(10) << endl;
        cout << "After 10% Discount + Delivery: "
             << calculatePrice(10, 50) << endl;
    }
};
int main()
{
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    Product** products = new Product*[n];
    for (int i = 0; i < n; i++)
    {
        int id;
        string name;
        double price;
        cout << " Enter details of Product " << i + 1 << endl;
        cout << "Product ID: ";
        cin >> id;
        cout << "Product Name: ";
        cin >> name;
        cout << "Price: ";
        cin >> price;
        products[i] = new Product(id, name, price);
    }
    cout << " PRODUCT DETAILS ";
    for (int i = 0; i < n; i++)
    {
        products[i]->display();
    }
    for (int i = 0; i < n; i++)
    {
        delete products[i];
    }
    delete[] products;
}