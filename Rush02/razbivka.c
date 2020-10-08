#include <stdlib.h>
/* for BSQ insert variable separator */
int		ft_issep(char c)
{
	return (c == '\n');
}
/* count lines to malloc memory fot it */
int		ft_count_lines(char *str)
{
	int	nb_line;
	nb_line = 0;
	while (*str)
	{
		while (*str && ft_isspace(*str) == 1)
			str++;
		if (*str && ft_isspace(*str) != 1)
		{
			nb_line++;
			while (*str && ft_isspace(*str) != 1)
				str++;
		}
	}
	return (nb_line);
}

/* memory for line */
char	*ft_line_to_array(char *str)
{ 
	char *line;
	int	i;

	i = 0;
	while (str[i] && !ft_issep(str[i]))
		i++;
	line = (char *)malloc(sizeof(*line) * (i + 1));
	if (line = NULL)
		ft_putstr("Malloc Error !!!!!!");
		return (NULL);  
	i = 0;
	while (str[i] && !ft_issep(line[i]))
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	**ft_split(char *str)
{
	/* memory for 2d array */
	char **lines = (char**)malloc(sizeof(char*) * (ft_count_lines(str) + 1));
	int i = 0;
	while (*str)
	{
		while (*str && ft_issep(*str))
			str++;
		if (*str && !ft_issep(*str))
		{
			/* save line to array */
			lines[i] = ft_line_to_array(str);
			i++;
			// move to the next line
			while (*str && !ft_issep(*str))
				str++;
		}
	}
	lines[i] = NULL;
	return (lines);
}

// #include <stdio.h>

// int		main(int ac, char **av)
// {
// 	char **arr;

// 	char *phrase = "   Hello, \n man";
// 	arr = ft_split(phrase);
// 	printf("%s\n", arr[0]);
// 	printf("%s\n", arr[1]);
// 	printf("%s\n", arr[2]);
// 	printf("%s\n", arr[3]);
// }