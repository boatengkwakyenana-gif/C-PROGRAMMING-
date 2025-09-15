#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
    float temperature;
    
    /*Prompt the user to enter their body temperature
    Using formatted output with clear instructions*/
    
    printf("=== Body Temperature Classifier ===\n");
    printf("Please enter your body temperature in Celsius (°C): ");
    
    /*Read the temperature input from the user
    scanf() reads the floating-point value and stores it in the variable*/
    
    scanf("%f", &temperature);
    
    /*Use if-else structure to classify the temperature based on medical standards
    First condition: check if temperature is below 35°C (Low)*/
    
    if (temperature < 35.0) {
    	
        /*Print classification result with formatted output*/
        
        printf("\n--- Temperature Classification ---\n");
        printf("Status: LOW\n");
        printf("Temperature: %.1f°C\n", temperature);
        printf("Medical Note: Hypothermia - Seek immediate medical attention.\n");
        
    }
    /*Second condition: check if temperature is within normal range (35-37.5°C)*/
    
	else if (temperature >= 35.0 && temperature <= 37.5) {
		
    /*Print classification result with formatted output*/
    
        printf("\n--- Temperature Classification ---\n");
        printf("Status: NORMAL\n");
        printf("Temperature: %.1f°C\n", temperature);
        printf("Medical Note: Within healthy range.\n");
        printf("No immediate action required.\n");
    }
    /*Default case: temperature above 37.5°C (High)*/
    else {
    	
        /*Print classification result with formatted output*/
        
        printf("\n--- Temperature Classification ---\n");
        printf("Status: HIGH\n");
        printf("Temperature: %.1f°C\n", temperature);
        printf("Medical Note: Elevated temperature - Possible fever.\n");
        printf("Consider monitoring symptoms and seek medical attention.\n");
    }
    


	
	return 0;
}
