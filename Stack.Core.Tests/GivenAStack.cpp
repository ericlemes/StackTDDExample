#include "pch.h"

#include "Stack.h"

class GivenAStack : public ::testing::Test {
public:
};

TEST_F(GivenAStack, WhenConstructingShouldNotThrow) {
	Stack<int> s;
}

TEST_F(GivenAStack, WhenPushingShouldAddElement) {
	Stack<int> s;
	s.Push(1);
	ASSERT_EQ(1, s.Pop());
}