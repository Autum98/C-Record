#define _CRT_SECURE_NO_WARNINGS 1
//is_prime:自定义的素数判断函数
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j < n; j++)   //产生从2到n-1的数去当除数，判断n是否为素数
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	
	int i = 0;
	
	for (i = 1; i <= 10; i++)    //判断1到10之间的素数
	{
		if (1 == is_prime(i))
			printf("%d\n",i);
	}
	
	return 0;
}
