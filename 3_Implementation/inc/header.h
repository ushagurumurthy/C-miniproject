#ifndef HEADER_H
#define HEADER_H

//structure defined to store name, room, bf and wifi required
struct hotel
{
    char name[20];
    char room[20];
    char bf[20];
    char wifi[20];

}h;


//Method Declaration
void enter_name();
void find_name();
void find_room();
void checkout_guest();
void view_bookings();

#endif
