class Account
{
public:
	explicit Account(int money)
		: balance_(money)
	{

	}

	int getBalance()
	{
		return balance_;
	}

	void deposit(int money)
	{
		balance_ += money;
	}

	void withdraw(int money)
	{
		balance_ -= money;
	}

private:
	int balance_;
};