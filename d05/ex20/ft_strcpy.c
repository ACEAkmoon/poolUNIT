char	*ft_strcpy(char *dest, char *src)
{
	int	symbol;

	symbol = 0;
	while (src[symbol])
	{
		dest[symbol] = src[symbol];
		symbol++;
	}
	dest[symbol] = src[symbol];
	return (dest);
}