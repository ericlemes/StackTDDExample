#include "pch.h"

class GivenAStack : public ::testing::Test {
public:
};

TEST_F(GivenAStack, WhenRunningShouldFail) {
	ASSERT_TRUE(false);
}