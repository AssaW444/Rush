void	ipssi_putchar(char c);

void	ipssi_rush02(int x, int y)
{
	int	ligne;
	int	colonne;

	ligne = 1;
	if (x < 1 || y < 1)
		return ;
	while (ligne <= y)
	{
		colonne = 1;
		while (colonne <= x)
		{
			if ((ligne == 1 && colonne == 1) || (ligne == 1 && colonne == x))
				ipssi_putchar('A');
			else if (ligne == y && colonne == 1)
				ipssi_putchar('C');
			else if (ligne == y && colonne == x)
				ipssi_putchar('C');
			else if (ligne == 1 || ligne == y || colonne == 1 || colonne == x)
				ipssi_putchar('B');
			else
				ipssi_putchar(' ');
			colonne++;
		}
		ipssi_putchar('\n');
		ligne++;
	}
}
