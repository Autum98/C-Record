#define _CRT_SECURE_NO_WARNINGS 1
int get_differ_bit(int x,int y) //�������壺ͳ�������в�ͬ������λ����
{
	int z = x^y; //�õ������Ķ����������
	int count = 0;
	while (z) //������1�ĸ���
	{
		z = z&(z - 1);
		count++;
	}
	return count;
}
int main()
{
	int a = 0;
	int b = 0;
	int ret = 0;
	printf("������������:>");
	scanf("%d%d", &a, &b);
	ret = get_differ_bit(a,b);
	printf("�����Ĳ�ͬ������λ���ǣ�%d\n", ret);
	return 0;
}