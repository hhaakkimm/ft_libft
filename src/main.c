#include <stdio.h>
#include <string.h>

void ft_bzero(void *s, size_t n);
void *ft_memset(void *b, int c, size_t len);
void *ft_memcpy(void *restrict dst, void *restrict src, size_t n);
size_t ft_strlen(const char *s);

int main()
{
	int arr[] = {1, 2, 3, 4, 5 ,6 ,7};
	int a[] = {9, 8 , 7 , 6 , 222, 6, 5};
	memccpy(arr, a, 0, sizeof(a));
	char s[] = "Hakeem";
	printf("%d", ft_strlen(s));
}
