#ifndef DEF_CLIENT
#define DEF_CLIENT

#include <string>

class Client
{   
public:

	void SetLastname(std::string name);
	void SetFirstName(std::string firstname);
	std::string GetFullName();

private:
    
	std::string m_name;
	std::string m_firstname;

};
#endif