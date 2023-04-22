#include <cstdio>

int findMaxValue(int score[], int n)
{
	int maxval = score[0];

	for (int i = 0; i < n; i++)
	{
		if (maxval < score[i])
		{
			maxval = score[i];
		}
	}
	return maxval;
}

int findMaxPixel(int score[][5], int h, int w)
{
	int maxval = score[0][0];
	
	for (int i =0; i <h ; i++)
		for (int j =0; j<w; j++)
			if (maxval < score[i][j])
			{
				maxval = score[i][j];
			}
	return maxval;
}

int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int pix[4][5] = { {1,2,3,4,5},
					 {6,7,8,9,10},
					 {11,12,13,14,15},
					 {16,17,18,19,20} };

	int maxval = findMaxValue(arr, 10);
	int maxpix = findMaxPixel(pix, 4, 5);
	printf("최대 값 =%d, 최대밝기 =%d", maxval, maxpix);

	return 0;
}