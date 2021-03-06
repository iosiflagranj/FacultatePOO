#include "pch.h"
#include "Grade.h"


Grade::Grade() :
	discipline(nullptr),
	value(0)
{
}

Grade::Grade(Discipline * discipline, float value) :
	discipline(discipline),
	value(value)
{
}


Grade::~Grade()
{
	discipline = nullptr;
}

void Grade::Print()
{
	std::cout << discipline->GetName() << ": " << value << "\n";
}

float Grade::GetValue()
{
	return value;
}

Discipline * Grade::GetDiscipline()
{
	return discipline;
}

void Grade::SetValue(float value)
{
	this->value = value;
}

std::string Grade::ToString()
{
	return discipline->GetName() + ": " + std::to_string(value) + "\n";
}
