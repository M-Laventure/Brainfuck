#ifndef BRAINFUCK_H
#define BRAINFUCK_H
# include <unistd.h>
# include <stdlib.h>


void	ft_putchar(char c);
void	ft_putstr(char *str);
void	set_null(char *bf_tab, int size);
void	inc_p(char *bf_tab);
void 	dec_p(char *bf_tab);
void	dec_oct(char *bf_tab);
void	inc_oct(char *bf_tab);
void	prchar_oct(char *bf_tab);
void	hook(char *bf_tab);
void	inv_hook(char *bf_tab);
char	is_comment(char *bf_tab);

#endif
