#include "pch.h"
#include "Person.h"

Person::Person() :
	firstName(""),
	lastName(""),
	cnp(""),
	email("")
{
}

Person::Person(std::string firstName, std::string lastName, std::string cnp, std::string email):
	firstName(firstName),
	lastName(lastName),
	cnp(cnp),
	email(email)
{
}

Person::~Person()
{
	for (int i = 0; i < roles.size(); i++) {
		delete roles[i];
	}
}

void Person::SetFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void Person::SetLastName(std::string lastName)
{
	this->lastName = lastName;
}

void Person::SetCNP(std::string cnp)
{
	this->cnp = cnp;
}

void Person::SetEmail(std::string email)
{
	this->email = email;
}

std::string Person::GetFirstName()
{
	return firstName;
}

std::string Person::GetLastName()
{
	return lastName;
}

std::string Person::GetFullName()
{
	return firstName + " " + lastName;
}

std::string Person::GetCNP()
{
	return cnp;
}

std::string Person::GetEmail()
{
	return email;
}

void Person::AddRole(Role * role)
{
	//Check if the person already has the role
	for (int i = 0; i < roles.size(); i++) {
		if (roles[i]->GetRole() == role->GetRole()) {
			std::cout << "The person already has this role";
			return;
		}
	}
	roles.push_back(role);
}

void Person::RemoveRole(Role::RoleType role)
{
	for (int i = 0; i < roles.size(); i++) {
		if (roles[i]->GetRole() == (int)role) {
			delete roles[i];
			roles.erase(roles.begin() + i);
			break;
		}
	}
}

void Person::PrintInfo()
{
	std::cout << "First Name: " << firstName << "\nLast Name: " << lastName << "\nCNP: " << cnp << "\nEmail: " << email << "\n\n";
	for (int i = 0; i < roles.size(); i++) {
		roles[i]->PrintInfo();
		std::cout << "\n";
	}
	std::cout << "\n";
}
