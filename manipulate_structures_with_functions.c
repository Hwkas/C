//
//  main.c
//  manipulate structures with functions
//
//  Created by Amaan Saifi on 21/02/20.
//  Copyright © 2020 Amaan Saifi. All rights reserved.
/*In this problem you will continue developing the data feature which you started implementing in the previous problem. You will implement a "tomorrow" feature in the C programming language via a function called "advanceDay()". The function advanceDay() should take as input a date (stored in a struct date) and return the date of the following day. You do not have to take into account leap years (although you may if you wish to). That is, it is okay for your function to always return March 1 as the day following February 28, no matter the year.

You are provided with a familiar date structure definition, a main function as well as the function prototypes for the readDate(), printDate(), and advanceDate() functions. Do not modify any of the given code. Simply add your function definitions underneath the main() function. For the readDate() and printDate() functions you may simply copy and paste the code you developed in the previous task.

*/

#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date);

int main(void) {
    struct date today, tomorrow;
    readDate(&today);
    printDate(today);
    tomorrow = advanceDay(today);
    printDate(tomorrow);
    return 0;
}

void printDate(struct date tp)//today pointer
{
    printf("%02d/",tp.month);
    printf("%02d/",tp.day);
    printf("%04d\n",tp.year);
    
}

void readDate(struct date *tp)//Today Pointer
{
    scanf("%d",&tp->year);
    scanf("%d",&tp->month);
    scanf("%d",&tp->day);
    
}

struct date advanceDay(struct date ap)//advance Pointer
{
   if((ap.year%4 == 0)||(ap.year%100 == 0)||(ap.year%400 == 0) )
   {
       switch (ap.month)
       {
           case 1:
               if(ap.day == 31){ap.month++;ap.day = 1;}
               else{ap.day++;}
               break;
           case 2:
               if(ap.day == 29){ap.month++;ap.day = 1;}
               else{ap.day++;}
               break;
           case 3:
               if(ap.day == 31){ap.month++;ap.day = 1;}
               else{ap.day++;}
               break;
           case 4:
               if(ap.day == 30){ap.month++;ap.day = 1;}
               else{ap.day++;}
               break;
           case 5:
               if(ap.day == 31){ap.month++;ap.day = 1;}
               else{ap.day++;}
               break;
           case 6:
               if(ap.day == 30){ap.month++;ap.day = 1;}
               else{ap.day++;}
               break;
           case 7:
               if(ap.day == 31){ap.month++;ap.day = 1;}
               else{ap.day++;}
               break;
           case 8:
               if(ap.day == 31){ap.month++;ap.day = 1;}
               else{ap.day++;}
               break;
           case 9:
               if(ap.day == 30){ap.month++;ap.day = 1;}
               else{ap.day++;}
               break;
           case 10:
               if(ap.day == 31){ap.month++;ap.day = 1;}
               else{ap.day++;}
               break;
           case 11:
               if(ap.day == 30){ap.month++;ap.day = 1;}
               else{ap.day++;}
               break;
           case 12:
               if(ap.day == 31){ap.month = 1;ap.day = 1;ap.year = ap.year+1;}
               else{ap.day++;}
               break;
       }
   }
    else
    {
        switch (ap.month)
        {
            case 1:
                if(ap.day == 31){ap.month++;ap.day = 1;}
                else{ap.day++;}
                break;
            case 2:
                if(ap.day == 28){ap.month++;ap.day = 1;}
                else{ap.day++;}
                break;
            case 3:
                if(ap.day == 31){ap.month++;ap.day = 1;}
                else{ap.day++;}
                break;
            case 4:
                if(ap.day == 30){ap.month++;ap.day = 1;}
                else{ap.day++;}
                break;
            case 5:
                if(ap.day == 31){ap.month++;ap.day = 1;}
                else{ap.day++;}
                break;
            case 6:
                if(ap.day == 30){ap.month++;ap.day = 1;}
                else{ap.day++;}
                break;
            case 7:
                if(ap.day == 31){ap.month++;ap.day = 1;}
                else{ap.day++;}
                break;
            case 8:
                if(ap.day == 31){ap.month++;ap.day = 1;}
                else{ap.day++;}
                break;
            case 9:
                if(ap.day == 30){ap.month++;ap.day = 1;}
                else{ap.day++;}
                break;
            case 10:
                if(ap.day == 31){ap.month++;ap.day = 1;}
                else{ap.day++;}
                break;
            case 11:
                if(ap.day == 30){ap.month++;ap.day = 1;}
                else{ap.day++;}
                break;
            case 12:
                if(ap.day == 31){ap.month = 1;ap.day = 1;ap.year = ap.year+1;}
                else{ap.day++;}
                break;
        
        }
    }
    
        return ap;
}
/* add your function definitions here */
