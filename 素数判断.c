#define _CRT_SECURE_NO_WARNINGS 1
//is_prime:�Զ���������жϺ���
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j < n; j++)   //������2��n-1����ȥ���������ж�n�Ƿ�Ϊ����
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	
	int i = 0;
	
	for (i = 1; i <= 10; i++)    //�ж�1��10֮�������
	{
		if (1 == is_prime(i))
			printf("%d\n",i);
	}
	
	return 0;
}
