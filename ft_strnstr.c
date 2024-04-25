#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
  size_t	i;
  size_t	j;

  i = 0;
  if (!*little)
    return ((char *)big);
  while (big[i] && i < len)
  {
    j = 0;
    while (big[i + j] == little[j] && little[j] && i + j < len)
      j++;
    if (!little[j])
      return ((char *)&big[i]);
    i++;
  }
  return (NULL);
}
