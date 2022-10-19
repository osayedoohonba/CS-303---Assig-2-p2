#include <iostream>
#include "employee.h"
#include "professional.h"
#include "common.h"

//Function to get weekly salary after healthcare contributions, includes boneses for overtime hours
double Professional::get_weekly_salary() const {
	double contributions = get_healthcare_contributions();
	if (get_hours_worked() <= 49) {
		if (TESTING) {
			cout << "Pay with no overtime is " << (annual_salary / 52) - contributions << endl;
		}
		return (annual_salary / 52) - contributions;
	}
	else {
		double overtime = get_hours_worked() - 40;
		if (TESTING) {
			cout << "Calculating pay with " << overtime << " hours of overtime..." << endl;
		}
		if (overtime >= 40) {
			if (TESTING) {
				cout << "Pay is " << (((annual_salary / 52.0) - contributions) + 1200.0) << endl;
			}
			return (((annual_salary / 52.0) - contributions) + 1200.0);
		}
		else if (overtime >= 30) {
			if (TESTING) {
				cout << "Pay is " << (((annual_salary / 52.0) - contributions) + 750.0) << endl;
			}
			return (((annual_salary / 52.0) - contributions) + 750.0);
		}
		else if (overtime >= 20) {
			if (TESTING) {
				cout << "Pay is " << (((annual_salary / 52.0) - contributions) + 400.0) << endl;
			}
			return (((annual_salary / 52.0) - contributions) + 400.0);
		}
		else if (overtime >= 10) {
			if (TESTING) {
				cout << "Pay is " << (((annual_salary / 52.0) - contributions) + 150.0) << endl;
			}
			return (((annual_salary / 52.0) - contributions) + 150.0);
		}
		else {
			if (TESTING) {
				cout << "Pay is " << (((annual_salary / 52.0) - contributions) + 100.0) << endl;
			}
			return (((annual_salary / 52.0) - contributions) + 100.0);
		}
	};
}

//Function to calculate the amount being put towards healthcare contributions based off of a standard precentage
double Professional::get_healthcare_contributions() const {
	if (get_hours_worked() <= 49) {
		if (TESTING) {
			cout << "Calculating healthcare contribution with no overtime..." << endl;
			cout << "Contribution amount is " << (annual_salary / 52) * get_percent_contribution() << endl;
		}
		return (annual_salary / 52) * get_percent_contribution();
	}
	else {
		double overtime = get_hours_worked() - 40;
		if (TESTING) {
			cout << "Calculating healthcare contributions with " << overtime << " hours of overtime..." << endl;
		}
		if (overtime >= 40) {
			if (TESTING) {
				cout << "Contribution amount is " << (((annual_salary / 52.0) + 1200.0) * get_percent_contribution()) << endl;
			}
			return (((annual_salary / 52.0) + 1200.0) * get_percent_contribution());
		}
		else if (overtime >= 30) {
			if (TESTING) {
				cout << "Contribution amount is " << (((annual_salary / 52.0) + 750.0) * get_percent_contribution()) << endl;
			}
			return (((annual_salary / 52.0) + 750.0) * get_percent_contribution());
		}
		else if (overtime >= 20) {
			if (TESTING) {
				cout << "Contribution amount is " << (((annual_salary / 52.0) + 400.0) * get_percent_contribution()) << endl;
			}
			return (((annual_salary / 52.0) + 400.0) * get_percent_contribution());
		}
		else if (overtime >= 10) {
			if (TESTING) {
				cout << "Contribution amount is " << (((annual_salary / 52.0) + 150.0) * get_percent_contribution()) << endl;
			}
			return (((annual_salary / 52.0) + 150.0) * get_percent_contribution());
		}
		else {
			if (TESTING) {
				cout << "Contribution amount is " << (((annual_salary / 52.0) + 100.0) * get_percent_contribution()) << endl;
			}
			return (((annual_salary / 52.0) + 100.0) * get_percent_contribution());
		}
	}
}

//Function to calculate the amount of vacation earned in the current week based off of the annual amount given to professional employess
double Professional::get_vacation_days() const {
	if (TESTING) {
		cout << "Calculating vacation days..." << endl;
		cout << (annual_vacation_hours / 52) << " hours of vaction earned" << endl;
	}
	return (annual_vacation_hours / 52);
}