// PROJECT-04-CALCULATE-ELECTRICITY-BILL.c
/*
Unit 	                         Charge/unit
upto 199 	                        @2.04
200 and above but less than 400 	@3.00
400 and above but less than 600 	@4.50
600 and above 	                    @7.01

If bill exceeds Rs. 400 then a surcharge of 20% will be charged and the minimum bill should be of Rs. 200/-
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    int id[11];
    int unit;
    float charge;
    printf("\nELECTRICITY BILL CALCULATE SYSTEM");
    printf("\n---------------------------------");
    printf("\nENTER CUSTOMER ID:");
    scanf("%s", &id);
    fflush(stdin);
    printf("\nENTER CUSTOMER NAME:");
    fgets(name, sizeof(name), stdin);
    printf("\nENTER TOTAL UNIT CONSUMED IN THIS MONTH:");
    scanf("%d", &unit);
    if (unit > 0 || unit <= 199)
    {
        charge = 2.04;
    }
    else if (unit > 200 || unit < 400)
    {
        charge = 3.00;
    }
    else if (unit > 400 || unit < 600)
    {
        charge = 4.50;
    }
    else if (unit > 600)
    {
        charge = 7.01;
    }
    else
    {
        printf("\nENETR RIGHT NUMBER");
    }
    float rs = charge * unit;
    float surcharge;
    float s;

    printf("\nCUSTOMER ID:%s", id);
    printf("\nCUSTOMER NAME:%s", name);
    printf("\nTOTAL UNIT CONSUMED:%d", unit);
    printf("\nTOTAL COST:%2.f", rs);
    if (rs > 400)
    {
        surcharge = rs * 20.00 / 100.00;
        s = rs + surcharge;

        printf("\nTOTAL BILL WITH SURGE CHARGE:%.2f", s);
    }
}