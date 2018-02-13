#ifndef TOLLPLAZA_H
#define TOLLPLAZA_H
class TollPlaza
{
private:
	static const int _CAR;
	static const int _BIKE;
	static const int _BUS;
	static const int _HeavyDutyTruck;
	static const int _LightDutyTruck;
	static int _carToll;
	static int _bikeToll;
	static int _busToll;
	static int _heavyDutyTruckToll;
	static int _lightDutyTruckToll;
	long int collectedToll;
	const long int MAX_TOLL;
	int tollPlazaId;
	char tollPlazaAddress[200];
public:
	TollPlaza(int id, char *ads, long int mt);
	void resetTollPlaza();
	void chargeVehicle(int vehicleType );
	long int getCollectedTollToday() const;
	long int getMaxToll() const;
};
#endif