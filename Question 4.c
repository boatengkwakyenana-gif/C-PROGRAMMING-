#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

     /*Variable to store each individual systolic BP reading*/
	int systolicBP;           
    
    /*Accumulator variable to store the sum of all readings*/
	int totalBP = 0;          
    
	/*Counter variable to track number of readings entered*/
	int count = 0;            
    
	/*Variable to store the calculated average*/
	float averageBP;          
    
    /*Display program title and instructions*/
    printf("=== Systolic Blood Pressure Analyzer ===\n");
    printf("This program will calculate the total and average of 4 systolic BP readings.\n");
    printf("Please enter each reading in mmHg (millimeters of mercury).\n\n");
    
    /*Use a for loop to prompt for 4 systolic BP readings
    Loop runs exactly 4 times (from i = 1 to i <= 4)*/
    int i;
	for(i = 1; i <= 4; i++) 
	{
        /*Prompt user for the current reading with clear labeling*/
        printf("Enter systolic BP reading #%d: ", i);
        
        /*Read the user input for this reading*/
        scanf("%d", &systolicBP);
        
        /*Add the current reading to the running total*/
        totalBP += systolicBP;
        
        /*Increment the counter (though not strictly necessary since we know it's 4)*/
        count++;
    }
    
    /*calculate the average by dividing total by number of readings
    Cast totalBP to float to ensure floating-point division*/
    
    averageBP = (float)totalBP / count;
    
    /*Display results with formatted output and clear labels*/
    printf("\n=== Results Summary ===\n");
    printf("Total of 4 systolic BP readings: %d mmHg\n", totalBP);
    printf("Average systolic BP: %.1f mmHg\n", averageBP);
    
    
	return 0;
}
