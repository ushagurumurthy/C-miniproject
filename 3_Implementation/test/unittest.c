#include "unity_internals.h"
#include "unity.h"
#include "class_customer.h"
#include "class_date.h"
#include "class_login.h"
#include "class_room.h"
void setUp(){}
void tearDown(){}
void testadd(void){
	TEST_ASSERT_EQUAL(0,check("Admin","udupi"));
	
}
int main()
{
	UNITY_BEGIN();
	RUN_TEST(testadd);
	return UNITY_END();
}