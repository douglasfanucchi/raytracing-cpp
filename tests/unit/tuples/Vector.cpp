#include <minunit.h>
#include <Vector.hpp>

MU_TEST(test_should_create_null_vector) {
    Vector v;
    float expected = 0;

    mu_assert_double_eq(expected, v.x);
    mu_assert_double_eq(expected, v.y);
    mu_assert_double_eq(expected, v.z);
    mu_assert_double_eq(expected, v.w);
}

MU_TEST(test_should_create_a_non_null_vector) {
    Vector v(3.0, 4.0, 5.0);

    mu_assert_double_eq(3, v.x);
    mu_assert_double_eq(4, v.y);
    mu_assert_double_eq(5, v.z);
    mu_assert_double_eq(0, v.w);
}

MU_TEST_SUITE(test_vector_suite) {
    MU_RUN_TEST(test_should_create_null_vector);
    MU_RUN_TEST(test_should_create_a_non_null_vector);
}