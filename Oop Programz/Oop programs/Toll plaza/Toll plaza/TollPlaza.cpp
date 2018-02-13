#include"TollPlaza.h"
	 const int TollPlaza::_CAR = 1;
	 const int TollPlaza::_BIKE=2;
	 const int TollPlaza::_BUS=3;
	 const int TollPlaza::_HeavyDutyTruck=4;
	 const int TollPlaza::_LightDutyTruck=5;

	int TollPlaza::_carToll=10;
	int TollPlaza::_bikeToll=20;
	int TollPlaza::_busToll=30;
	int TollPlaza::_heavyDutyTruckToll=40;
	int TollPlaza::_lightDutyTruckToll=50;
	TollPlaza::TollPlaza(int id, char *ads, long int mt):MAX_TOLL(mt)//Receives plaza id, plaza address and plaza target max total
	{
		collectedToll = 0;
	}
	void TollPlaza::resetTollPlaza()//Initializes data members for a new day. 
	{
		collectedToll = 0;
	}
	void TollPlaza::chargeVehicle(int vehicleType )//Charges the vehicle according to its type and adds to the collectedToll. 
	{
		switch (vehicleType)
		{
			case 1:
			collectedToll += _carToll;
			break;
			case 2:
			collectedToll += _bikeToll;
			break;
			case 3:
			collectedToll += _busToll;
			break;
			case 4:
			collectedToll += _heavyDutyTruckToll;
			break;
			case 5:
			collectedToll += _lightDutyTruckToll;
			break;
		}
}
	long int TollPlaza::getCollectedTollToday() const//Returns the collected Toll.
	{
		return collectedToll;
	}
	long int TollPlaza::getMaxToll() const//Returns the Target Toll to be collected.
	{
		return  MAX_TOLL;
	}