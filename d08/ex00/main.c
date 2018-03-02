/*#include <stdio.h>

void	ft_split_whitespaces(char *str);

int	main()
{
	int i;

	i = 0;
	ft_split_whitespaces(" unit factor pool bocal ");
	//printf("%d\n", ft_split_whitespaces(str[i]));
	//printf("%d\n", ft_split_whitespaces());
	//printf("%d\n", ft_split_whitespaces());
	//printf("%d\n", ft_split_whitespaces());
	//printf("%d\n", ft_split_whitespaces());
	return 0;
}*/

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int main(void)
{	
	char **ii;
	int i = 0;
	ii = ft_split_whitespaces(" max allex allanga afdadfb\tafdgdfb ghnrhr morti jhon sonni\nzzzz ddd     hh+scec");
	while (ii[i] != NULL)
	{
		printf("%s\n", ii[i]);
		i += 1;
	}

	return 0;
}

/*#include <stdlib.h>

int	calc_text(char *str, int *size_text)
{
	int	i;
	int	text;

	i = 0;
	text = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
		text++;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
		{
			size_text[text]++;
			i++;
		}
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
		i++;
	}
	return (text);
}

char	**ft_split_whitespaces(char *str)
{
	int	i;
	int	is_text;
	int	size[50];
	char	*tmp;
	char	**string;

	i = 0;
	//string = 0;
	is_text = calc_text(str, size);
	string = (char**)malloc(sizeof(**string) * (is_text + 1));
	while (i < is_text)
	{
		string[i] = (char*)malloc(sizeof(*tmp) * (size[i] + 1));
		i++;
	}
	return (0);
}*/