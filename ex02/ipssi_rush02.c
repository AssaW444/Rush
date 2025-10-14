void	ipssi_putchar(char c);

void	ipssi_rush02(int x, int y)
{
	int	l;
	int	c;

	l = 1;
	if (x < 1 || y < 1)
		return ;
	while (l <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((l == 1 && c == 1) || (l == 1 && c == x))
				ipssi_putchar('A');
			else if ((l == y && c == 1) || (l == y && c == x))
				ipssi_putchar('C');
			else if (l == 1 || l == y || c == 1 || c == x)
				ipssi_putchar('B');
			else
				ipssi_putchar(' ');
			c++;
		}
		ipssi_putchar('\n');
		l++;
	}
}
