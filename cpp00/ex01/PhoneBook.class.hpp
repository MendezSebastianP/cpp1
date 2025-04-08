
#ifndef PHONE_BOOK_CLASS_HPP
# define PHONE_BOOK_CLASS_HPP
# include "Contact.class.hpp"

class PhoneBook {
public:
    PhoneBook();
    void ADD_CONTACT(void);
    void SEARCH_CONTACT();

private:
    int ncontacts_;
    int oldestcontact_;
    int index_;
    Contact contact_[8];
};

#endif