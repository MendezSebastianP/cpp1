
#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact {
public:
    int     validName(std::string name);
    int     validPhone(std::string phone);
    int     validSecret(std::string str);
    void    setfName(void);
    void    setlfName(void);
    void    setnName(void);
    void    setPhone(void);
    void    setNick(void);
private:
    std::string first_name_;
    std::string last_name_;
    std::string nick_name_;
    std::string phone_number_;
    std::string darkest_secret_;
};

#endif