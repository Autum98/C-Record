#define _CRT_SECURE_NO_WARNINGS 1
void print_table(int x) //������ƣ���ӡ�˷���
{
	int i = 1;
	printf("\n");
	for (i = 1; i <= x; i++)
	{
		//��ӡÿ������
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int t = 0;
	scanf("%d", &t);
	print_table(t);
	return 0;
}