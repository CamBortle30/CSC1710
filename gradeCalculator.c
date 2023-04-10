/*
 Cam Bortle
 CSC 1710
 9 8 19
/ home/students/cbortle/csc1710/lab3/bortleGPA.c
 This program will calculate the weighted GPA of a student based on user inputted grades
*/

#include <stdio.h>
int main (void)
{
   // Declaring My Variables
   float labAvg, quizAvg, programGrade, testGrade, lab1, lab2, lab3, lab4, quiz1, quiz2, quiz3, avg, totLab, totQuiz, gradeSum, GPA;
   // Lab Grade Print & User Input Statements
   printf("How many points out of 10 did you get on your first lab?");
   scanf("%f", &lab1);
   printf("How many points out of 10 did you get on your second lab?");
   scanf("%f", &lab2);
   printf("How many points out of 10 did you get on your third lab?");
   scanf("%f", &lab3);
   printf("How many points out of 10 did you get on your fourth lab?");
   scanf("%f", &lab4);
   //Lab Summation Statement
   totLab = lab1 + lab2 + lab3 + lab4;
   labAvg = (totLab/4) * 10;
   //Quiz Grade Print & User Input Statements
   printf("How many points out of 10 did you get on your first quiz?");
   scanf("%f", &quiz1);
   printf("How many points out of 10 did you get on your second quiz?");
   scanf("%f", &quiz2);
   printf("How many points out of 10 did you get on your third quiz?");
   scanf("%f", &quiz3);
   //Quiz Summation Statement
   totQuiz = quiz1 + quiz2 + quiz3;
   quizAvg = (totQuiz/3) * 10;
   //Program Grade Print & User Input Statements
   printf("How many points out of 100 did you get on your program?");
   scanf("%f", &programGrade);
   //Test Grade Print and User Input Statements
   printf("How many points out of 100 did you get on your test?");
   scanf("%f", &testGrade);
   //Total Grade Calculation and GPA Calculation
   gradeSum = (labAvg * .1) + (quizAvg * .03) + (programGrade * .06) + (testGrade * .1);
   avg = gradeSum / .29;
   printf("Your average is %.4f%%\n", avg);

  //If/Else Structure for outputting average and GPA based on that average
  if (avg >= 0 && avg <= 59)
  {
    GPA = 0.0;
    printf("You are failing the course. GPA: %.1f", GPA);
  }
  else if (avg >= 60 && avg <= 62)
  {
    GPA = 0.7;
    printf("You have a D- in the course. GPA: %.1f", GPA);
  }
  else if (avg >= 63 && avg <= 66)
  {
    GPA = 1.0;
    printf("You have a D in the course. GPA: %.1f", GPA);
  }
  else if (avg >= 67 && avg <= 69)
  {
    GPA = 1.3;
    printf("You have a D+ in the course. GPA: %.1f", GPA);
  }
  else if (avg >= 70 && avg <= 72)
  {
    GPA = 1.7;
    printf("You have a C- in the course. GPA: %.1f", GPA);
  }
  else if (avg >= 73 && avg <= 76)
  {
    GPA = 2.0;
    printf("You have a C in the course. GPA: %.1f", GPA);
  }
  else if (avg >= 77 && avg <= 79)
  {
    GPA = 2.3;
    printf("You have a C+ in the course. GPA: %.1f", GPA);
  }
  else if (avg >= 80 && avg <= 82)
  {
    GPA = 2.7;
    printf("You have a B- in the course. GPA: %.1f", GPA);
  }
  else if (avg >= 83 && avg <= 86)
  {
    GPA = 3.0;
    printf("You have a B in the course. GPA: %.1f", GPA);
  }
  else if (avg >= 87 && avg <= 89)
  {
    GPA = 3.3;
    printf("You have a B+ in the course. GPA: %.1f", GPA);
  }
  else if (avg >= 90 && avg <= 92)
  {
    GPA = 3.7;
    printf("You have an A- in the course. GPA: %.1f", GPA);
  }
  else if (avg >= 93 && avg <= 96)
  {
    GPA = 4.0;
    printf("You have an A in the course. GPA: %.1f", GPA);
  }
  else if (avg >= 97)
  {
    GPA = 4.0;
    printf("You have an A+ (4.) in the course. GPA: %.1f", GPA);
  }

}