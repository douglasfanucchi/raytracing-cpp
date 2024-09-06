#include <minunit.h>
#include <Tuple.hpp>

MU_TEST(test_should_create_a_tuple) {
    Tuple tuple;
    float expected = 0;

    mu_assert_double_eq(expected, tuple.x);
    mu_assert_double_eq(expected, tuple.y);
    mu_assert_double_eq(expected, tuple.z);
    mu_assert_double_eq(expected, tuple.w);
}

MU_TEST_SUITE(test_tuple_suite) {
    MU_RUN_TEST(test_should_create_a_tuple);
}
