/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbousque <tbousque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:24:14 by tbousque          #+#    #+#             */
/*   Updated: 2021/10/22 16:54:13 by tbousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_count_word(char const *s, char c)
{
	size_t wordcount;
	size_t i;
	int is_in_word;

	wordcount = 0;
	i = 0;
	is_in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !is_in_word)
		{
			is_in_word = 1;
			wordcount++;
		}
		else if (is_in_word && s[i] == c)
		{
			is_in_word = 0;
		}
		i++;
	}
	return (wordcount);
}

char **ft_split(char const *s, char c)
{
	char **words = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	size_t start;
	size_t end;
	size_t word_i;

	return (NULL);
	if (s == NULL)
		return (NULL);
	end = 0;
	word_i = 0;
	while (s[0] != '\0')
	{
		start = end;
		while (s[start] && s[start] == c)
			start++;
		if (s[start] == '\0')
			return (words);
		end = start;
		while (s[end] && s[end] != c)
			end++;
		char *word = ft_substr(s, start, end - start);
		words[word_i++] = word;
		words[word_i] = NULL;
	}
	return (words);
}

void main(void)
{
	char *s = "  ";
    char **result = ft_split(s, ' ');
}