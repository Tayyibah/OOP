#include "employee.h"
#include "productionworker.h"
#include"ShiftSupervisor.h"
#include"teamleader.h"
#include <iostream>
using namespace std;

void main()
{
	productionWorker p(1, 99.98, "AmnaWaheed", 3, "October");
	p.print();
	shiftSuperVisor s(40000, 12000, "AsmaWaheed", 4, "November");
	s.print();
	TeamLeader t("FatimaWaheed", 5, "March", 1, 12, 15000, 3, 9);
	t.print();

	system("pause");

}
