#include "../function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
char confirm;
void check_room_num(void)
{
    TEST_ASSERT_EQUAL('y',confirm);
}
void reservation(void)
{
	int i=0;
	float charges;
	pd passdetails;
	FILE *fp;
	fp=fopen("rooms_reserved.txt","a");
	printf("\e[1;1H\e[2J");
	printf("\nEnter Your Name:> ");
	fflush(stdin);
	scanf("%s",passdetails.name);
	//printf("\nEnter the room number:> ");
	//scanf("%d",&passdetails.num_of_seats);
	printf("\n\n>>Press Enter To View Available Rooms<< ");
	getchar();
	getchar();
	printf("\e[1;1H\e[2J");
	viewdetails();
	printf("\n\nEnter room number:> ");
	start1:
	scanf("%d",&passdetails.room_num);
	if(passdetails.room_num>=101 && passdetails.room_num<=110)
	{
		charges=charge(passdetails.room_num);
		printbill(passdetails.name,passdetails.room_num,charges);
	}
	else
	{
		printf("\nInvalid Room Number! Enter again--> ");
		goto start1;
	}

	printf("\n\nConfirm Room (y/n):>");
	start:
	scanf(" %c",&confirm);
	UNITY_BEGIN();
    RUN_TEST(check_room_num);
    UNITY_END();
	if(confirm == 'y')
	{
		fprintf(fp,"%s\t\t%d\t\t%d\t\t%.2f\n",passdetails.name,passdetails.room_num,charges);
		printf("==================");
		printf("\n BOOKED YOUR ROOM\n");
		printf("==================");
		printf("\nPress any key to go back to Main menu");
		getchar();
	}
	else
	{
		if(confirm=='n'){
			printf("\nBooking Not Done!\nPress any key to go back to  Main menu!");
			getchar();
		}
		else
		{
			printf("\nInvalid choice entered! Enter again-----> ");
			goto start;
		}
	}
	fclose(fp);
	getchar();
}
