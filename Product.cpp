#include <string> 
#include "Product.h"

using namespace std;

Product::Product(std::string productName, std::string description, int idProduct, double price) : 
m_productName(productName), m_description(description), m_idProduct(idProduct), m_price(price)
{

}