#include "pch.h"
#include "../TDD_1/Account.cpp"

class AccountTest : public testing::Test
{
public:
	Account account{ 10000 };
};

TEST_F(AccountTest, CreateAccountInit10000won) {
	EXPECT_EQ(10000, account.getBalance());
}

TEST_F(AccountTest, Deposit) {
	account.deposit(500);
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountTest, Withdraw) {
	account.withdraw(600);
	EXPECT_EQ(9400, account.getBalance());
}
