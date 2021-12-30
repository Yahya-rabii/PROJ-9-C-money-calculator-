#include <iostream>
#include "Header.h"
using namespace std;


int main()
{
    double day_budg[7];
    double goal=0;
    
    cout << "                          WELCOME TO THE BUDGET CALCULATOR" << endl;
    cout << endl;
    money yahya_pro(day_budg, goal);
    yahya_pro.budget_monthes(day_budg, goal);
   

}
