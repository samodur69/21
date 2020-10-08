#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#define BUFF 30000

void    ft_putstr(char *str);
char	*ft_strdup(char *src);

int     main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    char stroki[][100];

    char *str = "Some words\nwith new\nlines";
    while (*str)
    {
        stroki[i][100] = ft_split(str, "\n");
        i++
    }



    return (0);
}





char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	dest = malloc(sizeof(*dest) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}