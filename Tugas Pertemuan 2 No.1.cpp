#include<iostream>
using namespace std;

int main () {
string Nama;
cout << "Enter Employee Name";
getline (cin, Nama);

int Gross_salary;
cout << "Enter Gross_salary";
cin >> Gross_salary;

int Installment;
cout << "Enter Installment";
cin >> Installment;

int Insurance;
cout << "Enter Insurance";
cin >> Insurance;

int tax;
tax = Gross_salary/5;

int Net_salary;
Net_salary = Gross_salary - tax - Installment - Insurance;

cout << "" << endl;
cout << "Payslip_for_Employee" << endl;
cout << "--------------------" << endl;
cout << "Name : ";
cout << Nama << endl;
cout << "Gross_Salary : ";
cout << Gross_salary << endl;
cout << "Tax : ";
cout << tax << endl;
cout << "Installment : ";
cout << Installment << endl;
cout << "Insurance : ";
cout << Insurance << endl;
cout << "Net_Salary : ";
cout << Net_salary;

}
