class Car
{
private:
	int gasolineGauge;
public:
//	Car(int gas) : gasolineGauge(gas)
	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class  HybridCar : public Car
{
private:
	int electricGauge;
public:
//	HybridCar(int gas, int elec) : Car(gas), electircGauge(elec)	
	int GetElecGauge()
	{
		return electricGauge;
	}
};

class HybirdWaterCar : public HybridCar
{
private:
	int waterGauge;
public:
//	HybridWaterCar(int gas, int elec, int water) : HyridCar(gas, elec), waterGauge(water)	
	void showCurrentGauge()
	{
		cout<<"Gas remaining : "<<GetGasGauge()<<endl;
		cout<<"Elec remaining : "<<GetElecGauge()<<endl;
		cout<<"Water remaining : "<<waterGauge<<endl;
	}
};

