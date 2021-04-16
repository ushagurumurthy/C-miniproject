# HOTEL MANAGEMENT SYSTEM

#  Requirements

## Hotel management System features and benefits

The Requirements of increasing global competition, demands,needs of consumers and quality management have become
fundamental key factors of achieving profitability and competitiveness on the constant market. A hotel with a defined mission, vision and
goals, must define a special policy of improving the quality of hotel services through structural programs of quality improvement,which have
become an important factor in the hotel business. With the design, introduction and control of a
special program of quality improvement of hotel services, hotel management can have a positive
impact on increasing satisfaction of customers.

## Cost and Time Complexity

### Time Complexity

O(N), where N is the number of rooms available.
    This refers that running time increases at most linearly with the size of the input.

### Space Complexity

O(N), the amount of memory needed to run the algorithm i.e, space complexity.

## Defining system

![defining system](https://github.com/ushagurumurthy/C-miniproject/blob/master/1_Requirements/Defining%20system.png?raw=true)

## Explanation
  ### Hotel Management Features

1- It is very secure as only the authorized user gets to access the program because of the login function.
2- The password is kept hidden.
3- There is a backup of the files in case they get damaged or lost.
4- Proper Login Validation.
5- Proper Validation in Adding Information.
6- Adding, Viewing, Editing, Deleting Records.
7- The authorized users can add, delete, list, search, modify very easily and finely. It has speedy processing rate as the recorded data are stored in a computer memory.

## SWOT Analysis

<img width="750" alt="SWOT" src="https://user-images.githubusercontent.com/62166597/114440231-83727880-9be7-11eb-8c3c-04c4cf9fcc9f.PNG">

## 4W's and 1'H
   
   ### Who:
           Hotel Management System is a software solution by providing high-quality services. This system is used for any kind of hotel business
           whether it be small scale or large scale.
    
   ### What:
           It is helpful for the Hotels/resorts/lodges/hostels in order to provide ease at booking through online.
   
   ### When:
           The Hotel Management System is now used in every hotels/resorts to provide easy booking for customers with good quality services.
   
   ### Where:
           Face the issues in booking process, it usually requires a customer identity.

   ### How:
           This issue can be solved by requesting any government proof of customer before saving the details.
         
       
## Detail requirements

### High Level Requirements 

| ID | Description | Status | 
| ----- | -----  | ---------|
|HL01| User Shall be able to login the system. | Done |
|HL02| User Shall be able to book the room.  | Done |
|HL03| User Shall be able to view the available rooms. | Done |
|HL04| User Shall be able to print the bill. | Done |
|HL05| User Shall be able to cancel the rooms. | Done |
|HL06| Data should be saved in case of failure.  | TBD |
|HL07| Proper GUI can be implemented for further. | TBD |

###  Low level Requirements
 
| ID | Description  | Status (Done/Future) |
| ------ | ---------  | ----- |
| LL01 |  The user will be able to login successfully with the valid credential. |Done|
| LL02 | If user entered the incorrect login credentials then ‘SORRY !!!!LOGIN IS UNSUCESSFUL’ message should be displayed. |Done |
| LL03 | If user entered the incorrect login credentials for 4 times then ‘Sorry you have entered the wrong username and password forfour times!!!’message should be displayed. |Done |
| LL04 | If the wrong choice number is entered then message of ‘Invalid Choice’ should be displayed. | Done |
| LL05 | After providing the required details for the booking the room and yes is provided for confirming the booking, the booking should be successful.| Done |
| LL06 | If all the required details for the booking the room are not provided then booking should be unsuccessful.| Done |
| LL07 | If the proper guest name is provided then the room should be cancelled successfully.| Done |
| LL08 | If the proper guest name is not provided then the message ‘No record found for this Name’ should be displayed.| Done |
| LL09 | For validating the booking if the proper guest name is provided then the message ‘Guest name exist check the list to confirm Once’ should be displayed.| Done |
| LL10 | For validating the booking if the incorrect guest name is provided then the message ‘No Record Found’ should be displayed.| Done |



