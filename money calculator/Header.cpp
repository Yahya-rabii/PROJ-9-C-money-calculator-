#include "Header.h"
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

money::money(double day_budg[7], double goal_budg)
{
	
	for (int i = 0; i < 7; i++) {

		cout << "day " << i + 1 << " budget ==> ";
		cin  >> this->day_budget[i] ;
		cout << endl;

	}


	
	cout << endl;
	cout << " ENTER THE GOAL BUDGET  ==> " ;
	cin  >> this->goal_budget;
    cout << endl;


}


void money::budget_monthes(double day_budg[7], double goal_budg)
{
	int budg_total_week=0;

	for (int i = 0; i < 7; i++)
	{
		budg_total_week = budg_total_week + this->day_budget[i];
	}

	int week_number = 0;
		
	week_number = this->goal_budget / budg_total_week;

	int budget_rest = 0;

	budget_rest = this->goal_budget - (week_number * budg_total_week);

	int days_number = week_number * 7;


	int m = 0;

	for (int i = 0; i < days_number; i++)
	{

		if (budget_rest > 0) {

			budget_rest = budget_rest - this->day_budget[i];
			m++;
		}

		else {

			break;

		}

	}

	int days = m + (week_number * 7) ;

	cout << endl;
	cout << endl;

	cout << "numbers of days to reach your goal : " << days << " Day" ;

	time_t tmm = time(0);
	tm* ltm = localtime(&tmm);


	int year = 0;
	int month = 0;
	int day = 0;
		
		year = 1900 + ltm->tm_year;
		month = 1 + ltm->tm_mon;
		day = ltm->tm_mday;

	tm t = {};

		t.tm_year = year - 1900;
		t.tm_mon = month - 1;
		t.tm_mday = day;
		
		// modify
		
		t.tm_mday += days;
		mktime(&t);
		
		// show result

		cout << endl;
		cout << endl;
		cout << "The date on which you will reach your goal is  " ;
		cout << "  " << t.tm_wday;
		cout << " / " << t.tm_mon + 1;
		cout << " / " << 1900 + t.tm_year;

		cout << endl;
		cout << endl; 
	

		int w_w_w = 0;
		w_w_w = days - week_number * 1;
		cout << " days www : " << w_w_w;

		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;

}
