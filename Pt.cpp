#include <iostream>
#include "Patient.h"

using namespace std;

Patient InitPatient();
Patient* InitArray(int);
void DisplayArray(Patient*, int);
void EnterArray(int*, int);
void SortFirstName(Patient*, int);
void Swap(Patient&, Patient&);

int main()
{
	int n;
	cout << "\nEnter the number of patients:";
	cin >> n;
	system("cls");
	Patient* patients = InitArray(n);
	if (!patients)
	{
		cout << "\nDynamic array doesn't exist!\n";
		system("pause");
		return 0;
	}
	cout << "\nThe list of patients:\n";
	DisplayArray(patients, n);
	
	cout << "\n\nThe sorting list of patients: \n";
	SortFirstName(patients, n);
	DisplayArray(patients, n);
	delete[] patients;
	system("pause");
	return 0;
}

Patient InitPatient()
{
	char firstName[N] = "", secondName[N] = "", sex[N]="", nationality[N]="",diagnosis[N]="";
	cout << "\nEnter first name:";
	cin.ignore();
	cin.get(firstName, N, '\n');
	cout << "Enter second name:";
	cin.ignore();
	cin.get(secondName, N, '\n');
	cout << "Enter sex:";
	cin.ignore();
	cin.get(sex, N, '\n');
	cout << "Enter nationality:";
	cin.ignore();
	cin.get(nationality, N, '\n');
	cout << "Enter diagnosis:";
	cin.ignore();
	cin.get(diagnosis, N, '\n');
	int high, weight;
	cout << "Enter high:";
	cin >> high;
	cout << "Enter weight:";
	cin >> weight;

	Patient man;
	man.SetPatient(firstName, secondName, sex,nationality,high,weight,diagnosis);
	return man;
}

Patient* InitArray(int n)
{
	Patient* array = new Patient[n];
	if (!array)
		return NULL;
	for (int i = 0; i < n; i++)
	{
		cout << "\nEnter the information about " << (i + 1) << " patient\n";
		array[i] = InitPatient();
	}
	return array;
}

void EnterArray(int* array, int n)
{
	for (int i = 0; i < M; i++)
	{
		cout << "enter A[" << (i + 1) << "] = ";
		cin >> array[i];
	}
}


void DisplayArray(Patient* array, int n)
{
	for (int i = 0; i < n; i++)
		array[i].DisplayPatient();
	cout << endl;
}

void SortFirstName(Patient* array, int n)
{
	for (int i = 0; i <= n; i++)
		for (int j = n - 1; j > i; j--)
			if (strcmp(array[j].GetFirstName(), array[j - 1].GetFirstName()) < 0)
				Swap(array[j], array[j - 1]);
}

void Swap(Patient &a, Patient &b)
{
	Patient help = a;
	a = b;
	b = help;
}
