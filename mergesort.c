#include <stdio.h>
void merge_sort(int *arr, int low, int high)
{
	int mid;
	if(low < high)
	{
		mid = (low + high) / 2;

		merge_sort(arr, low, mid);

		merge_sort(arr, mid+1, high);

		merge(arr, low, high, mid);

	}

}

void merge(int *arr, int low, int high, int mid)
{

	int i, j, k;

	int c[50];

	i = low; // 0

	j = mid + 1; // 2

	k = low; //  0

	while(i <= mid && j <= high)

	{

		if(arr[i] < arr[j])

		{

			c[k] = arr[i];

			k++;

			i++;

		}

		else

		{

			c[k] = arr[j];

			k++;

			j++;

		}

	}




	while(i <=  mid)

	{

			c[k] = arr[i];

			k++;

			i++;

	}

	while(j <= high)

	{

			c[k] = arr[j];

			k++;

			j++;

	}

	for(i = low; i < k; i++)

	{

		arr[i] =  c[i];

	}

}

int main()

{

	int arr[] = {3, 5, 1, 4, 2};

	merge_sort(arr, 0, 4);

	int i;

	for(i = 0; i < 5; i++)

		printf("%d ", arr[i]);

}
