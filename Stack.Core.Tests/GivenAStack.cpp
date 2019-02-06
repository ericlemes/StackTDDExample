#include "pch.h"

#include "Stack.h"

class GivenAStack : public ::testing::Test {
public:
	Stack<int> stack;
};

TEST_F(GivenAStack, WhenPushingShouldAddElement) {	
	stack.Push(1);
	ASSERT_EQ(1, stack.Pop());
}