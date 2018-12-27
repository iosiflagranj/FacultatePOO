#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Role.h"


class Person
{
public:
	Person();
	Person(std::string firstName, std::string lastName, std::string cnp, std::string email = "");

	//Setters
	void SetFirstName(std::string firstName);
	void SetLastName(std::string lastName);
	void SetCNP(std::string cnp);
	void SetEmail(std::string email);

	//Getters
	std::string GetFirstName();
	std::string GetLastName();
	std::string GetCNP();
	std::string GetEmail();

	void AddRole(Role* role);
	void PrintInfo();

private:
	std::string firstName;
	std::string lastName;
	std::string cnp;
	std::string email;

	std::vector<Role*> roles;
};

