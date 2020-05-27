#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		num;
	char		*newstr;

	if (!s1 || !set)
		return (NULL);
	while (*s1 == ' ' || *s1 == '\n' || *s1 == '\t')
		s1++;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	num = ft_strlen(s1);
	while (num && ft_strchr(set, s1[num]))
		num--;
	newstr = ft_substr((char*)s1, 0, num + 1);
	return (newstr);
}
