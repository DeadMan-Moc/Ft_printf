/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 14:55:18 by amokgohl          #+#    #+#             */
/*   Updated: 2018/08/26 16:13:23 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <wchar.h>
# include <inttypes.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

void			ft_putnstr(char *s, int n);
void			ft_putnsstr(char *tab, int *t, int *d);
void			ft_flags_2(int *t, int *d, char *s, char *tab);

long int		ft_length_lu(unsigned long nb);
int				ft_printf(const char *format, ...);
int				ft_widelen(char *tab, int *t);
int				ft_solution(int *d, char *s, char **tab);
int				ft_intsol(int *d, char *s, int *t, char *tab);
int				ft_testsimp(char *s, int *i, int *t, char **tab);
int				ft_alltest(char *s, int *i);
int				ft_testpass(char *s, int i);
int				ft_testfinal(int *test, char *s, int *t);
int				ft_inttest(int *d, char *s, int *t, char *tab);
int				ft_flags_1(int *t, int *d, char *s, char *tab);
int				ft_flags(int *d, char *s, int i);
int				ft_checkall(char *s, int *i);
int				ft_nblen_base(long long n, int base);
int				ft_unblen_base(uintmax_t n, int base);
int				ft_testint(char *s, int *i, int *t, int *d);

char			*stup(char *str);
char			*ft_itoalong(long int n);
char			*ft_itoabase(intmax_t nb, int base);
char			*ft_itoalong_u(uintmax_t n);
char			*ft_itohex(uintmax_t nbr);
char			*ft_itoshort(unsigned short int nb, int base);
char			*ft_itoaoct(uintmax_t nbr);
char			*ft_bintoa(char *tab);
char			**ft_check(char *s, va_list ap);
char			**ft_tests(char *s, int *i, va_list ap, char **tab);
char			*ft_testcheck(char *s, int i, va_list ap);
char			*ft_checksimp(char *s, va_list ap, int i);
char			*ft_stocksimps(char *tab, va_list ap);
char			*ft_long_int(char *s, va_list ap, int i);
char			*ft_convh(char *s, va_list ap, int i);
char			*ft_convj(char *s, va_list ap, int i);
char			*ft_sizeint(char *s, va_list ap, int i);
char			*ft_longlong(char *s, va_list ap, int i);
char			*ft_convhh(char *s, va_list ap, int i);
char			*ft_all(va_list ap);

size_t			ft_strlen(const char *s);

int				ft_atoi(const char *str);
int				ft_atoibase(const char *str, int base);
int				ft_nblen(int nb);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_toupper(int c);

char			*ft_itoa(int n);
char			*ft_strndup(const char *s1, size_t n);
char			*ft_strnew(size_t size);
char			*ft_itoabase(intmax_t nb, int base);
char			*ft_strchr(const char *s, int c);
char			*ft_strcjoin(char const *s, char const c);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strrev(char *str);
char			*ft_strsub(char const *s, size_t start, size_t len);
char			*ft_strncpy(char *dst, const char *src, size_t n);

void			ft_putchar(char c);
void			ft_putnstr(char *s, int n);
void			ft_putstr(char const *s);
void			ft_strclr(char *s);

#endif
