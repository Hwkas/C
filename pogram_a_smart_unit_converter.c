//
//  main.c
//  Pogram a smart unit converter
//
//  Created by Amaan Saifi on 14/09/19.
//  Copyright © 2019 Amaan Saifi. All rights reserved.
/*Write a C-program that converts metric measurements to imperial system values. Measurements are provided
 to your program in meters, grams or degrees Celsius and must be converted to feet, pounds and degrees Fahrenheit, respectively.
 
 Here are the conversion rules to use:
 
 1 meter = 3.2808 feet;
 
 1 gram = 0.002205 pounds;
 
 temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.
 
 On the first input line you are given the number of conversions to be made. Each of the following lines contains a value to be converted as well as its unit: m, g or c (for meters, grams or degrees Celsius). There will be a space between the number and the unit. You should print your output value for each input line immediately after calculating it (ie, you do not have to wait until you have read all inputs).
 
 Display the converted values with 6 decimal places, followed by a space and their unit: ft, lbs or f (for feet, pounds or degrees Fahrenheit). Each conversion result should be printed on its own line, and you should store and display all decimal values as doubles. */

#include<stdio.h>
void mtft(double x);
void gtlbs(double x);
void ctf(double x);
int main(void)
{
    int i = 0;
    int noc = 0;//no. of conversions.
    double n = 0; //no. to be converted.
    char unit;// no. to be converted in which unit.
    scanf("%d",&noc);
    for(i=0;i<noc;i++)
    {
        scanf("%lf",&n);
        scanf(" %c",&unit);/* space is important to be provided beacuse during
                            input the space is give b/w the no. & the character.*/
        if(unit == 'm')
        {
            mtft(n);
        }
        else if(unit == 'g')
        {
            gtlbs(n);
        }
        else
        {
            ctf(n);
        }
    }
    return 0;
    
}
void mtft(double x)//funtion for converting meter into feet.
{
    double compute = 0;
    compute = x*3.2808;
    printf("%.6lf ft \n",compute);
}
void gtlbs(double x)//function for converting grams to pounds.
{
    double compute = 0;
    compute = x*0.002205;
    printf("%.6lf lbs \n",compute);
}
void ctf(double x)// function for converting celcius to Fahrenheit.
{
    double compute = 0;
    compute = 32+(1.8*x);
    printf("%.6lf f \n",compute);
}
