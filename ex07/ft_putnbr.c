#include <unistd.h>

void ft_putnbr(int nb)
{
long n;
char tab[12];
int i;
char c;

n = nb;

if (n < 0)
{	
write (1, "-", 1);
n = -n;
}

i = 0;
while (n/10 > 0)
{
	tab[i] = 48 + n % 10;
	n = n/10;
	i++; 
}

c = 48 + n % 10;
write (1, &c, 1);
while (i >= 0)
{
	write(1, &tab[i], 1);
	i--;
}

}

int main ()
{
  ft_putnbr(-2147483648);
  return(0);
}
