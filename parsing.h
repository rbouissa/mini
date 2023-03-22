

#ifndef parsing_h
# define parsing_h

# include <readline/history.h>
# include <readline/readline.h>
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	char			*data;
	int				token;
	struct s_list	*next;
}					t_list;
char				**ft_split(char *s, char c);
int					ft_strcmp(char *s1, char *s2);
char				*ft_strjoin(char *left_str, char *buff);
t_list				*split_fuul_cmd(char **s);
char				*ft_strcpy(char *dest, char *src);
char				*ft_strdup(char *src);
char				**split_command(char *str);
void				ft_lstadd_back(t_list **lst, t_list *new);
t_list				*ft_lstnew(char *content, int t);
int					check_eroor(char *str);
void				ft_write(char *s);
int					check_string(char *str);
size_t				ft_strlen(char *s);
t_list				*ft_split_them(char *str);
#endif