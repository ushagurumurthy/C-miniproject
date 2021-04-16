#include "../function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printbill(char name[],int room_num,float charges)
{
	printf("\e[1;1H\e[2J");
	printf("-------------------\n");
	printf("\tRoom Details\n");
	printf("-------------------\n\n");
	printf("Guest Name:\t\t\t%s",name);
	//printf("\nNumber Of Seats:\t%d",num_of_seats);
	printf("\nRoom Number:\t\t%d",room_num);
	specificroom(room_num);
	printf("\nBill:\t\t%.2f",charges);
}
