class Cal
{
public:
	int cal_minus(int param1, int param2)
	{
		if (param1 > param2)
		{
			return param1 - param2;
		}
		return param2 - param1;
	}
};