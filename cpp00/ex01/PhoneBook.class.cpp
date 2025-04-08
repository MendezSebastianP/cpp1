#include <iostream>
#include <cctype>
#include "PhoneBook.class.hpp"

#define ADD_NAME "Name:"
#define ADD_LAST_NAME "Last name:"
#define ADD_NICK "Nickname:"
#define ADD_PHONE "Phone number:"
#define ADD_SECRET "Your darkest secret:"
#define CDONE "Your contact has been saved succesfully!"
#define ADD_MSG "Adding a new contact..."
#define NO_CONT "Before checking the conntacts you have to put at least one ;)"
#define MSG_SEARCH "Type the index of the contact to get further details"
#define ERR_INPUT "Wrong input, please try again"

PhoneBook::PhoneBook() : ncontacts_(0), oldestcontact_(0), index_(0) {}

void	PhoneBook::ADD_CONTACT(void)
{
	std::string input;

	this->ncontacts_++;
	if (this->ncontacts_ > 8)
	{
		this->index_ = this->oldestcontact_;
		this->oldestcontact_++;
		this->ncontacts_--;
		if (oldestcontact_ == 9)
			oldestcontact_ = 0;
	}
	std::cout << ADD_MSG  << std::endl;
	contact_[index_].setfName();
	contact_[index_].setlName();
	contact_[index_].setnName();
	contact_[index_].setPhone();
	contact_[index_].setSecret();
	contact_[index_].setIndex(this->index_);
	std::cout << CDONE  << std::endl;
	
	this->index_++;

}

void	PhoneBook::SEARCH_CONTACT(void)
{
	std::string input;
	int i = 0;
	int indexint;

	while (i < ncontacts_)
	{
		contact_[i].printContact();
		i++;
	}
	if (ncontacts_ == 0)
		std::cout << NO_CONT  << std::endl;
	else
	{
		while (1)
		{
			std::cout << MSG_SEARCH  << std::endl;
			std::getline(std::cin, input);
			if (input.length() == 1)
			{
				indexint = input[0] - '0';
				if (indexint > 0 && indexint < 9 && indexint <= this->ncontacts_)
				{
					contact_[indexint - 1].printDetails();
					return ;
				}
			}
			else
				std::cout << ERR_INPUT << std::endl;
		}
	}
}

