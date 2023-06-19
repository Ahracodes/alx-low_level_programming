int add(int a, int b)
{
	int val;

	val = a + b;
	return (val);
}

int sub(int a, int b)
{
	int val;

        val = a - b;
        return (val);
}

int mul(int a, int b)
{
	int val;

        val = a * b;
        return (val);
}

int div(int a, int b)
{
	int val;

	if (b != 0)
	{
		val = a / b;
		return (val);
	}
	else
		return (0);
}

int mod(int a, int b)
{
	int val;

	if (b != 0)
		return (a % b);
	return (0);
}
