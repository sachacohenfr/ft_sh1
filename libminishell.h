/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libminishell.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scohen <scohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 12:59:34 by scohen            #+#    #+#             */
/*   Updated: 2013/12/29 17:41:35 by scohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBMINISHELL_H
# define LIBMINISHELL_H
# define BUF_SIZE 1000
# include <unistd.h>

int		ft_shell(char **env);
int		ft_exec_function(char *buf, char **env);
int		ft_exec_builtin(char *command, char **env);
char	*ft_copy_path(char **env);
char	**ft_strsplit(char const *s, char c);
int		ft_strlen(char *str);
char	*ft_strnew(size_t size);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_putslash(char *path);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strjoin(const char *s1, const char *s2);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_putendl(char *str);
#endif
