#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
/*Stores body temperature in degrees Celsius (°C)*/	
    float bodyTemperature; 
	     
    /*Stores heart rate in beats per minute (bpm)*/
    int heartRate;
	              
    /*Stores systolic blood pressure in mmHg*/
    int systolicBP;
	             
    /*Stores diastolic blood pressure in mmHg*/
    int diastolicBP;           
    
    
    
    /*Prompt the user to enter body temperature*/
    printf("=== Vital Signs Input ===\n");
    printf("Enter your body temperature in Celsius (°C): ");
    
    /*Read the temperature input from the user*/
    scanf("%f", &bodyTemperature);
    
    /*Prompt the user to enter heart rate*/
    printf("Enter your heart rate in beats per minute (bpm): ");
    
    /*Read the heart rate input from the user*/
    scanf("%d", &heartRate);
    
    /*Prompt the user to enter blood pressure readings*/
    printf("Enter your blood pressure reading (systolic/diastolic) in mmHg: ");
    printf("\nSystolic (top number): ");
    
    /*Read the systolic blood pressure value*/
    scanf("%d", &systolicBP);
    
    printf("Diastolic (bottom number): ");
    
    /*Read the diastolic blood pressure value*/
    scanf("%d", &diastolicBP);
    
    /*Display all entered values with clear labels and formatted output*/
    printf("\n=== Vital Signs Summary ===\n");
    printf("Body Temperature: %.1f°C\n", bodyTemperature);  // Format to 1 decimal place
    printf("Heart Rate: %d bpm\n", heartRate);
    printf("Blood Pressure: %d/%d mmHg\n", systolicBP, diastolicBP);
    
   
    
	return 0;
}
