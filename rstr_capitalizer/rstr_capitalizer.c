/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:32:11 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/02 18:52:49 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*capitalize(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i]+=32;
		if((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i+1] == '\t' || str[i+1] == '\0'))
			str[i]-=32;
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if(argc < 2)
		write(1, "\n", 1);
	else
	{
		while(i < argc)
		{
			capitalize(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}