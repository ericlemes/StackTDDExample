#include "pch.h"

class GivenAStack : public ::testing::Test {
public:
};

TEST_F(GivenAStack, WhenConstructingShouldNotThrow) {
	Stack s;
}