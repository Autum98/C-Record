#define _CRT_SECURE_NO_WARNINGS 1
double pow(int x, int y) //´Î·½¼ÆËã
{
	
	if (x == 0)
		return 0; 
	if (y == 0)
		return 1;
	else if (y > 0)
	{
		double t = 1;
		int i = 0;
		for (i = 1; i <= y; i++)
		{
			t = x*t;
		}
		return t;
	}
	else
	{
		double t = 1;
		int i = 0;
		for (i = 1; i <= (-y); i++)
		{
			t = x*t;
		}
		return 1 / t;
	}
}

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	double ret = pow(x, y);
	printf("%lf\n", ret);
	return 0;
}