#include <minunit.h>
#include <Tuple.hpp>
#include <cmath>

MU_TEST(test_should_create_a_tuple) {
    Tuple tuple;
    float expected = 0;

    mu_assert_double_eq(expected, tuple.x);
    mu_assert_double_eq(expected, tuple.y);
    mu_assert_double_eq(expected, tuple.z);
    mu_assert_double_eq(expected, tuple.w);
}

MU_TEST(test_should_create_a_tuple_with_values_different_than_0) {
    Tuple tuple(3, 10, 11, 7);

    mu_assert_double_eq(3, tuple.x);
    mu_assert_double_eq(10, tuple.y);
    mu_assert_double_eq(11, tuple.z);
    mu_assert_double_eq(7, tuple.w);
}

MU_TEST(test_should_compare_two_tuple_as_equal) {
    Tuple tuple(M_PI, M_SQRT2, 1, 7);
    Tuple tuple2(M_PI, M_SQRT2, 1, 7);

    mu_check(tuple == tuple2);
    mu_check((tuple == Tuple(1, 2, 3, 4)) == false);
}

MU_TEST(test_should_compare_two_tuple_as_different) {
    Tuple tuple(M_PI, M_SQRT2, 1, 7);
    Tuple tuple2(1, 2, 3, 4);

    mu_check(tuple != tuple2);
    mu_check((tuple != tuple) == false);
}

MU_TEST(test_should_add_two_tuples) {
    Tuple tuple(1, 2, 3, 4);

    Tuple result = tuple + Tuple(4, 3, 2, 1);

    mu_check(result == Tuple(5, 5, 5, 5));
}

MU_TEST(test_should_subtract_tuples) {
    Tuple tuple(5, 5, 5, 5);

    Tuple result = tuple - Tuple(1, 2, 3, 4);

    mu_check(result == Tuple(4, 3, 2, 1));
}

MU_TEST_SUITE(test_tuple_suite) {
    MU_RUN_TEST(test_should_create_a_tuple);
    MU_RUN_TEST(test_should_create_a_tuple_with_values_different_than_0);
    MU_RUN_TEST(test_should_compare_two_tuple_as_equal);
    MU_RUN_TEST(test_should_compare_two_tuple_as_different);
    MU_RUN_TEST(test_should_add_two_tuples);
    MU_RUN_TEST(test_should_subtract_tuples);
}
