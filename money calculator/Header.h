#pragma once
using namespace std;

class money
{

private:
	double day_budget[7];
	double goal_budget;


public:

	money(double day_budg[7], double goal_budg);
	void budget_monthes(double day_budg[7], double goal_budg);
	

};
