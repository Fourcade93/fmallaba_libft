#include "main_test.h"
#include "libft.h"
#include <stdio.h>

void	run_test(void)
{
	int i = 0;
	while ((first_func[i]))
		(first_func[i++])();
}

int	main(void)
{
	run_test();
	// run_test(second_func);
	// run_test(bonus_func);
	return (0);
}