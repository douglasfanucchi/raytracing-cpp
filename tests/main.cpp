#include <minunit.h>
#include "unit/tuples/Tuple.cpp"
#include "unit/tuples/Point.cpp"
#include "unit/tuples/Vector.cpp"

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(test_tuple_suite);
	MU_RUN_SUITE(test_point_suite);
	MU_RUN_SUITE(test_vector_suite);
	MU_REPORT();
	return 0;
}
