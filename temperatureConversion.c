*
Cam Bortle
CSC 1710
September 26th, 2019
/home/students/cbortle/csc1710/lab6/bortleLab6.c
Convert temperature from Fahrenheit to degrees Celsius and Kelvins
*/

#include <stdio.h>
int main (void)

{
//Initialize fahrenheit, celsius, and kelvin
   float value, f, c, k;
//Initialize increment value and table border
   int increment,i=1;


//User input for initial fahrenheit temperature,ending fahrenheit temperature, and incremental value
   printf ("Please enter an amount of degrees Fahrenheit *Max of 99*: ");
   scanf ("%f", &f);
   printf ("Please enter an end amount of degrees Fahrenheit *Max of 99*: ");
   scanf ("%f", &value);
   printf ("Please enter an amount to increment by (Whole Number 1-10)");
   scanf ("%i", &increment);




  //Table formatting print statements
   printf ("CONVERSION TABLE\n\n");
   printf ("Degrees Fahrenheit       Degrees Celsius       Degrees Kelvin\n");


//While loop used to create table border
   while (i<=13){
     printf("-----");
     i++;
   }





//For loop used to calculate the values of Celsius and Kelvin conversions
   for (f = f; f<=value; f += increment)
      {
       c = (f - 32)/(9.0/5);
       k = (f + 459.67) * (5.0/9);
      printf("\n");
      printf ("%4.2f                       %5.2f                       %5.2f\n", f, c, k);
      }
}
