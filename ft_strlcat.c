size_t	strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;

	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j] && (j < size - i - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	j = 0;
	while (src[j])
		j++;
	return (i + j);
}