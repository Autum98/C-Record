#define _CRT_SECURE_NO_WARNINGS 1
void print(int x) //打印出二进制位的偶数位与奇数位
{
	int i = 0;
	printf("奇数位:\n");
	for (i = 30; i >= 0; i -= 2)
	{
		int tmp = 0;
		tmp = (x >> i) & 1;
		printf("%d ", tmp);
	}
	printf("\n");
	printf("偶数位:\n");
	for (i = 31; i >= 1; i -= 2)
	{
		int tmp = 0;
		tmp = (x >> i) & 1;
		printf("%d ", tmp);
	}
	printf("\n");
}
int main()
{
	int t = 0;
	scanf("%d", &t);
	print(t);
	return 0;
}