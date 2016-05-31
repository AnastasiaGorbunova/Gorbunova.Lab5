#ifndef patient_h
#define patient_h

const int N = 20;
const int M = 5;

class Patient
{
public:
	Patient();
	~Patient();
	void SetFirstName(char*);
	void SetSecondName(char*);
	void SetSex(char*);
	void SetNationality(char*);
	void SetHigh(int);
	void SetWeight(int);
	void SetDiagnosis(char*);


	void SetPatient(char*, char*, char*, char*, int, int, char*);

	char* GetFirstName();
	char* GetSecondName();
	char* GetSex();
	char* GetNationality();
	int GetHigh();
	int GetWeight();
	char* GetDiagnosis();
	void DisplayPatient();

private:
	char firstName[N], secondName[N], sex[N], nationality[N], diagnosis[N];
	int high, weight;
};

#endif
#pragma once
