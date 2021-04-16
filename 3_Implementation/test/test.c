#include<stdio.h>
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
void setUp(){}
void tearDown(){}
char confirm;
void check(void)
{
    TEST_ASSERT_EQUAL('y',confirm);
}
/**
 * @brief Check Whether any room is booked or not
 * @brief Check File is empty or not
 * @brief Using unit Test case
 *
 */
int main(){
    FILE *fp;
	fp=fopen("bookings.txt","r");
     if(fp == NULL)
    {
        confirm='n';
    }else{
        confirm='y';
    }
    UNITY_BEGIN();
    RUN_TEST(check);
    return UNITY_END();
}
