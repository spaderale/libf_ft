/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:22:58 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/27 21:45:44 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Contar as palavras - ou tokens in str (blocos separados pelo delimitador c)
//alocar memoria para o array de strings - copiar o token na posição correta
//finalizar com null

static int	free_all(char **word_value, int position, size_t buffer)
{
	int	i;

	i = 0;
	word_value[position] = malloc(buffer);
	if (!word_value[position])
	{
		while (i < position)
		{
			free(word_value[i]);
			i++;
		}
		free(word_value);
		return (1);
	}
	return (0);
}

static int	fill_word(char **word_value, char const *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (free_all(word_value, i, len + 1))
				return (1);
			ft_strlcpy(word_value[i], s - len, len + 1);
		}
		i++;
	}
	return (0);
}

static int	count_words(char const *s, char c)
{
	size_t		words;
	int			inside_word;

	words = 0;
	while (*s)
	{
		inside_word = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			if (!inside_word)
			{
				words++;
				inside_word = 1;
			}
			s++;
		}
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**word_value;

	if (!s)
		return (NULL);
	words = 0;
	words = count_words(s, c);
	word_value = malloc((words + 1) * sizeof(char *));
	if (!word_value)
		return (NULL);
	word_value[words] = NULL;
	if (fill_word(word_value, s, c))
		return (NULL);
	return (word_value);
}

/*int   main(void)
{
        char    frase[] = "Hello world, this, is a, test!";
        char    **result;
        int             i;

        result = ft_split(frase, ',');
        if (!result)
                return (1);
        i = 0;
        while (result[i] != NULL)
        {
                printf("word %d: %s\n", i + 1, result[i]);
                free (result[i]);
                i++;
        }
        free (result);
        return (0);
}*/
