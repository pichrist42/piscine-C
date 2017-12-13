#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c){write(1, &c, 1);}

void	ft_putstr(char *s){
	while(*s)
		write(1, s++, 1);
}

int		do_atoi(char *str, int sign, int res){
	while (*str && !res && ((*str >= 9 && *str <= 13) || *str == ' '))
		str++;
	if (*str && !res && !sign && (*str == '+' || *str == '-'))
	{
		if (*str == '+')
			sign = 1;
		else
			sign = -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		res = res * 10 + *str - '0';
		str++;
	}
	if (sign)
		res *= sign;
	return (res);
}

void	ft_putnbr(int nb){
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			nb += 2000000000;
			ft_putchar('2');
		}
		nb = nb * (-1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		ft_pow(int nb, int pow){
	if (pow <= 0)
		return (1);
	return (nb * ft_pow(nb, --pow));
}

void	base_to_base(int base_from, int base_to, int nb, int nb_bit){
	char *dest = (char*)malloc(sizeof(char) * nb_bit);
	int max_value_bit = ft_pow(base_to, nb_bit - 1);
	int c_dest = 0;
	while (max_value_bit > 0)
	{
		// printf("loop %d - bit value is %d\n", c_dest, max_value_bit);
		if (max_value_bit <= nb){
			// printf("\tnb %d >= %d -> set bit %d to 1\n", nb, max_value_bit
			// 	, c_dest);
			dest[c_dest++] = '1';
			nb -= max_value_bit;
		}else{
			// printf("\tnb %d < %d -> set bit %d to 0\n", nb, max_value_bit
			// 	, c_dest);
			dest[c_dest++] = '0';
		}
		max_value_bit /= base_to;
	}
	dest[c_dest] = '\0';
	ft_putstr(dest);
	ft_putchar('\n');
}

int		main(int c, char **v){
	if (c == 2)
		base_to_base(10, 2, do_atoi(v[1], 0, 0), 8);
	else if (c == 5)
		base_to_base(do_atoi(v[1], 0, 0), do_atoi(v[2], 0, 0)
			, do_atoi(v[3], 0, 0), do_atoi(v[4], 0, 0));
	else
		ft_putstr("format is ./a.out base_from base_to nb_to_convert "
			+"nb_of_bit_to_display\n");
	return 0;
}