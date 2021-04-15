#include "fun.h"
#include "unity.h"
 /*char name[20];
  char address[50];
  char phno[10];
  int period;*/
  char name[20];
 int room;
 char wifi[20];
 char bf[20];
//int bill;
/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}
/*void test_avail(void){

    TEST_ASSERT_EQUAL(2,100);
    
}
void test_customer_details(void){
    strcpy(name,"meher");
    strcpy(address,"vijayawada");
    strcpy(phno,"8367230297");
    strcpy(period,"3");

TEST_ASSERT_EQUAL_STRING("name",name);
TEST_ASSERT_EQUAL_STRING("address",address);
TEST_ASSERT_EQUAL_STRING("phno",phno);
TEST_ASSERT_EQUAL_STRING("period",period);
}*/
void test_enter_name(){
     strcpy(name,"USHA");
    strcpy(room,"11");
    strcpy(wifi,"5GB");
    strcpy(bf,"y");

TEST_ASSERT_EQUAL_STRING("name",name);
TEST_ASSERT_EQUAL_STRING("room",room);
TEST_ASSERT_EQUAL_STRING("wifi",wifi);
TEST_ASSERT_EQUAL_STRING("bf",bf);
}
/*void test_room_dealloc(){
     strcpy(name,"meher");
    strcpy(roomno,"4");
    
 

TEST_ASSERT_EQUAL_STRING("checkout_name",checkout_name);
TEST_ASSERT_EQUAL_STRING("roomno",roomno);

}
void test_billing(){
     strcpy(name,"meher");
    strcpy(roomno,"4");
int bill=7200;
TEST_ASSERT_EQUAL_STRING("name",name);
TEST_ASSERT(bill==7200);

}*/
int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */

    RUN_TEST(enter_name);
    /*RUN_TEST(customer_details);
    RUN_TEST(room_alloc);
    RUN_TEST(room_dealloc);
    RUN_TEST(billing);*/


    /* Close the Unity Test Framework */
    return UNITY_END();
}