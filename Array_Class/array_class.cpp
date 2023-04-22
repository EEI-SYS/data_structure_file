#include <cstdio>
#define MAX_SIZE 10

void sub(int x, int arr[])
{
	x = 10;
	arr[0] = 10;
}

int main()
{
	int var =0 ;
	int array[MAX_SIZE];
	array[0] = 0;

	sub(var, array);
	printf("var=%d, array[0]=%d", var, array[0]);

	return 0;
	
	//변수는 바뀌나 array값은 안바뀌었다
}