#define _CRT_SECURE_NO_WARNINGS 1
void print(int x) //��ӡ��������λ��ż��λ������λ
{
	int i = 0;
	printf("����λ:\n");
	for (i = 30; i >= 0; i -= 2)
	{
		int tmp = 0;
		tmp = (x >> i) & 1;
		printf("%d ", tmp);
	}
	printf("\n");
	printf("ż��λ:\n");
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