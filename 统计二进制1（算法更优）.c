#define _CRT_SECURE_NO_WARNINGS 1
int count_bit_one(int x) //�������壺ͳ������������λ1�ĸ���
{
	int count = 0;
	while (x)
	{
		x = x&(x - 1);   
		count++;
	}
	return count;

}
int main()
{
	int n = 0; 
	scanf("%d", &n);
	int ret = 0;
	ret=count_bit_one(n);
	printf("%d\n", ret);
	return 0;
}