#include "parsing.h"
#include <readline/history.h>
#include <readline/readline.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int	count_p(char *str)
// {
// 	int	i;
// 	int	count;

// 	count = 0;
// 	while (str[i])
// 	{
// 		if (str[i] == '<' || str[i] == '>' || str[i] == '|')
// 			count++;
// 		i++;
// 	}
// 	return (count);
// }
// char	**split_command(char *str)
// {
// 	int		i;
// 	int		j;
// 	int		quotes;
// 	char	**s;
// 	char	*k;

// 	i = 0;
// 	j = 0;
// 	quotes = 0;
// 	if (str == NULL)
// 		exit(1);
// 	while (str[i])
// 	{
// 		//for the string
// 		if (str[i] == 34 || str[i] == 39)
// 		{
// 			quotes = str[i];
// 			i++;
// 			while (str[i] && (str[i] != quotes))
// 				i++;
// 		}
// 		//split add in every space a '19'
// 		if (str[i] == ' ')
// 		{
// 			str[i] = 19;
// 			i++;
// 		}
// 		else
// 			i++;
// 	}
// 	k = malloc(ft_strlen(str) + count_p(str) * 2 + 1);
// 	i = 0;
// 	quotes = 0;
// 	while (str[i])
// 	{
// 		//for quotes
// 		if (str[i] && (str[i] == 34 || str[i] == 39))
// 		{
// 			quotes = str[i];
// 			k[j] = str[i];
// 			j++;
// 			i++;
// 			while (str[i] && (str[i] != quotes))
// 			{
// 				k[j] = str[i];
// 				j++;
// 				i++;
// 			}
//             k[j] = str[i];
// 				j++;
// 				i++;
// 		}
// 		//for the front
// 		if (str[i + 1] && (str[i + 1] == '<' || str[i + 1] == '>' || str[i
// 				+ 1] == '|'))
// 		{
// 			k[j] = str[i];
// 			j++;
// 			k[j] = 19;
// 			j++;
// 			i++;
// 		}
// 		//for the last
// 		if (str[i] && (str[i] == '<' || str[i] == '>' || str[i] == '|'))
// 		{
// 			k[j] = str[i];
// 			j++;
// 			k[j] = 19;
// 			i++;
// 			j++;
// 		}
// 		//if the pipe or rederiction is near to each other
// 		if (str[i] && !(str[i] == '<' || str[i] == '>' || str[i] == '|'
// 				|| str[i] == 34 || str[i] == 39))
// 		{
// 			k[j] = str[i];
// 			j++;
// 			i++;
// 		}
// 	}
// 	k[j] = '\0';
// 	s = ft_split(k, 19);
// 	free(k);
// 	return (s);
// }

int	main(int argc, char **argv, char **env)
{
	char *str;
	char **s;
	t_list *cmd;
	int i;
	int j;
	int k;

	i = 0;

	while (1)
	{
		str = readline("minishell>");
		//add expanding variables
		j = check_eroor(str);
		 k = check_string(str);
		// s = split_command(str);
		if (j&&k)
		{
			cmd = ft_split_them(str);
			// if (s[0])
			// 	cmd = split_fuul_cmd(s);
			// i = 0;
			// if (j && k)
			// {
			while (cmd)
			{
				printf(">>>%i->>>>          ", cmd->token);
				printf("%s\n", cmd->data);
				i++;
				cmd = cmd->next;
			}
		}
		//}
		//add_history(str);
		free(str);
	}
}