#include <stdio.h>
#include <string.h>

char *ft_strncat(char *restrict s1, const char *restrict s2, size_t n);

int main()
{
	int arr[] = {1, 2, 3, 4, 5 ,6 ,7};
	int a[] = {9, 8 , 7 , 6 , 222, 6, 5};
	memccpy(arr, a, 0, sizeof(a));
	char s[] = "Hakeem";
	char s1[] = "abdul";
	printf("%s", ft_strncat(s, s1, 3));
}
