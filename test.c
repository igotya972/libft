#include <stdio.h>
#include "libft.h"

static int    strim(char const *s1, char const *set)
{
    int        i;
    int        j;

    i = 0;
    j = 0;
    while (s1[i] != '\0' && set[j] != '\0')
    {
        if (s1[i] == set[j])
        {
            i++;
            j = 0;
        }
        else
            j++;
    }
    return (i);
}

static int    etrim(char const *s1, char const *set)
{
    int        i;
    int        j;

    i = ft_strlen(s1);
    j = ft_strlen(set);
    while (i >= 0 && j >= 0)
    {
        if (s1[i] == set[j])
        {
            i--;
            j = ft_strlen(set);
        }
        else
        j--;
    }
    return (i);
}
char    *ft_strtrim(char const *s1, char const *set)
{
	char    *y;
    int        i;
    int        j;
    int        k;

    i = strim (s1, set);
    j = etrim (s1, set);
    k = 0;
    if (i > j || ft_strlen(s1) == 0)
    {
        y = malloc(sizeof(y) * (1));
        *y = '\0';
        return (y);
    }
    else
    y = malloc(sizeof(char) * (j - i + 2));
    if (!y)
        return (NULL);
    while (i <= j)
        y[k++] = s1[i++];
    y[k] = '\0';
    return (y);
}

int main()
{
	printf("%s", ft_strtrim("bonjour je mappelle oceane", "bone"));
}
