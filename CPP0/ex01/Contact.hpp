#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iostream>

class Contact
{
public:
    Contact();
    ~Contact();
    std::string    getFirstName() const;
    std::string    getLastName() const;
    std::string    getNickName() const;
    std::string    getPhoneNumber() const;
    std::string    getSecret() const;  
    void    setFirstName(std::string firstname);
    void    setLastName(std::string lastname);
    void    setNickName(std::string nickname);
    void    setPhoneNumber(std::string number);
    void    setSecret(std::string secret);

private:
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _darkestsecret;
};

#endif