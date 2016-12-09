#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	while(n > 0)
	{
		*((unsigned char *)dst + n - 1) = *((unsigned char *)src + n - 1);
		n--;
	}
	return (dst);
}
