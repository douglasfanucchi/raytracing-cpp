#include <minunit.h>
#include "unit/tuples/Tuple.cpp"

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(test_tuple_suite);
	MU_REPORT();
	return 0;
}
