#include <iostream>
#include <cctype>
#include "PhoneBook.class.hpp"

#define ADD_NAME "Name:"
#define ADD_LAST_NAME "Last name:"
#define ADD_NICK "Nickname:"
#define ADD_PHONE "Phone number:"
#define ADD_SECRET "Your darkest secret:"

void	PhoneBook::ADD_CONTACT(void)
{
	std::string input;

	this->ncontacts_++;
	if (this->ncontacts_ > 8)
	{
		this->index_ = this->oldestcontact_;
		this->oldestcontact_++;
		this->ncontacts_--;
	}


	contact_[index_].first_name_ = input;

	std::cout << ADD_LAST_NAME;
	std::getline(std::cin, input);
	contact_[index_].last_name_ = input;

	std::cout << ADD_NICK;
	std::getline(std::cin, input);
	contact_[index_].nick_name_ = input;

	std::cout << ADD_PHONE;
	std::getline(std::cin, input);
	contact_[index_].phone_number_ = input;

	std::cout << ADD_SECRET;
	std::getline(std::cin, input);
	contact_[index_].darkest_secret_ = input;

	this->index_++;

}

