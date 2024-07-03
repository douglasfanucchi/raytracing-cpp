#include <asserts.hpp>

void ASSERT_TRUE(bool value) {
    if (value) {
        std::cout << "✅";
    } else {
        std::cerr << "❌";
    }
}

void ASSERT_FALSE(bool value) {
    ASSERT_TRUE(value == false);
}

void ERROR_MESSAGE(std::string expected, std::string result)
{
    std::cerr << std::endl << "EXPECTED: " << std::endl;
    std::cerr << expected << std::endl;
    std::cerr << "---------------------------------------";
    std::cerr << std::endl << "RESULT: " << std::endl;
    std::cerr << result << std::endl;
}

void ASSERT_STREQ(std::string expected, std::string result)
{
    ASSERT_TRUE(expected == result);
    if (expected != result) {
        ERROR_MESSAGE(expected, result);
    }
}

void ASSERT_EQ(int expected, int result)
{
    std::ostringstream expectedStream;
    std::ostringstream resultStream;

    expectedStream << expected;
    resultStream << result;
    ASSERT_TRUE(expected == result);
    if (expected != result) {
        ERROR_MESSAGE(expectedStream.str(), resultStream.str());
    }
}
