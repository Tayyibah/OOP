
#include"Employee.h"
Employee::Employee(){
	idNumber = 0;
	position = "";
	name = "";
	department = "";
}
Employee::Employee(int id, string pos){
	idNumber = id;
	position = pos;
	name = "";
	department = "";
}
Employee::Employee(int id, string pos, string n, string dept){
	idNumber = id;
	position = pos;
	name = n;
	department = dept;
}
string Employee::getPosition()const{
	return position;
}
int Employee::getidNumber()const{
	return idNumber;
}
string  Employee::getName()const{
	return name;
}
string  Employee::getDepartment()const{
	return department;
}
void Employee::setPosition(string pos){
	position = pos;
}
void Employee::setidNumber(int id){
	idNumber = id;
}
void Employee::setName(string n){
	name = n;
}
void Employee::setDepartment(string dept){
	department = dept;
}
Employee::~Employee(){
	idNumber = 0;
	position = "";
	name = "";
	department = "";
}