#include <string>
#include "Client.h"

using namespace std;


	void Client::SetLastname(string name)
	{
		m_name = name;
	}

	void Client::SetFirstName(string firstname)
	{
		m_firstname = firstname;
	}

	string Client::GetFullName()
	{
		return m_name + " " + m_firstname;
	}
