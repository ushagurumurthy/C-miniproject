#include "unity_internals.h"
#include "unity.h"
#include "header.h"

void setUp(){}
void tearDown(){}
void testpwd(void){
	TEST_ASSERT_EQUAL(0,check("potato","potato"));

}
int main()
{
	UNITY_BEGIN();
	RUN_TEST(testpwd);
	return UNITY_END();
}
