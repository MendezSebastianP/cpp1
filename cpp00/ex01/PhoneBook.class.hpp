
#ifndef PHONE_BOOK_CLASS_HPP
# define PHONE_BOOK_CLASS_HPP
# include "Contact.class.hpp"

class PhoneBook {
public:
    void ADD_CONTACT(void);
    int SEARCH_CONTACT(int index);

private:
    int ncontacts_ = 0;
    int oldestcontact_ = 0;
    int index_ = 0;
    Contact contact_[8];
};

#endif