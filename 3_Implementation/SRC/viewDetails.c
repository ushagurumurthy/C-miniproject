#include "../function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void viewdetails(void)
{
	printf("\e[1;1H\e[2J");
	printf("-----------------------------------------------------------------------------");
	printf("\n ROOM DETAILS : Open 24 hours\n");
	printf("-----------------------------------------------------------------------------");
	printf("\n101\tNON AC\tRoom Service Available\tDouble Bed\tRs.1000\t\t");
	printf("\n102\tAC : Breakfast included\tRoom Service Available\tDouble Bed \tRs.2000\t\t");
	printf("\n103\tNON AC\tRoom Service Available\tDouble Bed \tRs.1000\t\t9am");
	printf("\n104\tAC : Breakfast included\tRoom Service Available\tDouble Bed \tRs.2000\t\t");
	printf("\n105\tNON AC\tRoom Service Available\tDouble Bed\tRs.1000\t\t");
	printf("\n106\tNON AC\tRoom Service Available\tDouble Bed \tRs.1000\t\t");
    printf("\n107\tNON AC:(Breakfast included)\tRoom Service Available\tDouble Bed \tRs.1100\t\t");
    printf("\n108\tNON AC\tRoom Service Available\tDouble Bed \tRs.1000\t\t");
    printf("\n109\tNON AC\tRoom Service Available\tDouble Bed \tRs.1000\t\t");
    printf("\n110\tNON AC\tRoom Service Available\tDouble Bed \tRs.1000\t\t");

}
