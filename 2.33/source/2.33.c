#include <stdio.h>
#include <stdlib.h>
int main()
{
	//-----------------------input-----------------------
	float km, gas_fee, liter_km, parking_fee, total;
	printf("Please input Total mileage for one day\n");
	scanf_s("%f", &km);
	printf("Please input How much a liter of gasoline costs\n");
	scanf_s("%f", &gas_fee);
	printf("Please input Average number of kilometers per liter\n");
	scanf_s("%f", &liter_km);
	printf("Please input Parking fee for a day\n");
	scanf_s("%f", &parking_fee);
	//-----------------------process-----------------------
	total = (liter_km / km)*gas_fee + parking_fee;
	//-----------------------output-----------------------
	printf("You spend %.2f a day driving to work\n\n", total);
	system("pause");
	return 0;
}