#ifndef MAIN_TEST_H
# define MAIN_TEST_H

# include <string.h>


void	test_memset_1(void);
void	test_memset_2(void);
void	test_memset_3(void);
void	test_memset_4(void);
void	test_bzero_1(void);
void	test_bzero_2(void);
void	test_memcpy_1(void);
void	test_memcpy_2(void);
void	test_memcpy_3(void);
void	test_memcpy_4(void);

typedef void (*func_type)(void);
func_type	(first_func[11]) = {test_memset_1,
								test_memset_2,
								test_memset_3,
								test_memset_4,
								test_bzero_1,
								test_bzero_2,
								test_memcpy_1,
								test_memcpy_2,
								test_memcpy_3,
								test_memcpy_4, NULL};

#endif