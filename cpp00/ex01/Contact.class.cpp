#include <iostream>
#include <cctype>
#include <string>
#include <sstream>
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

	if (name.length() < 3)
		return (0);
	while (name[i])
	{
		if (!((name[i] > 64 && name[i] < 91) || (name[i] > 96 && name[i] < 123) || name[i] == ' ' || name[i] == '-'))
			return (0);
		i++;
	}
	return (1);
}

int		Contact::validPhone(std::string phone)
{
	int	i = 0, count = 0;

	if (phone.length() < 5)
		return (0);
	while (phone[i])
	{
		if (!((phone[i] > 47 && phone[i] < 58) || phone[i] == ' '))
			return (0);
		if (phone[i] > 47 && phone[i] < 58)
			count++;
		i++;
	}
	if (count < 4)
		return (0);
	return (1);
}

int		Contact::validSecret( std::string str)
{
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
		if (validName(input) == 1)
			break;
		else
			std::cout << ERR_INPUT  << std::endl;
	}

	this->first_name_ = input;
}

void	Contact::setlName(void)
{
	std::string input;

	while (1)
	{
		std::cout << ADD_LAST_NAME;
		std::getline(std::cin, input);
		if (validName(input))
			break;
		else
			std::cout << ERR_INPUT  << std::endl;
	}

	this->last_name_ = input;
}

void	Contact::setnName(void)
{
	std::string input;

	while (1)
	{
		std::cout << ADD_NICK;
		std::getline(std::cin, input);
		if (validName(input))
			break;
		else
			std::cout << ERR_INPUT  << std::endl;
	}

	this->nick_name_ = input;
}

void	Contact::setPhone(void)
{
	std::string input;

	while (1)
	{
		std::cout << ADD_PHONE;
		std::getline(std::cin, input);
		if (validPhone(input))
			break;
		else
			std::cout << ERR_INPUT  << std::endl;
	}

	this->phone_number_ = input;
}

void	Contact::setSecret(void)
{
	std::string input;

	while (1)
	{
		std::cout << ADD_SECRET;
		std::getline(std::cin, input);
		if (validSecret(input))
			break;
		else
			std::cout << ERR_INPUT  << std::endl;
	}

	this->darkest_secret_ = input;
}

void	Contact::setIndex(int index)
{
	this->index_ = index;
}

void	printcell(std::string str)
{
	int i = 0, j = 0;

	std::cout << "|";
	
	while (j + str.length() < 10)
	{
		std::cout << " ";
		j++;
	}
	if (j > 0)
		j--;
	while (i + j < 9 && str[i])
		std::cout << str[i++];
	if (i == 9 && str.length() > 10)
	{
		std::cout << ".";
		i++;
	}
	else if (i + j == 9 && str.length() == 10)
		std::cout << str[i++];
	}

void	Contact::printContact(void)
{
	std::stringstream ss;
    ss << this->index_ + 1;
    std::string indexStr = ss.str();

    printcell(indexStr);
	printcell(this->first_name_);
	printcell(this->last_name_);
	printcell(this->nick_name_);
	std::cout << "|"  << std::endl;
}
void	Contact::printDetails(void)
{
	std::cout << ADD_NAME << this->first_name_ << std::endl;
	std::cout << ADD_LAST_NAME << this->last_name_ << std::endl;
	std::cout << ADD_NICK << this->nick_name_ << std::endl;
	std::cout << ADD_PHONE << this->phone_number_ << std::endl;
	std::cout << ADD_SECRET << this->darkest_secret_ << std::endl;
}


