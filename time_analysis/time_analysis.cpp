#include <cstdio>
#include <cstdlib>
#include <ctime>                     //�̰� �ܿ��

int sum_of_N(int n)
{
	int sum = 0;
	for (int i = 0; i < n + 1; i++)
	{
		sum = sum + i;
	}
	return sum;
}

int sum_of_N1(int n)
{
	return (n * (n + 1) / 2);
	
}

int main()
{
	int n = 100000000000;
	clock_t start, end;          //�̰� �ܿ��
	double duration;			//�̰͵�

	start = clock();			//�̰� �߿�

	//int sum = sum_of_N(n);
	int sum1 = sum_of_N1(n);

	end = clock();				//�̰� �߿�

	duration = (end - start) / CLOCKS_PER_SEC;			//CLOCKS_PER_SEC �������õ�
	printf("%f�� �ɷȽ��ϴ�\n", duration);

}