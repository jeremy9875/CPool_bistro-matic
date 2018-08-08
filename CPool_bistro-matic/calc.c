/*
** cal.c for calc in /home/jeremy.el-kaim/CPool_bistro-matic
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Thu Oct 27 09:07:43 2016 jeremy elkaim
** Last update Sun Nov  6 10:12:03 2016 jeremy elkaim
*/

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	calc_add(char *str)
{
  int	i;
  int	result;
  int	t;
  int	retenu;

  i = 0;
  t = 0;
  while (str[i] != 43)
    {
      i = i + 1;
    }
  retenu = *str;
  result = (str[i - 1]) + (str[i + 1] - 48);
  my_putchar(result);
  my_putchar('\n');
  return (0);
}

int     main(int argc, int **argv)
{
  calc_add(argv[1]);
  return (0);
}
