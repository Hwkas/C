//
//  main.c
//  Coursera Test 1
//
//  Created by Amaan Saifi on 27/06/20.
//  Copyright © 2020 Amaan Saifi. All rights reserved.
/*      Algorithm
    Give input 'n'.
    call 'i' for 0 to 'n'(inclusive).
        call 'j' for 0 to 'i' (inclusive).
            print Red Boxes Co-ordinates.
            if 'i' even Green Box Co-ordinates.
            else 'i' odd Blue Boxes Co-odinates.
  */

#include <stdio.h>

int main(void)
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<=n;i++)//for counting no. for Graphs.
    {
        printf("For N = %d \n Co-ordinates for Red Boxes are\n",i);
        for(j=0;j<=i;j++)//for counting no. of Red Boxes.
        {
        printf("(%d,%d) (%d,%d)\n",j,j,j,j+1);//Co-ordinates of Red Boxes.
        }
        if((i%2) == 0)//for counting Green Box.
        {
            printf("; Co-ordinates for Green Box (%d,%d)",(i+1),(i+1));/*Co-ordinates of Green box*/
        }
        else//for counting Blue Boxes.
        {
            printf(" Co-ordinates for Blue Boxes (%d,%d) ",(i+2),(i));/*Co-ordinates of Blues Box.*/
            printf("(%d,%d)",(i+2),(i+2));/*Co-ordinates of Blues Box.*/
        }
        printf("\n\n");
    }
    return 0;
}
