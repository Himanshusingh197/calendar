#include <stdio.h>
void main()
{
    int a, b, i = 1, m, c, d = 1, j;
    printf("Enter the month number of the year 2023 : ");
    scanf("%d", &m);
    switch (m)
    {
    case 1:
        printf("\n\nMonth - January - 2023\n ");
        printf("\n\nMon\tTue\tWed\tThu\tFri\tSat\tsun  ");
        printf("\n------::--------::--------::--------------::-------\n");
        printf("\t\t\t\t\t\t%d", i);
        a = 7;
        b = 31;
        break;
    case 2:
        printf("\n\nMonth - Ferbruary - 2023\n ");
        printf("\n\nMon\tTue\tWed\tThu\tFri\tSat\tsun  ");
        printf("\n------::--------::--------::--------------::-------\n");
        a = 3;
        printf("\t\t%d", i);
        b = 28;
        break;
    case 3:
        printf("\n\nMonth - March - 2023 \n");
        printf("\n\nMon\tTue\tWed\tThu\tFri\tSat\tsun  ");
        printf("\n------::--------::--------::--------------::-------\n");
        a = 3;
        printf("\t\t%d", i);
        b = 31;
        break;
    case 4:
        printf("\n\nMonth - April - 2023\n ");
        printf("\n\nMon\tTue\tWed\tThu\tFri\tSat\tsun  ");
        printf("\n------::--------::--------::--------------::-------\n");
        a = 6;
        printf("\t\t\t\t\t%d", i);
        b = 30;
        break;
    case 5:
        printf("\n\nMonth - May - 2023\n ");
        printf("\n\nMon\tTue\tWed\tThu\tFri\tSat\tsun  ");
        printf("\n------::--------::--------::--------------::-------\n");
        printf("%d", i);
        a = 1;
        b = 31;
        break;
    case 6:
        printf("\n\nMonth - June - 2023\n ");
        printf("\n\nMon\tTue\tWed\tThu\tFri\tSat\tsun  ");
        printf("\n------::--------::--------::--------------::-------\n");
        a = 4;
        printf("\t\t\t%d", i);
        b = 30;
        break;
    case 7:
        printf("\n\nMonth - July - 2023 \n");
        printf("\n\nMon\tTue\tWed\tThu\tFri\tSat\tsun  ");
        printf("\n------::--------::--------::--------------::-------\n");
        a = 6;
        printf("\t\t\t\t\t%d", i);
        b = 31;
        break;
    case 8:
        printf("\n\nMonth - August - 2023 \n");
        printf("\n\nMon\tTue\tWed\tThu\tFri\tSat\tsun  ");
        printf("\n------::--------::--------::--------------::-------\n");
        a = 2;
        printf("\t%d", i);
        b = 31;
        break;
    case 9:
        printf("\n\nMonth - September - 2023\n ");
        printf("\n\nMon\tTue\tWed\tThu\tFri\tSat\tsun  ");
        printf("\n------::--------::--------::--------------::-------\n");
        a = 5;
        printf("\t\t\t\t%d", i);
        b = 30;
        break;
    case 10:
        printf("\n\nMonth - October - 2023\n ");
        printf("\n\nMon\tTue\tWed\tThu\tFri\tSat\tsun  ");
        printf("\n------::--------::--------::--------------::-------\n");
        printf("\t\t\t\t\t\t%d", i);
        a = 7;
        b = 31;
        break;
    case 11:
        printf("\n\nMonth - November - 2023 \n");
        printf("\n\nMon\tTue\tWed\tThu\tFri\tSat\tsun  ");
        printf("\n------::--------::--------::--------------::-------\n");
        printf("\t\t%d", i);
        a = 3;
        b = 30;
        break;
    case 12:
        printf("\n\nMonth - December - 2023 ");
        printf("\n\nMon\tTue\tWed\tThu\tFri\tSat\tsun  ");
        printf("\n------::--------::--------::--------------::-------\n");
        a = 5;
        printf("\t\t\t\t%d", i);
        b = 31;
        break;
    default:
        printf("Invalid option!");
    }
    // int j,l,k;

    // for (j = 2; j <= 8-a; j++)
    // {
    //     printf("\t%d",j);
    // }
    // printf("\n");
    // int z=j;
    // while(j!=b)
    // {
    //     for ( l = 1; l < 8; l++)
    //     {      j++;
    //     printf("%d\t",j);
    //     if (j==b)
    //     {
    //         break;
    //     }

    //     }

    //     printf("\n");
    // }
    for (j = 2; j <= b; j++)
    {
        if (d == 8)
        {
            printf("\n");
            d = 1;
        }
        d++;
        printf("%d\t", j);
        if (j == b)
        break;
    }
}
// Created by himanshu