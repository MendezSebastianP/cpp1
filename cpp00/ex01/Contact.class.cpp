#include <iostream>
#include <cctype>
#include <string>
#include "Contact.class.hpp"

#define ADD_NAME "Name: "
#define ADD_LAST_NAME "Last name: "
#define ADD_NICK "Nickname: "
#define ADD_PHONE "Phone number: "
#define ADD_SECRET "Your darkest secret: "
#define ERR_INPUT "Wrong input, please try again"

int		Contact::validName(std::string name)
{
	int	i = 0;

	if (name.length() < 4)
		return (0);
	while (name[i])
	{
		if (!(name[i] > 64 && name[i] < 91) || (name[i] > 96 && name[i] < 123) || name[i] == ' ' || name[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

int		Contact::validPhone(std::string phone)
{
	int	i, count = 0;

	if (phone.length() < 10)
		return (0);
	while (phone[i])
	{
		if (!((phone[i] > 47 && phone[i] < 58) || phone[i] == ' '))
			return (0);
		if (phone[i] > 47 && phone[i] < 58)
			count++;
		i++;
	}
	if (count < 10)
		return (0);
	return (1);
}

int		Contact::validSecret( std::string str)
{
	int	i, count = 0;

	if (str.length() < 4)
		return (0);
	return (1);
}

void	Contact::setfName(void)
{
	std::string input;

	while (1)
	{
		std::cout << ADD_NAME;
		std::getline(std::cin, input);
		if (validName(input))
			break;
		else
			std::cout << ERR_INPUT  << std::endl;
	}

	this->first_name_ = input;
}

