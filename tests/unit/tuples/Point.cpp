#include <minunit.h>
#include <Point.hpp>

MU_TEST(test_should_create_a_point_at_space_origin) {
    Point p;

    mu_assert_double_eq(0, p.x);
    mu_assert_double_eq(0, p.y);
    mu_assert_double_eq(0, p.z);
    mu_assert_double_eq(1, p.w);
}

MU_TEST(test_should_create_a_point_at_certain_space_position) {
    Point p(3, 4, 5);

    mu_assert_double_eq(3, p.x);
    mu_assert_double_eq(4, p.y);
    mu_assert_double_eq(5, p.z);
    mu_assert_double_eq(1, p.w);
}

MU_TEST_SUITE(test_point_suite) {
    MU_RUN_TEST(test_should_create_a_point_at_space_origin);
    MU_RUN_TEST(test_should_create_a_point_at_certain_space_position);
}