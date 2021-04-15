#include "unity_internals.h"
#include "unity.h"
#include "header.h"
void setUp(){}
void tearDown(){}
void testforpasswd(void){
	TEST_ASSERT_EQUAL(0,check("potato","potato"));

}
int main()
{
	UNITY_BEGIN();
	RUN_TEST(testforpasswd);
	return UNITY_END();
}
