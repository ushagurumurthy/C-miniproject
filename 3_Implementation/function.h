#include<stdbool.h>



#ifndef __FUNCTION_H__
#define ___FUNCTION_H__




/**
 * @brief Structure to hold a Details to Book Room
 *
 */

typedef struct{
	char name[50];
	int room_num;
}pd;




/* Read 1 character with echo */




//function prototypes to be used

/**
 * @brief Some functions carried out are void
 * @brief all variables are global
 *
 */

/**
 * @brief data process to book a room
 *
 */
void reservation(void);							//main booking function

/**
 * @brief Display all the available room
 *
 */
void viewdetails(void);							//view details of all the rooms

/**
 * @brief Use to display the room booking details
 *
 */
void display(void);

/**
 * @brief Cancel the user room
 *
 */
void cancel(void);

/**
 * @brief Display the user booked room
 *
 * @param name whose room is booked
 * @param int room number
 * @param float room charges
 */
void printbill(char name[],int,float);	//print bill

/**
 * @brief display specific room details
 *
 * @param int room number
 *
 */
void specificroom(int);						//print data related to specific room

/**
 * @brief function use to set the room charges according to the room selected
 *
 * @param int room number
 *
 * @return float
 */
float charge(int);							//charge automatically w.r.t the room booked

/**
 * @brief initiater used to login the user
 *
 */
void login();

/**
 * @brief Begining of application
 *
 */
void compute();


/**
 * @brief function use to check whether the room exists or not
 *
 */
void validate();


/**
 * @brief To check the name exist in booked list
 *
 * @param name
 * @return true
 * @return false
 */
bool present(char name[]);



#endif
