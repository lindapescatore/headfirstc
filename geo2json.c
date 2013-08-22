#include <stdio.h>

// this program takes raw gps data and formats it for json.
// Head First C chapter 3

int main() {
	
	float latitude;
	float longitude;
	char info[80];
	int started = 0;

	puts("data=[");
	while (scanf("%f, %f, %79[^\n]", &latitude, &longitude, info) ==3) {
		if (started) 
			printf(", \n");

		else 
			started = 1;

		printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
	}
	puts("\n]");
	return 0;
}
