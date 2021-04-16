#include"unity.h"
#include"header.h"
#include<string.h>

#define PROJECT_NAME "HotelManagement"

//void test_enter_name();
void test_find_name();
void test_checkout_guest();
//void test_find_room();

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();
  /* Run Test functions */
  //RUN_TEST(test_enter_name);
  RUN_TEST(test_find_name);
  RUN_TEST(test_checkout_guest);
 // RUN_TEST(test_find_room);  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/*void test_enter_name()
{
TEST_ASSERT_EQUAL(1,menu(1));
TEST_ASSERT_EQUAL(2,menu(2));
TEST_ASSERT_EQUAL(3,menu(3));
TEST_ASSERT_EQUAL(4,menu(4));
TEST_ASSERT_EQUAL(5,menu(5));
TEST_ASSERT_EQUAL(6,menu(6));
}*/

void test_find_name()
{
   TEST_ASSERT_EQUAL(1, find_name(0));
}

void test_checkout_guest()
{
  TEST_ASSERT_EQUAL(1,checkout_guest(1));
}

/*void test_find_room()
{
  TEST_ASSERT_EQUAL(1, find_room(1,"1"));
  TEST_ASSERT_EQUAL(1,search(1,"random"));
}*/
