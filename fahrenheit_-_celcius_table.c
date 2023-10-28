//
//  main.c
//  Fahrenheit - Celcius table
//
//  Created by Amaan Saifi on 05/02/19.
//  Copyright © 2019 Amaan Saifi. All rights reserved.
//

#include <stdio.h>

void main()
{
    double fahr , celcius;
    double lower,upper,step;
    lower=0;
    upper=300;
    step=20;
    fahr=lower;
    while(fahr<=upper)
    {
        celcius= 5*(fahr-32)/9;
        printf("\n%f\t%f\n",fahr,celcius);
        fahr=fahr+step;
        
    }
}
