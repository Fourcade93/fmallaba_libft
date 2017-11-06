#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <fcntl.h>
#include "libft.h"

void	check_iteri(unsigned int n, char *s)
{
	ft_putendl(ft_itoa((int)n));;
	ft_putendl(s);
}

char	check_map(char c)
{
	return (ft_toupper(c));
}

char	check_mapi(unsigned int n, char c)
{
	if (n % 2)
		return ('1');
	return (ft_toupper(c));
}

int		check_fd(char *s)
{
	return (open(s, O_WRONLY));
}

void	check_delone(void *data, size_t n)
{
	char	*tmp;

	tmp = data;
	if (tmp)
	{
		while (n--)
			*tmp++ = 0;
	}
	tmp = NULL;
	n = 0;
}

t_list	*check_lstmap(t_list *elem)
{
	t_list	*new_elem;

	new_elem = ft_lstnew(ft_strmap(elem->content, &check_map), elem->content_size);
	return (new_elem);
}

int		main(int ac, char **av)
{
	// t_list	*list;
	// t_list	*map_lst;
	// char	dest[30];
	// char	dest2[30];

	(void)ac;
	// list = ft_lstnew(ft_strdup(av[1]), ft_strlen(av[1]) + 1);
	// list->next = ft_lstnew(ft_strdup(av[2]), ft_strlen(av[2]) + 1);
	// ft_lstadd(&list, ft_lstnew(ft_strdup(av[3]), ft_strlen(av[3]) + 1));
	// map_lst = ft_lstmap(list, &check_lstmap);
	// while (map_lst)
	// {
	// 	ft_putendl(map_lst->content);
	// 	map_lst = map_lst->next;
	// }
	// while (list)
	// {
	// 	ft_putendl(list->content);
	// 	ft_putendl(ft_itoa(list->content_size));
	// 	list = list->next;
	// }
//	ft_putnbr_fd(ft_atoi(av[1]), check_fd(av[2]));
//	ft_putnbr(ft_atoi(av[1]));
/*	char	*i1 = ft_itoa(-1234);

	if (strcmp(i1, "-1234"))
		ft_putendl(av[1]);
	ft_putendl("end");*/
/*	char	**arr;
	int		n; 
	n = ft_atoi(av[2]);
	arr = ft_strsplit(av[1], ' ');
	while (n--)
		ft_putendl(*arr++);*/
//	ft_putstr(ft_strtrim(av[1]));
//	ft_putstr(ft_strjoin(av[1], av[2]));
//	ft_putstr(ft_strsub(av[1], ft_atoi(av[2]), ft_atoi(av[3])));
//	ft_putstr(ft_strmapi(av[1], &check_mapi));
//	ft_putstr(ft_strmap(av[1], &check_map));
//	ft_putstr(ft_itoa(ft_strnequ(av[1], av[2], ft_atoi(av[3]))));
//	ft_putstr(ft_itoa(ft_strequ(av[1], av[2])));
//	ft_striteri(av[1], &check_iteri);
//	ft_striter(av[1], &ft_putstr);
/*	char	*ret = ft_strnew(ft_atoi(av[1]));
	for (int i = 0; i < ft_atoi(av[1]); i++)
		if (ret[i] != '\0')
			ft_putendl("fail");
	ft_putendl("end");*/
//	ft_putchar(ft_toupper(av[1][0]));
//	ft_putchar(ft_tolower(av[2][0]));
//	ft_putstr(ft_strcat(ft_itoa(ft_isalpha(av[1][0])), "\n"));
//	ft_putstr(ft_strcat(ft_itoa(ft_isdigit(av[2][0])), "\n"));
//	ft_putstr(ft_itoa(ft_isalnum(av[3][0])));
//	ft_putstr(ft_strnstr(av[1], av[2], ft_atoi(av[3])));
//	ft_putchar('\n');
//	ft_putstr(ft_strnstr(((void *)0), "av[2]", ft_atoi(av[1])));
//	ft_putstr(ft_itoa(ft_strcmp(av[1], av[2])));
//	ft_putstr(ft_strstr(av[1], av[2]));
//	ft_putstr(ft_strrchr(av[1], ft_atoi(av[2])));
//	ft_putstr(ft_strchr(av[1], ft_atoi(av[2])));
//	ft_putstr(ft_itoa(ft_strlcat(av[1], av[2], ft_atoi(av[3]))));
//	ft_putchar('\n');
//	ft_putstr(ft_itoa(strlcat(av[1], av[2], ft_atoi(av[3]))));
//	ft_putstr(ft_strncat(av[1], av[2], ft_atoi(av[3])));
//	ft_putstr(ft_strcat(av[1], av[2]));
//	ft_putstr(ft_strncpy(av[1], av[2], ft_atoi(av[3])));
//	ft_putchar('\n');
//	 ft_putendl(strncpy(av[1], av[2], ft_atoi(av[3])));
//	ft_putnbr(memcmp(ft_strncpy(dest, "", ft_atoi(av[1])), strncpy(dest2, "", ft_atoi(av[1])), 29));
//	ft_putstr(strcpy(av[1], av[2]));
//	ft_putchar('\n');
//	ft_putstr(ft_strcpy(av[1], av[2]));
//	ft_putendl(ft_strdup(av[1]));
//	ft_putendl(ft_itoa(strcmp(av[1], ft_strdup(av[1]))));
//	ft_putstr(ft_itoa(ft_strlen(av[1])));
//	ft_putstr(ft_itoa(ft_memcmp(av[1], av[2], ft_atoi(av[3]))));
//	ft_putstr(ft_itoa(ft_memcmp(av[1], av[2], ft_atoi(av[3]))));
//	ft_putchar('\n');
//	ft_putstr(ft_itoa(memcmp(av[1], av[2], ft_atoi(av[3]))));
//	ft_putstr(ft_memchr(av[1], ft_atoi(av[2]), ft_atoi(av[3])));
//	ft_putchar('\n');
//	ft_putstr(memchr(av[4], ft_atoi(av[2]), ft_atoi(av[3])));
//	ft_putstr((char*)ft_memset(av[1], ft_atoi(av[2]), ft_atoi(av[3])));
	return (0);
}
