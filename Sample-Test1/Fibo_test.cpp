#include "pch.h"
#include "../TDD_1/Fibo.cpp"

TEST(TestCaseName, TestName) {
	EXPECT_EQ(0, Fibo().fibo(0));
	EXPECT_EQ(1, Fibo().fibo(1));

	std::vector<std::vector<int>> cases = {
		{0,0},
		{1,1},
		{2,1},
		{3,2} };

	for (int i = 0;i < cases.size(); ++i)
	{
		int input = cases[i][0];
		int expected = cases[i][1];
		EXPECT_EQ(expected, Fibo().fibo(input));
	}
}
