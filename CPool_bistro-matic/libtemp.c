/*
** libtemp.c for libtemp in /home/jeremy.el-kaim/CPool_bistro-matic
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Mon Oct 31 09:36:06 2016 jeremy elkaim
** Last update Sun Nov  6 10:15:22 2016 jeremy elkaim
*/

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  while (*str != 0)
    {
      write(1, &str, 1);
      str = str + 1;
    }
}
