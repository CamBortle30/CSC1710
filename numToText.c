/*
Cam Bortle
CSC 1710
October 3rd, 2019
/home/students/csc1710/lab7/bortleLab7VersionB.c
Prints out a 4 digit number in words (I.E 2468 yields two four six eight)
*/

#include <stdio.h>
int main (void)

{  //Initialize and declare variables
   int n, num = 0, count = 0;
   //Prompts user to input their number of choice
   printf("Enter A True Four Digit Positive Number (1-9999) : \n");
   scanf("%d", &n);
   //Input Validation (Idiot-Proofing)
   if (n <= 0 || n > 9999){
     printf("Not A Valid Four Digit Number");}
   //Calculation loop to strip origional number of its place values
   while (n != 0)
   {
      num = (num * 10) + (n % 10);
      n /= 10;
   }
   //Switch Statement inside while loop to print out each number
   while (num >= 0 && num <= 9999 && count < 4)
   {
      switch (num % 10)
      { case 1:
            printf("One ");
            count ++;
            break;
        case 2:
            printf("Two ");
            count ++;
            break;
        case 3:
            printf("Three ");
            count ++;
            break;
        case 4:
            printf("Four ");
            count ++;
            break;
        case 5:
            printf("Five ");
            count ++;
            break;
        case 6:
            printf("Six ");
            count ++;
            break;
        case 7:
            printf("Seven ");
            count ++;
            break;
        case 8:
            printf("Eight ");
            count ++;
            break;
        case 9:
            printf("Nine ");
            count ++;
            break;
        case 0:
            printf("Zero ");
            count ++;
            break;
        default:
            printf("Try Again \n");
            break;

      }


   num = num / 10;
   }
return 0;
}