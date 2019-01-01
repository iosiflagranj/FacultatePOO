#include "pch.h"
#include <iostream>
#include "Person.h"
#include "StudentRole.h"
#include "AdministrativeRole.h"
#include "TeacherRole.h"
#include "Grade.h"
#include "Discipline.h"
#include "PersonRepository.h"
#include "Menu.h"

int main()
{
	Menu menu;
	menu.MainMenu();

	/*
	PersonRepository personRepository;
	Person p("a", "b", "121", "cacat@dfsa");
	
	StudentRole* sRole = new StudentRole(252);

	Discipline* disc = new Discipline("Cacare", "how to shit");
	Grade* g = new Grade(disc, 9.5);
	sRole->AddGrade(g);
	p.AddRole(sRole);

	disc = new Discipline("Pisare", "how to piss");
	//g = new Grade(disc);
	sRole->AddGrade(new Grade(disc));

	


	TeacherRole* tRole = new TeacherRole();
	tRole->AddDiscipline(disc);
	p.AddRole(tRole);


	AdministrativeRole* adminRole = new AdministrativeRole();
	adminRole->AddJob("Jeg");
	p.AddRole(adminRole);


	std::cout << "\n\n\n";
	p.PrintInfo();

	p.RemoveRole(Role::TEACHER_ROLE);
	p.PrintInfo();

	//std::cout << disc->GetName();
	personRepository.Add(&p);
	Person* q = new Person("Adi", "Minune", "777");
	sRole = new StudentRole(251);
	sRole->AddGrade(new Grade(disc, 6));
	q->AddRole(sRole);

	personRepository.Add(q);

	
	std::vector<Person*> temp = personRepository.FindByRole(Role::STUDENT_ROLE);
	for (int i = 0; i < temp.size(); i++) {
		std::cout << temp[i]->GetFullName() << "\n";
	}


	personRepository.Remove(personRepository.FindByCNP("777"));
	//std::cout << "\n\n\n" << (personRepository.FindByCNP("777") != 0) ? personRepository.FindByCNP("777")->GetFullName() : "person not found";
	*/
}