void	test_bzero_1(void)
{
	char	a1[ASIZE];
	char	a2[ASIZE];

	a1[ASIZE] = '\0';
	a2[ASIZE] = '\0';
	memset(a1, 'A', 127);
	memset(a2, 'A', 127);

	bzero(a1, 20);
	ft_bzero(a2, 20);
	if (memcmp(a1, a2, ASIZE))
		printf("%s	", "FAIL");
	else
		printf("%s	", "[OK]");
}

void	test_bzero_2(void)
{
	char	a1[ASIZE];
	char	a2[ASIZE];

	a1[ASIZE] = '\0';
	a2[ASIZE] = '\0';
	memset(a1, 'A', 127);
	memset(a2, 'A', 127);

	bzero(a1, 0);
	ft_bzero(a2, 0);
	if (memcmp(a1, a2, ASIZE))
		printf("%s	", "FAIL");
	else
		printf("%s	", "[OK]");
}