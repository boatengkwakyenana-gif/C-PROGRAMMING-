#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    /*Declare a variable to store the user's body temperature*/
    float temperature;
    
    /*Prompt the user to enter their body temperature*/
    printf("Enter your body temperature in Celsius: ");
    
    /*Read the temperature input from the user*/
    scanf("%f", &temperature);
    
    /*Use if-else structure to classify the temperature
    Check if temperature is less than 35°C (Low)*/
    if (temperature < 35.0) {
        printf("\nTemperature Classification: LOW\n");
        printf("Your body temperature is below normal.\n");
        printf("You may be experiencing hypothermia. Seek medical attention.\n");
    }
    /*Check if temperature is between 35°C and 37.5°C (Normal)*/
    else if (temperature >= 35.0 && temperature <= 37.5) {
        printf("\nTemperature Classification: NORMAL\n");
        printf("Your body temperature is within the healthy range.\n");
        printf("No immediate action required.\n");
    }
    /*If temperature is greater than 37.5°C (High)*/
    else {
        printf("\nTemperature Classification: HIGH\n");
        printf("Your body temperature is elevated.\n");
        printf("You may have a fever.Seek medical attention.\n");
    }
    
    /*Print a summary message with the temperature value*/
    printf("\n--- Summary ---\n");
    printf("Entered temperature: %.1f°C\n", temperature);
    
  	
	
	return 0;
}
