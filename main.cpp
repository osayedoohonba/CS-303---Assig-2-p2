#include <iostream>
#include <vector>
#include <assert.h>
#include "employee.h"
#include "nonprofessional.h"
#include "professional.h"
#include "common.h"

//while true, every function within professional and nonprofessional will print its action as it's performing it when called; also does some basic assertion tests
bool TESTING = true;

int main() {
	std::vector<Employee*> roster;

	//instantiating nonprofessional employess
	Nonprofessional* Tim = new Nonprofessional;
	Tim->set_hours_worked(43);

	//instantiating professional employees
	Professional* Betty = new Professional;
	Betty->set_hours_worked(62);
	
	//assertion testing
	if (TESTING) {
		assert(Tim->get_hours_worked() == 43);
		assert(Betty->get_hours_worked() == 62);
	}

	//filling the roster
	roster.push_back(Tim);
	roster.push_back(Betty);

	//looping through roster to test functions on multiple edge cases, outcome are printed by function calls while testing is set to true in the global namespace
	for (unsigned int i = 0; i < roster.size(); i++) {
		roster.at(i)->get_weekly_salary();
		roster.at(i)->get_vacation_days();
	}

	return 0;
}