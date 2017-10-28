 #include <iostream>
 #include "Client.h"
 #include "UI.h"
 #include "Product.h"
 using namespace std;




 int main()
 {
	Product ballon("Ballon de Foot", "Ballon de foot aux couleurs du PSG", 501725, 24.99),
	maillot("Maillot de foot", "Maillot de foot aux couleurs du PSG", 501726, 79.99),
	bas("Short de foot", "Short de foot aux couleurs du PSG", 501727, 49.99),
	casquette("Casquette PSG", "Casquette aux couleurs du PSG", 501728, 19.99),
	echarpe("Echarpe PSG", "Echarpe aux couleurs du PSG", 501729, 14.99);
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
	return 0;
	 
}