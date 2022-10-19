#pragma once
#include<iostream>

class employee {
	public:
		employee(int pay, int days, int healthCareContributions, int vacationDays);
		virtual int returnSalary() = 0;
		virtual int returnDaysWorked() = 0;
		virtual int retrunHealtCare() = 0;
		virtual int returnVactionDay() = 0;
	
	protected:
		int pay;
		int days;
		int healthCareContributions;
		int vacationDays;


};


//A company has two different kinds of employees: professional and nonprofessional. Generally, professional employees have a monthly salary, whereas nonprofessional employees are paid an hourly rate. 
//Similarly, professional employees have a certain number of days of vacation, whereas nonprofessional employees receive vacation hours based on the number of hours they have worked. 
//The amount contributed for health insurance is also different for each kind of employee.
//a.Use an abstract class Employee to store information common to all employees and to declare member functions for calculating weekly salary(number of hours worked * hourly rate)and computing health care contributions and vacation days earned that week(come up with some rules for these 2) .You need 3 functions (calculating weekly salary,health care contributions, and Vacation days). b.Define derived classes Professional and Nonprofessional. Create instance for them. c.Test your classes.