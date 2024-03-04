#include <stdio.h>

#define case1	30
#define case2	80
#define case3	120

float CrystalTienDien(float sokWh) {
	float result;
	if (sokWh >= 1 && sokWh <= 50) {
		result = sokWh * 500;
	}
	
	if (sokWh >= 51 && sokWh <= 100) {
		result = sokWh * 700;
	}
	
	if (sokWh >= 101) {
		result = sokWh * 900;
	}
	
	return result;
}

int main() {
	float sokWh;
	printf("Enter number kWh: ");
	scanf("%f", &sokWh);
	printf("%0.2f\n", CrystalTienDien(sokWh));
	
	printf("\nChoose on the three cases: ");
	printf("\n 1. 30 kWh");
	printf("\n 2. 80 kWh");
	printf("\n 3. 120 kWh");
	printf("\n\nChoose 1-3: ");
	int choose;
	float result;
	scanf("%d", &choose);
	if (choose == 1) {
		result = case1 * 500;
		printf("\n%0.2f", result);
	}
	
	if (choose == 2) {
		result = case2 * 700;
		printf("\n%0.2f", result);
	}
	
	if (choose == 3) {
		result = case3 * 900;
		printf("\n%0.2f", result);
	}	
	return 0;
}
