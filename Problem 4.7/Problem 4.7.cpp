// Problem 4.7.cpp : Defines the entry point for the console application.
//
/*7. Add a variable of type enum etype (see Exercise 6), and another variable of type struct
date (see Exercise 5) to the employee class of Exercise 4. Organize the resulting program
so that the user enters four items of information for each of three employees: an
employee number, the employee’s compensation, the employee type, and the date of first
employment. The program should store this information in three variables of type
employee, and then display their contents.*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct employee  {
	int emp_num;
	float emp_com;

}; 
struct date {
	int year, mon, day;
};
enum etype {laborer, secretary, manager, accountant, executive, researcher};

int main()
{ 
	string s1, s2, s3;
	etype e1, e2, e3;
	date d1, d2, d3;
	employee emp1, emp2, emp3;
	char letter , dummy_slash;
	cout << "Enter the number of first employee:" << endl;
	cin >> emp1.emp_num;
	cout << "Enter the compensation of first employee:" << endl;
	cin >> emp1.emp_com;
	cout << "Enter the date of first employment in the format 12/31/2001:" << endl;
	cin >> d1.mon >> dummy_slash >> d1.day >> dummy_slash >> d1.day;
	cout << "Enter employee type (first letter only) laborer, secretary, manager,accountant, executive, researcher):" << endl;
	cin >> letter;
	switch (letter)
	{
	case 'l': e1 = laborer;
		break;
	case 's': e1 = secretary;
		break;
	case 'm': e1 = manager;
		break;
	case 'a': e1 = accountant;
		break;
	case 'e': e1 = executive;
		break;
	case 'r': e1 = researcher;
		break;

	}
	
	switch (e1)
	{
	case 0:
		s1 = "laborer";
		break;
	case 1:
		s1 = "secretary";
		break;
	case 2:
		s1 = "manager";
		break;
	case 3:
		s1 = "accountant";
		break;
	case 4:
		s1 = "executive";
		break;
	case 5:
		s1 = "researcher";
	}

	//////////////////////////////////////////////////////////////////////////////////////
	cout << "Enter the number of secound employee:" << endl;
	cin >> emp2.emp_num;
	cout << "Enter the compensation of secound employee:" << endl;
	cin >> emp2.emp_com;
	cout << "Enter the date of secound employment in the format 12/31/2001:" << endl;
	cin >> d2.mon >> dummy_slash >> d2.day >> dummy_slash >> d2.day;
	cout << "Enter secound employee type (first letter only) laborer, secretary, manager,accountant, executive, researcher):" << endl;
	cin >> letter;
	switch (letter)
	{
	case 'l': e2 = laborer;
		break;
	case 's': e2 = secretary;
		break;
	case 'm': e2 = manager;
		break;
	case 'a': e2 = accountant;
		break;
	case 'e': e2 = executive;
		break;
	case 'r': e2 = researcher;
		break;

	}

	switch (e2)
	{
	case 0:
		s2 = "laborer";
		break;
	case 1:
		s2 = "secretary";
		break;
	case 2:
		s2 = "manager";
		break;
	case 3:
		s2 = "accountant";
		break;
	case 4:
		s2 = "executive";
		break;
	case 5:
		s2 = "researcher";
	}

	/////////////////////////////////////////////////////////////////////////////////////
	cout << "Enter the number of third employee:" << endl;
	cin >> emp3.emp_num;
	cout << "Enter the compensation of third employee:" << endl;
	cin >> emp3.emp_com;
	cout << "Enter the date of third employment in the format 12/31/2001:" << endl;
	cin >> d3.mon >> dummy_slash >> d3.day >> dummy_slash >> d3.day;
	cout << "Enter third employee type (first letter only) laborer, secretary, manager,accountant, executive, researcher):" << endl;
	cin >> letter;
	switch (letter)
	{
	case 'l': e3 = laborer;
		break;
	case 's': e3 = secretary;
		break;
	case 'm': e3 = manager;
		break;
	case 'a': e3 = accountant;
		break;
	case 'e': e3 = executive;
		break;
	case 'r': e3 = researcher;
		break;

	}

	switch (e3)
	{
	case 0:
		s3 = "laborer";
		break;
	case 1:
		s3 = "secretary";
		break;
	case 2:
		s3 = "manager";
		break;
	case 3:
		s3 = "accountant";
		break;
	case 4:
		s3 = "executive";
		break;
	case 5:
		s3 = "researcher";
	}

	cout << setw(15) << "employee number" << setw(30) << "employee’s compensation"<<setw(15)<<"employee type" << setw(40) << "date of first employment" << endl;
	cout << setw(15) << emp1.emp_num << setw(30) << emp1.emp_com << setw(15) << s1 << setw(40) << d1.mon << dummy_slash << d1.day << dummy_slash << d1.day << endl;
	cout << setw(15) << emp2.emp_num << setw(30) << emp2.emp_com << setw(15) << s2 << setw(40) << d2.mon << dummy_slash << d2.day << dummy_slash << d2.day << endl;
	cout << setw(15) << emp3.emp_num << setw(30) << emp3.emp_com << setw(15) << s3 << setw(40) << d3.mon << dummy_slash << d3.day << dummy_slash << d3.day << endl;

    return 0;
}

