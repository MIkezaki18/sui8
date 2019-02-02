#include "unity.h"
#include "qs_select.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_qs_select_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement qs_select");
}

void test_Select_01(void)
{
	int x[] = {3,5,6,4,7,2,1};
	int ret;

	ret = Select(x,sizeof(x)/sizeof(int),3);
	TEST_ASSERT_EQUAL_INT (ret, 3);
}
