#define _CRT_SECURE_NO_WARNINGS 1
int get_differ_bit(int x,int y) //函数定义：统计两数中不同二进制位个数
{
	int z = x^y; //得到两数的二进制异或结果
	int count = 0;
	while (z) //计算结果1的个数
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
	printf("输入两个整数:>");
	scanf("%d%d", &a, &b);
	ret = get_differ_bit(a,b);
	printf("两数的不同二进制位数是：%d\n", ret);
	return 0;
}