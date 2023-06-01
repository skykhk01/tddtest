#include "pch.h"
#include "../TDD_1/Cal.cpp"

TEST(TestCaseName, TestName) {
	EXPECT_EQ(1, Cal().cal_minus(5, 4));
}

TEST(TestCaseName, TestName2) {
	EXPECT_EQ(8, Cal().cal_minus(2, 10));
}
