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

TEST_F(GivenAStack, WhenPushingMultipleElementsShouldReturnExpectedValue) {
	stack.Push(1);
	stack.Push(2);

	ASSERT_EQ(2, stack.Pop());
	ASSERT_EQ(1, stack.Pop());
}