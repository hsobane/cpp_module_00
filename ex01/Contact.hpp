#ifndef		CONTACT_HPP
# define	CONTACT_HPP
# include	<iostream>
# include	<string>

class	Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	
	public:
		void setFirstName(std::string firstname);
		void setLastName(std::string lastname);
		void setNickname(std::string nickname);
		void setPhoneNumber(std::string phonenumber);
		void setDarkestSecret(std::string darkestsecret);

		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
};

#endif