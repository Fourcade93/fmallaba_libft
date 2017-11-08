void	test_memset_1(void)
{
	char	a1[ASIZE];
	char	a2[ASIZE];

	a1[ASIZE] = '\0';
	a2[ASIZE] = '\0';
	memset(a1, 'A', 127);
	memset(a2, 'A', 127);
	memset(a1, 'B', 20);
	ft_memset(a2, 'B', 20);
	if (memcmp(a1, a2, ASIZE))
		printf("%s	", "FAIL");
	else
		printf("%s	", "[OK]");
}

void	test_memset_2(void)
{
	char	a1[ASIZE];
	char	a2[ASIZE];

	a1[ASIZE] = '\0';
	a2[ASIZE] = '\0';
	memset(a1, 'A', 127);
	memset(a2, 'A', 127);
	memset(a1, '\200', 20);
	ft_memset(a2, '\200', 20);
	if (memcmp(a1, a2, ASIZE))
		printf("%s	", "FAIL");
	else
		printf("%s	", "[OK]");
}

void	test_memset_3(void)
{
	char	a1[ASIZE];
	char	a2[ASIZE];
	int		sign = 0;

	a1[ASIZE] = '\0';
	a2[ASIZE] = '\0';
	memset(a1, 'A', 127);
	memset(a2, 'A', 127);
	char	*ret1 = memset(a1, 'B', 20);
	char	*ret2 = ft_memset(a2, 'B', 20);
	if (memcmp(ret1, ret2, ASIZE))
		sign++;
	ret1 = memset("", 'B', 0);
	ret2 = ft_memset("", 'B', 0);

	if (memcmp(ret1, ret2, ASIZE))
		sign++;
	if (sign == 2)
		printf("%s	", "FAIL");
	else
		printf("%s	", "[OK]");
}

void	test_memset_4(void)
{
	char	a1[ASIZE];
	char	a2[ASIZE];

	memset(a1, 0, ASIZE);
	memset(a2, 0, ASIZE);
	memset(a1, '\200', 0);
	ft_memset(a2, '\200', 0);
	if (memcmp(a1, a2, ASIZE))
		printf("%s	", "FAIL");
	else
		printf("%s	", "[OK]");
}