#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int arr[] = { 1, 2, 3};
	int i = 0;
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++) //利用指针访问数组元素
	{
		printf("%d ", *(p+i));
	}
	return 0;
}