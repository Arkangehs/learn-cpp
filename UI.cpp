#include <iostream>
#include "UI.h"

using namespace std;


void UI::askLastName()
{
	cout << "Entrez votre nom" << endl;
}

void UI::askFirstName()
{
	cout << "Entrez votre prénom" << endl;
}

void UI::DisplayClientFullName(Client client)
{
	cout << "Bienvenue " + client.GetFullName() << endl;
}
