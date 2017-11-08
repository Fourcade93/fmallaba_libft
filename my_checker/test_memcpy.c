#include <string.h>
#include <stdio.h>
#include "libft.h"

#define ASIZE 128

void	test_memcpy_1(void)
{
	char	src[] = "basic test";
	char	a1[10];
	char	a2[10];

	memcpy(a1, src, 10);
	ft_memcpy(a2, src, 10);
	if (memcmp(a1, a2, 10))
		printf("%s	", "FAIL");
	else
		printf("%s	", "[OK]");
}

void	test_memcpy_2(void)
{
	char	src[] = "basic test";
	char	a1[10];
	char	a2[10];
	int		sign = 0;

	char	*ret1 = memcpy(a1, src, 10);
	char	*ret2 = ft_memcpy(a2, src, 10);
	if (memcmp(ret1, ret2, 10))
		sign++;
	ret1 = memcpy("", src, 0);
	ret2 = ft_memcpy("", src, 0);
	if (memcmp(ret1, ret2, 10))
		sign++;
	if (sign == 2)
		printf("%s	", "FAIL");
	else
		printf("%s	", "[OK]");
}

void	test_memcpy_3(void)
{
	char	src[] = "basic test";
	char	*tmp = "differ text";
	char	a[] = "differ text";

	ft_memcpy(a, src, 0);
	if (memcmp(a, tmp, 11))
		printf("%s	", "FAIL");
	else
		printf("%s	", "[OK]");
}

void	test_memcpy_4(void)
{
	char	src[] = "basic test";
	char	a1[] = "differ text";
	char	a2[] = "differ text";

	memcpy(a1, src, 11);
	ft_memcpy(a2, src, 11);
	if (memcmp(a1, a2, 11))
		printf("%s\n", "FAIL");
	else
		printf("%s\n", "[OK]");
}
