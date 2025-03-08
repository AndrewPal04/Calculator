#include "unity.h"
#include "calculator.h"

void setUp(void){

}
void tearDown(void){

}
void test_add_positive_number(void){
    TEST_ASSERT_EQUAL(5,add(2,3));
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_add_positive_number);
    return UNITY_END();
}