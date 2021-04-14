#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include "class_date.h"
#include "class_room.h"
#include "class_customer.h"
#include "class_login.h"
void Pause()
{
	printf("\n\n Press any key to continue.........\n\n");
	getchar();
}

void login()
{

	int a=0,i=0;
    char uname[20],c=' ';
    char pword[10],code[10];

    do
{
	system("cls");

    printf("\n  **************************  LOGIN FORM  **************************  ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", &uname);
	printf(" \n                       ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword);
		if(strcmp(uname,"Admin")==0 && strcmp(pword,"udupi")==0)
	{
	printf("  \n\n\n       WELCOME !!!! LOGIN IS SUCCESSFUL");

	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;

		getch();

	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		getch();

		}
		system("cls");
}

void main()
{
	struct login x = {"","",0};
	int choice;
	//FILE *id;
	//char user[10],password[25];
	do
	{
		system("clear");
		printf("\n\n 1. Administrator\n 2. Customer\n 3. Exit\n Enter your choice : ");
		scanf("%d",&choice);
		getchar();
		if(choice==1)
		{

			if(!x.verified)
			{
			    login();
                system("cls");
			}

			do
			{
				system("clear");
				printf("\n\n 1. List of available rooms\n\n 2. Bill generator\n\n");
				printf(" 3. History of a room\n\n 4. Rooms to vacate today\n\n");
				printf(" 5. Date wise History\n\n 6. Logout\n\n Enter your choice: ");
				scanf("%d",&choice);
				getchar();
				system("clear");
				float amount;
				switch(choice)
				{
					case 1 : DisplayAvailableRooms(getRoomNo());    Pause(); break;
					case 2 : amount = CheckOut();
					         if(amount != -1)
					         	printf("\n\n Amount to be paid: %.2f\n\n",amount);
					         	                                    Pause(); break;
					case 3 : Room_History();						Pause(); break;
					case 4 : getCheckOut();							Pause(); break;
					case 5 : Date_History();						Pause(); break;
					case 6 : printf("\n\n Logged out successfully!\n\n");
							 x.verified = 0;						Pause(); break;
					default: printf("\n\n Invalid Input!Try again!\n\n");Pause(); break;
				}

			}while(choice!=6);
			choice  = -1;
		}
		else if(choice==2)
		{

			system("clear");
			printf("\n\n WELCOME TO THE WHITELOTUS HOTEL \n\n");
			printf("\n\n 1. Check in\n\n 2. Check out\n\n 3. Check availabile rooms\n\n Enter your choice: ");
			scanf("%d",&choice);
			getchar();
			system("clear");
			switch(choice)
			{
				case 1 : CheckIn();							  Pause();  break;
				case 2 : printf("\n\n Contact Admin!\n\n");  	  	  Pause();  break;
				case 3 : DisplayAvailableRooms(getRoomNo());  Pause();  break;
				default: printf("\n\n Invalid Input!Try again!\n\n");Pause();break;
			}
			choice = -1;
		}
		else if(choice==3)
		{
			printf("\n\nExiting............................................\n\n");
		}
		else
		{
			printf("\n\n Please enter a valid option\n\n Press any key to continue\n\n");
			getchar();
		}
	}while(choice!=3);
}
