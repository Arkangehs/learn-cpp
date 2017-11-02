 #include <iostream> 
 #include <list>
 #include <iterator>
 #include "Client.h"
 #include "UI.h"
 #include "Product.h"
 using namespace std;




 int main()
 {
	Product ballon("Ballon de Foot", "Ballon de foot aux couleurs du PSG", 501725, 24.99);
	Product maillot("Maillot de foot", "Maillot de foot aux couleurs du PSG", 501726, 79.99);
	Product bas("Short de foot", "Short de foot aux couleurs du PSG", 501727, 49.99);
	Product casquette("Casquette PSG", "Casquette aux couleurs du PSG", 501728, 19.99);
	Product echarpe("Echarpe PSG", "Echarpe aux couleurs du PSG", 501729, 14.99);
	
	Client client;
	UI ui;
	ui.askLastName();
	string input;
	cin >> input;
	client.SetLastname(input);
	ui.askFirstName();
	cin >> input;
	client.SetFirstName(input);
	ui.DisplayClientFullName(client);

	list<class Product> catalog;
	catalog.push_front(ballon);
	catalog.push_front(maillot);
	catalog.push_front(bas);
	catalog.push_front(casquette);
	catalog.push_front(echarpe);
	 
	std::list<class Product>::iterator it;
	 for(it = catalog.begin(); it != catalog.end(); it++)
	 {
		string productName = it->m_productName;
		double price = it->m_price;
		int idProduct = it->m_idProduct;
		string description = it->m_description;

		cout << productName << endl;
		cout << price << endl;
		cout << idProduct << endl;
		cout << description << endl;
		 
	 }
	// create catalog
	// load
	// boucle principale
	// Display catalog : fonction dans UI qui prend le catalog et qui affiche
		// - productId -> ajout a la commande
		// - pay -> calcul le total et affiche
		// autre -> affiche message erreur

	return 0;
	 
}