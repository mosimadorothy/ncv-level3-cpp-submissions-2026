#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Product
{
private:
    string productName;
    double price;
    int quantity;

public:
    void setProduct(string name, double pri, int qua)
    {
        productName = name;
        price = pri;
        quantity = qua;
    }

    string getProductName()
    {
        return productName;
    }

    double getPrice()
    {
        return price;
    }

    int getQuantity()
    {
        return quantity;
    }


};

// Non-member function 1
void GetProductData(Product &p)
{
    string name;
    double price;
    int quantity;

    cout << "Enter product name: ";
    getline(cin >> ws, name);

    cout << "Enter product price: R";
    cin >> price;

    cout << "Enter quantity: ";
    cin >> quantity;

    p.setProduct(name, price, quantity);
}

// Non-member function 2
void DisplayProduct(Product p)
{
    cout << "\nProduct Name: " << p.getProductName();
    cout << "\nPrice: R" << p.getPrice();
    cout << "\nQuantity: " << p.getQuantity();
    cout << endl;
}

// Non-member function 3
void prodCompare(Product p1, Product p2)
{
    string name1 = p1.getProductName();
    string name2 = p2.getProductName();

    if (!name1.empty() && !name2.empty())
    {
        if (name1[0] == name2[0])
        {
            cout << "\nBoth product names start "
                 << "with the same character." << endl;
        }
        else
        {
            cout << "\nProduct names do not start "
                 << "with the same character." << endl;
        }
    }
    else
    {
        cout << "\nCannot compare empty product names.";
    }
}

int main()
{
    Product prod1, prod2, prod3;

    cout << fixed << setprecision(2);

    cout << "----- COMPUTER ACCESSORIES -----" << endl;

    cout << "\n-----Enter Product 1 Details-----" << endl;
    GetProductData(prod1);

    cout << "\n-----Enter Product 2 Details-----" << endl;
    GetProductData(prod2);

    cout << "\n-----Enter Product 3 Details-----" << endl;
    GetProductData(prod3);

    cout << "\n----- PRODUCT DETAILS -----" << endl;

    DisplayProduct(prod1);
    DisplayProduct(prod2);
    DisplayProduct(prod3);




    cout << "\n----- COMPARING PRODUCTS -----" << endl;

    prodCompare(prod1, prod2);

    return 0;
}
