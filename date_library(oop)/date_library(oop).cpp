#include <iostream>
#include "cls_date.h"

using namespace std; 

int main()
{
	cls_date Date;
	cls_date Date1(1,1,2025);
	cls_date Date2(250, 2022);

	
	Date1.DecreaseDateByOneDay();
	Date1.print();


	cout << Date.DaysUntilTheEndOfWeek(Date) << endl;

}
