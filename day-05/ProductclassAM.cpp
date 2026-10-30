
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//Raphatelo MD
class Product
{
private:
    string productCode;
    string productName;
    double price;
    int quantityInStock;

public:
    // Default constructor
    Product()
    {
        productCode = "";
        productName = "";
        price = 0;
        quantityInStock = 0;
    }

    // Setter for product code
    void setProductCode(string code)
    {
        if (code != "")
        {
            productCode = code;
        }
    }

    // Setter for product name
    void setProductName(string name)
    {
        if (name != "")
        {
            productName = name;
        }
    }

    // Setter for price
    void setPrice(double p)
    {
        if (p >= 0)
        {
            price = p;
        }
    }

    // Setter for quantity
    void setQuantityInStock(int quantity)
    {
        if (quantity >= 0)
        {
            quantityInStock = quantity;
        }
    }

    // Getter methods
    string getProductCode()
    {
        return productCode;
    }

    string getProductName()
    {
        return productName;
    }

    double getPrice()
    {
        return price;
    }

    int getQuantityInStock()
    {
        return quantityInStock;
    }

};

int main()
{
    // Create Product object
    Product p1;

    // Assign first product values
    p1.setProductCode("Prod01");
    p1.setProductName("Wireless Mouse");
    p1.setPrice(249.99);
    p1.setQuantityInStock(25);

    //  First product
    cout << fixed << setprecision(2);

 cout << "\n--- FIRST PRODUCT ---" << endl;
    cout << "Product Code: "
         << p1.getProductCode() << endl;

    cout << "Product Name: "
         << p1.getProductName() << endl;

    cout << "Price: R"
         << p1.getPrice() << endl;

    cout << "Quantity in Stock: "
         << p1.getQuantityInStock() << endl;




          // Second Product object
    Product p2;

    // Assign second product values
    p2.setProductCode("Prod02");
    p2.setProductName("Keyboard");
    p2.setPrice(199.99);
    p2.setQuantityInStock(30);

    // Display second product
    cout << "\n--- SECOND PRODUCT ---" << endl;

    cout << "Product Code: "
         << p2.getProductCode() << endl;

    cout << "Product Name: "
         << p2.getProductName() << endl;

    cout << "Price: R"
         << p2.getPrice() << endl;

    cout << "Quantity in Stock: "
         << p2.getQuantityInStock() << endl;



    return 0;
}



