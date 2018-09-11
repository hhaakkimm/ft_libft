#include <stdio.h>

void ft_bzero(void *s, size_t n);

int main()
{
	int arr[] = {3,2 ,4 ,6 ,6};
	ft_bzero(arr, sizeof(arr));
	printf("%d", arr[2]);
}
