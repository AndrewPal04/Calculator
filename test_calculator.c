#include "unity.h"
#include "calculator.h"

void setUp(void){

}
void tearDown(void){
//add tests
}
void test_add_positive_numbers(void){
    TEST_ASSERT_EQUAL(5,add(2,3));
}
void test_add_positive_and_negative_numbers(void){
    TEST_ASSERT_EQUAL(1, add(5,-4));
}
void test_add_negative_numbers(void){
    TEST_ASSERT_EQUAL(-7, add(-3,-4));
}
void test_add_zero(void){
    TEST_ASSERT_EQUAL(10,add(10,0));
    TEST_ASSERT_EQUAL(0,add(0,0));
}
void test_add_overflow(void){
    int result = add(INT_MAX,1);
    TEST_ASSERT_TRUE(result<0);
}
void test_add_underflow(void){
    int result = add(INT_MIN,-1);
    TEST_ASSERT_TRUE(result>0);
}
//subtract tests
void test_subtract_positive_numbers(void){
    TEST_ASSERT_EQUAL(2, subtract(5,3));
}
void test_subtract_positive_and_negative_numbers(void){
    TEST_ASSERT_EQUAL(7,subtract(5,-2));
}
void test_subtract_negative_numbers(void){
    TEST_ASSERT_EQUAL(1,subtract(-2,-3));
}
void test_subtract_zero(void){
    TEST_ASSERT_EQUAL(10,subtract(10,0));
    TEST_ASSERT_EQUAL(0,subtract(0,0));
}
void test_subtract_overflow(void){
    int result = subtract(INT_MAX,-1);
    TEST_ASSERT_TRUE(result<0);
}
void test_subtract_underflow(void){
    int result = subtract(INT_MIN, 1);
    TEST_ASSERT_TRUE(result>0);
}

int main(void){
    UNITY_BEGIN();
    //add tests
    RUN_TEST(test_add_positive_numbers);
    RUN_TEST(test_add_positive_and_negative_numbers);
    RUN_TEST(test_add_negative_numbers);
    RUN_TEST(test_add_zero);
    RUN_TEST(test_add_overflow);
    RUN_TEST(test_add_underflow);
    //subtract tests
    RUN_TEST(test_subtract_positive_numbers);
    RUN_TEST(test_subtract_positive_and_negative_numbers);
    RUN_TEST(test_subtract_negative_numbers);
    RUN_TEST(test_subtract_zero);
    RUN_TEST(test_subtract_overflow);
    RUN_TEST(test_subtract_underflow);
    return UNITY_END();
}