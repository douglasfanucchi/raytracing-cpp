#include <minunit.h>
#include <Point.hpp>
#include <Vector.hpp>

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

MU_TEST(test_should_compare_point_as_equal) {
    Point p(3, 4, 5);
    
    mu_check(p == p);
}

MU_TEST(test_should_compare_point_as_different) {
    Point p(3, 4, 5);

    mu_check(p != Point(M_PI, M_SQRT2, M_E));
}

MU_TEST(test_should_subtract_points) {
    Point p(3, 4, 5);

    Vector result = p - Point(2, 7, 11);

    mu_check(Vector(1, -3, -6) == result);
}

MU_TEST_SUITE(test_point_suite) {
    MU_RUN_TEST(test_should_create_a_point_at_space_origin);
    MU_RUN_TEST(test_should_create_a_point_at_certain_space_position);
    MU_RUN_TEST(test_should_compare_point_as_equal);
    MU_RUN_TEST(test_should_compare_point_as_different);
    MU_RUN_TEST(test_should_subtract_points);
}
