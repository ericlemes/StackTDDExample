#include "pch.h"

#include "Stack.h"

class GivenAStack : public ::testing::Test {
public:
};

TEST_F(GivenAStack, WhenConstructingShouldNotThrow) {
	Stack s;
}