#include "Contact.hpp"

void Contact::setFirstName(std::string firstname) {
	this->firstName = firstname;
}

void Contact::setLastName(std::string lastname) {
	this->lastName = lastname;
}

void Contact::setNickname(std::string nickname) {
	this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phonenumber) {
	this->phoneNumber = phonenumber;
}

void Contact::setDarkestSecret(std::string darkestsecret) {
	this->darkestSecret = darkestsecret;
}

std::string Contact::getFirstName() {
	return this->firstName;
}

std::string Contact::getLastName() {
	return this->lastName;
}

std::string Contact::getNickname() {
	return this->nickname;
}

std::string Contact::getPhoneNumber() {
	return this->phoneNumber;
}

std::string Contact::getDarkestSecret() {
	return this->darkestSecret;
}
