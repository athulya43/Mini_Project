#include "unity.h"
#include "recordmanagement.h"
int main()
{
  fp = fopen("data.txt", "rb+");

	if (fp == NULL) 
	{
		fp = fopen("data.txt", "wb+");
	}
  
UNITY_BEGIN();

  RUN_TEST(test_displayrecord);
  RUN_TEST(test_addrecord);
  RUN_TEST(test_deleterecord);
  RUN_TEST(test_modifyrecord);

  return UNITY_END();
}
