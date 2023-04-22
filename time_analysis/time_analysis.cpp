#include <cstdio>
#include <cstdlib>
#include <ctime>                     //이거 외우고

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
	clock_t start, end;          //이거 외우고
	double duration;			//이것도

	start = clock();			//이거 중요

	//int sum = sum_of_N(n);
	int sum1 = sum_of_N1(n);

	end = clock();				//이거 중요

	duration = (end - start) / CLOCKS_PER_SEC;			//CLOCKS_PER_SEC 뭔가나올듯
	printf("%f초 걸렸습니다\n", duration);

}