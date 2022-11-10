#include <string.h>

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	len;
	int	in;

	i = 0;
	in = 0;
	len = 0;

	while (src[in])
		in++;
	while (dst[len] && len < dstsize)
		len++;
	i = len;
	while (src[len - i] && len < dstsize)
	{
		dst[len] = src[len -i];
		len++;
	}
	if (i < dstsize)
		dst[len] = '\0';
	return (i + in);
}
