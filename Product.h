#ifndef DEF_PRODUCT
#define DEF_PRODUCT

#include <string> 


class Product 
{
public:
    Product(std::string productName, std::string description, int idProduct, double price);
    std::string GetProductName();
    std::string m_productName;
    std::string m_description;
    int m_idProduct;
    double m_price;


};
#endif