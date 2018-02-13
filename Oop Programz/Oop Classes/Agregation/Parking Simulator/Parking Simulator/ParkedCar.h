#ifndef PARKEDCAR_H
#define PARKEDCAR_H
class ParkedCar 
{
private:
	int yearModel;
	char * make;
	int speed;
	char * color;
	int licenseN0;
	int noOfMinutes;
public:
	ParkedCar();
	ParkedCar(int yrModel,char * mak,int v,char* col,int license,int noOfMin);
	void setYearModel(int yrModel);
	void setMake(char * mak);
	void setSpeed(int v);
	void setColor(char * col);
	void setLicenseN0(int license);
	void setNoOfMinutes(int noOfMin);
	char * getColor();
	int getLicenseN0();
	int getNoOfMinutes();
	int getYearModel();
	char * getMake();
	int getSpeed();
	int accelerate();
	int brake();
	~ParkedCar();
};
#endif

