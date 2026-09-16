#include <iostream>
#include <string>
using namespace std;
class Product {
    private:
    int productID;
    string name;
    double price;
    public:
    Product(int id, string n, double p) {
        productID=id;
        name=n;
        price=p;
    }
    Product comparePrice(const Product &p) const {
        if (price > p.price) {
            return *this;
        } else {
            return p;
        }
    }
    void display() const {
        cout << "Product ID: " << productID << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};
int main () {
    Product p1(101, "laptop", 1500.0);
    Product p2(102, "mouse", 25.0);
    Product p3 = p1.comparePrice(p2);
    cout << "Product with higher price: " << endl;
    p3.display();
}


