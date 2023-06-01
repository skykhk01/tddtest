class Account
{
public:
	explicit Account(int money)
		: balance_(money), interest_(0.05)
	{

	}

	int getBalance()
	{
		return balance_;
	}

	double getInterest()
	{
		return interest_;
	}

	void setInterest(double interest)
	{
		interest_ = interest / 100;
	}

	void deposit(int money)
	{
		balance_ += money;
	}

	void withdraw(int money)
	{
		balance_ -= money;
	}

	int applyInterest(int money)
	{
		return money * (1 + interest_);
	}


	void applyInterestToBalance()
	{
		balance_ = applyInterest(balance_);
	}

	int expectBalanceAfter(int years)
	{
		int result = balance_;
		for (int i = 0;i < years; ++i) result = applyInterest(result);
		return result;
	}

private:
	int balance_;
	double interest_;
};