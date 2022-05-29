/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelad <aabdelad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:40:48 by aabdelad          #+#    #+#             */
/*   Updated: 2022/03/09 20:44:48 by aabdelad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>

int		ft_atoi(const char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	*ft_calloc(int nelem, int elsize);
int		ft_strlen(const char *s);
void	ft_putstr(char *s);
void	ft_bzero(void *s, size_t n);

#endif
