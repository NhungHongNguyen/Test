#include <unistd.h>

void ft_print_combn(int n)
{
  int i;
  char tab[10];
  
  if (n == 1)
    {
      write(1, "0, 1, 2, 3, 4, 5, 6, 7, 8, 9\n", 29);
      return ;
    }
  i = 0;
  while(i < 10)
    {
      tab[i] = '0' + i;
      i++;
    }
  while (tab[0] != '0' + 10 - n)
    {
      while(tab[n - 1] <= '9')
	{
	  write(1, tab, n);
	  write(1, ", ", 2);
	  tab[n - 1] = tab[n - 1] + 1;
	}
      i = 2;
      while(tab[n - i] == '0' + 10 - i)
	i++;
      tab[n - i] = tab[n - i] + 1;
      i--;
      while(i > 0)
	{
	  tab[n - i] = tab[n - i - 1] + 1;
	  i--;
	}
    }
  write(1, tab, n);
  write(1, "\n", 1);
}

int main()
{
  int n;
  
  n = 1;
  while (n < 10)
    ft_print_combn(n++);
  return (0);
}
