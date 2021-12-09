#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char	*str, ...);
int		ft_deal_with_specs(char str, va_list *ap);
int		ft_print_char(va_list *ap);
int		ft_print_str(va_list *ap);
int		ft_print_ptr(va_list *ap);
int		ft_print_hex(va_list *ap, char x);
int		ft_print_u(va_list *ap);
int		ft_print_digit(va_list *ap);
int		ft_strlen(const char *str);
char	*ft_itoa(int n);
void	ft_itoa_fill(long int n, char *nb, int index);

#endif