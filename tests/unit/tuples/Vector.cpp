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

MU_TEST_SUITE(test_vector_suite) {
    MU_RUN_TEST(test_should_create_null_vector);
}