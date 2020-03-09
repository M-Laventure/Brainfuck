#include "brainfuck.h"

/*void	print_oct(char *bf_tab)
{
	ft_putchar(*bf_tab);
}*/

void	set_null(char *bf_tab, int size)
{
	int i;
	
	i = -1;
	while (++i < size)
		bf_tab[i] = 0;
}

void	brainfuck(char *str, char *bf_tab)
{
	int count_hook;

	count_hook = 0;
	while(*str != '\0')
	{
		if (*str == '>')
			bf_tab++;
		if (*str == '<')
			bf_tab--;
		if (*str == '+')	
			*bf_tab = *bf_tab + 1;
		if (*str == '-')
			*bf_tab = *bf_tab - 1;
		if (*str == '.')
			ft_putchar(*bf_tab);
		if (*str == '[' && *bf_tab == 0)
		{
			str++;
			while (*str != '\0' && count_hook >= 0)
			{
				if (*str == '[')
					count_hook++;
				if (*str == ']')
					count_hook--;
				str++;
			}
			count_hook--;
		}
		count_hook = 0;
		if (*str == ']' && *bf_tab != 0)
		{	
			str--;
			while (*str != '\0' && count_hook >= 0)
			{
				if (*str == ']')
					count_hook++;
				if (*str == '[')
					count_hook--;
				str--;
			}
			str++;
			count_hook--;
		}
		count_hook = 0;
		str++;
	}
}

int	main(int argc, char **argv)
{
	int size;
	char *bf_tab;

	size = 2048;
	if (!(bf_tab = malloc(sizeof(char) * size)))
		return (0);
	set_null(bf_tab, size);
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	brainfuck(argv[1], bf_tab);
	free(bf_tab);
	return (0);
}		
