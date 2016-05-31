#include <iostream>
#include <string.h>
#include "Patient.h"

using namespace std;

Patient::Patient() {}

Patient::~Patient() {}

void Patient::SetFirstName(char* s)
{
	strcpy(firstName, s);
}

void Patient::SetSecondName(char* s)
{
	strcpy(secondName, s);
}

void Patient::SetSex(char* s)
{
	strcpy(sex, s);
}

void Patient::SetNationality(char* s)
{
	strcpy(nationality, s);
}

void Patient::SetHigh(int h)
{
	h = high;
}

void Patient::SetWeight(int w)
{
	w = weight;
}

void Patient::SetDiagnosis(char *s)
{
	strcpy(diagnosis, s);
}



char* Patient::GetFirstName()
{
	return firstName;
}

char* Patient::GetSecondName()
{
	return secondName;
}

char * Patient::GetSex()
{
	return sex;
}

char* Patient::GetNationality()
{
	return nationality;
}

int Patient::GetHigh()
{
	return high;
}

int Patient::GetWeight()
{
	return weight;
}

char * Patient::GetDiagnosis()
{
	return diagnosis;
}




void Patient::SetPatient(char*s1, char*s2, char*s3, char*s4, int a1, int a2, char* s5)
{
	SetFirstName(s1);
	SetSecondName(s2);
	SetSex(s3);
	SetNationality(s4);
	SetHigh(a1);
	SetWeight(a2);
	SetDiagnosis(s5);
}

void Patient::DisplayPatient()
{
	cout << endl << firstName << " " << secondName << ", \t";
	cout.precision(3);
	cout << sex << "  , \t" << nationality << "  , \t" << high << "  , \t" << weight << "  , \t" << diagnosis << ".";
}
