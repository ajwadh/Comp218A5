// -----------------------------------------------------
// Assignment: 3
// Question: 1
// File name: A3Q1.cpp
// Written by: Ajwad Hossain 
// For Comp 218 Section EC/Fall 2019
// -----------------------------------------------------

#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;

	cout << "***************************************\n"
		 << "|        Employee's ID Checker        |\n"
		 << "***************************************\n\n";
//Looking for and opening file
	fin.open("A3Q1.dat");
	if (!fin)
	{
		cout << "Sorry! Could not open file. Program ending...\n"
		     << "Program ended with exit code: 0\n";
		exit(0);
	}

	string firstname;
//Input name
	cout << "Which name would you like to check? (no space in name please): ";
	cin >> firstname;
	
//fname is name on .dat file
	int count = 0, id;
	string fname;
	cout << endl;

	while (!fin.eof())
	{
//Matching name inputed with name on file
		fin >> id >> fname;
		if (fname == firstname)

		{
			cout << "The ID of the employee " << fname << " is " << id << "\n";
			count++;
		}
	}
	
	cout << "\n";
	cout << "After going through an extensive search here are the results\n\n";
	if (count == 0)
//Output if no match
		cout << firstname << " is not in the company.\n";
	else
//Output of number of matches
		cout << "There are only " << count << " employees found from the employee list\n\n";
	cout << "Hope that is the employees you are looking for .... Ending program\n\n";
	cout << "Program ended with exit code: 0\n\n";

	system("pause");

	return 0;
}