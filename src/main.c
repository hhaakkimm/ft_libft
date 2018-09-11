#include <stdio.h>
#include <string.h>

void ft_bzero(void *s, size_t n);
void *ft_memset(void *b, int c, size_t len);
void *ft_memcpy(void *restrict dst, void *restrict src, size_t n);

int main()
{
	int arr[] = {1, 2, 3, 4, 5 ,6 ,9 , 8};
	int a[] = {7, 7, 7, 7, 7, 7, 7, 7};
	memcpy(arr, a, sizeof(arr));
	for(int i=0;i<8; i++)
		printf("%d %d\n", arr[i], a[i]);
}
