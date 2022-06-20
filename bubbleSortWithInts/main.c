/*
Author:     Billy Gene Ridgeway
Purpose:    To learn about bubble sorting in C.
Date:       June 21st. 2022

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int temp[5];
    int bubbles[5]={15, 16, 6, 8, 5};
    int bubbles2[5]={15, 16, 6, 8, 5};
    int j = 0;
    int s = 5;

    printf("\nStandard Bubble Sort\n\n");

    for(int i = 0; i < s-1; i++)
    {
        for(j = 0; j < s-1; j++)
            {
                if(bubbles[j] > bubbles[j + 1])
                {
                    temp[j] = bubbles[j];
                    bubbles[j] = bubbles[j + 1];
                    bubbles[j + 1] = temp[j];
                }

                for(int x = 0; x < s; x++)
                {
                    printf("%d  ", bubbles[x]);
                }

                printf("\n");
            }
    }

    // Modified Bubble Sort

    printf("\nModified Bubble Sort\n\n");

    for(int i = 0; i < s-1; i++)
    {
        int flag = 0;

        for(j = 0; j < s-1-i; j++)
            {
                if(bubbles2[j] > bubbles2[j + 1])
                {
                    temp[j] = bubbles2[j];
                    bubbles2[j] = bubbles2[j + 1];
                    bubbles2[j + 1] = temp[j];
                    flag = 1;
                }

                for(int x = 0; x < s; x++)
                {
                    printf("%d  ", bubbles2[x]);
                }

                printf("\n");
            }
            if(flag == 0)
            {
                break;
            }
    }


    return 0;
}
