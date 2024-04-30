/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:37:38 by tsolanki          #+#    #+#             */
/*   Updated: 2024/04/30 19:19:23 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>
#include <ctype.h>

void	test_isalpha(void)
{
	printf("=========== TESTING IS ALPHA ============\n\n");
	char	c;

	printf("char\t:\tReal\t:\tFT\n");
	c = 'a';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = 'A';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = 'z';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = 'Z';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = 's';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = 'F';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = ' ';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = '3';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = ',';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = 0;
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = '`';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = '{';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = '@';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = '[';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
}

void	test_isdigit(void)
{
	printf("\n\n=========== TESTING IS DIGIT ============\n\n");
	char	c;

	printf("char\t:\tReal\t:\tFT\n");
	c = '0';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isdigit(c), (ft_isdigit(c) != 0) ? 1 : 0);
	c = '9';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isdigit(c), (ft_isdigit(c) != 0) ? 1 : 0);
	c = '6';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isdigit(c), (ft_isdigit(c) != 0) ? 1 : 0);
	c = 'f';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isdigit(c), (ft_isdigit(c) != 0) ? 1 : 0);
	c = '\\';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isdigit(c), (ft_isdigit(c) != 0) ? 1 : 0);
	c = ':';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isdigit(c), (ft_isdigit(c) != 0) ? 1 : 0);
	c = -1;
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isdigit(c), (ft_isdigit(c) != 0) ? 1 : 0);
}

void	test_isalnum(void)
{
	printf("\n\n=========== TESTING IS ALPHANUMERIC ============\n\n");
	char	c;

	printf("char\t:\tReal\t:\tFT\n");
	c = 'a';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
	c = 'z';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
	c = 'A';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
	c = 'Z';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
	c = '0';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
	c = '9';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
	c = 'm';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
	c = 'L';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
	c = '6';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
	c = '@';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
	c = '[';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
	c = '`';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
	c = '{';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
	c = '\\';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
	c = ':';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
}

void	test_isascii(void)
{
	printf("\n\n=========== TESTING IS ASCII ============\n\n");
	char	c;

	printf("char\t:\tReal\t:\tFT\n");
	c = 0;
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isascii(c), (ft_isascii(c) != 0) ? 1 : 0);
	c = 127;
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isascii(c), (ft_isascii(c) != 0) ? 1 : 0);
	c = 'a';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isascii(c), (ft_isascii(c) != 0) ? 1 : 0);
	c = -1;
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isascii(c), (ft_isascii(c) != 0) ? 1 : 0);
	c = -30;
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isascii(c), (ft_isascii(c) != 0) ? 1 : 0);
}

void	test_isprint(void)
{
	printf("\n\n=========== TESTING IS PRINT ============\n\n");
	char	c;

	printf("char\t:\tReal\t:\tFT\n");
	c = ' ';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isprint(c), (ft_isprint(c) != 0) ? 1 : 0);
	c = '~';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isprint(c), (ft_isprint(c) != 0) ? 1 : 0);
	c = 'a';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isprint(c), (ft_isprint(c) != 0) ? 1 : 0);
	c = 43;
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isprint(c), (ft_isprint(c) != 0) ? 1 : 0);
	c = 31;
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isprint(c), (ft_isprint(c) != 0) ? 1 : 0);
	c = 127;
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isprint(c), (ft_isprint(c) != 0) ? 1 : 0);
	c = -1;
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isprint(c), (ft_isprint(c) != 0) ? 1 : 0);
}

void	test_strlen(void)
{
	printf("\n\n=========== TESTING STRLEN ============\n\n");

	if (strlen("Hello") == ft_strlen("Hello"))
		printf("OK: expected %zu, got %zu. [test string \"Hello\".]\n", strlen("Hello"), ft_strlen("Hello"));
	else
		printf("Try again: expected %zu, got %zu [test string \" \".]\n", strlen("Hello"), ft_strlen("Hello"));
	
	if (strlen(" ") == ft_strlen(" "))
		printf("OK: expected %zu, got %zu. [test string \" \".]\n", strlen(" "), ft_strlen(" "));
	else
		printf("Try again: expected %zu, got %zu [test string \" \".]\n", strlen(" "), ft_strlen(" "));
	
	
	if (strlen("") == ft_strlen(""))
		printf("OK: expected %zu, got %zu. [test string \"\".]\n", strlen(""), ft_strlen(""));
	else
		printf("Try again: expected %zu, got %zu [test string \"\".]\n", strlen(""), ft_strlen(""));
	
	if (strlen("123456789123456789") == ft_strlen("123456789123456789"))
		printf("OK: expected %zu, got %zu. [test string \"123456789123456789\".]\n", strlen("123456789123456789"), ft_strlen("123456789123456789"));
	else
		printf("Try again: expected %zu, got %zu [test string \"123456789123456789\".]\n", strlen("123456789123456789"), ft_strlen("123456789123456789"));
	
	if (strlen("\0") == ft_strlen("\0"))
		printf("OK: expected %zu, got %zu. [test string \"\\0\".]\n", strlen("\0"), ft_strlen("\0"));
	else
		printf("Try again: expected %zu, got %zu [test string \"\\0\".]\n", strlen("\0"), ft_strlen("\0"));	
}



void	test_memset(void)
{
	printf("\n\n=========== TESTING MEMSET ============\n\n");

	char c[20] = "Hello World";
	char d[20] = "Hello World";
/*	printf("%s\n", c);
	printf("%s\n", ft_memset(c, 'o', 2));
	printf("%s\n", memset(c, 'o', 3));*/


	printf("Real\t\t:\tFT\n");
	printf("%s\t:\t%s\n", memset(c, 'o', 4), ft_memset(d, 'o', 4));
	printf("%s\t:\t%s\n", memset(c, 'o', 15), ft_memset(d, 'o', 15));
	printf("%s\t:\t%s\n", memset(c, '~', 5), ft_memset(d, '~', 5));
}


void	test_bzero(void)
{
	printf("\n\n=========== TESTING BZERO ============\n\n");

	char c[20] = "1233344455";
	char d[20] = "Hello World";
	int i = 0;

	printf("Original: %s\n", c);
	bzero(c, 10);
	printf("Real: ");
	while (i < 10)
	{
		printf("%d", c[i]);
		i++;
	}
	printf("\n");
	printf("Ft: ");
	i = 0;
	ft_bzero(d, 10);
	while (i < 10)
	{
		printf("%d", d[i]);
		i++;
	}
}


void	test_memcpy(void)
{
	printf("\n\n=========== TESTING MEMCPY ============\n\n");

	char src[] = {1, 2, 3, 4, 5};
	char dest[8];
	char dest1[8];
	char s[] = "Hello";
	char d1[20];
	char d2[20];

	int i = 0;

	printf("Original:\tReal\t:\tFt\n");
	while (i < 5)
	{
		printf("%d", src[i]);
		i++;
	}
	printf("\t:\t");
	i = 0;
	memcpy(dest, src, 8);
	while (i < 2)
	{
		printf("%d", dest[i]);
		i++;
	}
	printf("\t:\t");
	i = 0;
	ft_memcpy(dest1, src, 8);
	while (i < 2)
	{
		printf("%d", dest1[i]);
		i++;
	}
	printf("\n\n");
	printf("%s\t:\t", s);
	printf("%s\t:\t%s\n", memcpy(d1, s, 3), ft_memcpy(d2, s, 3));

}


void	test_memmove(void)
{
	printf("\n\n=========== TESTING MEMMOVE ============\n\n");

	char	s[20] = "12345-67890";
	char	d[20] = "12345-67890";
	printf("Original\t:\tReal\t:\tFt\n");
	printf("%s\t:\t", s);
	printf("%s\t:\t%s", memmove(s + 4, s + 1, 6),ft_memmove(d + 4, d + 1, 6));
}

void	test_strlcpy(void)
{
	printf("\n\n=========== TESTING STRLCPY ============\n\n");

	char	dstor[20] = "Hello World!";
	char	dstft[20] = "Hello World!";
 
	if ((strlcpy(dstor, "123456789", 5) == ft_strlcpy(dstft, "123456789", 5)) && !strcmp(dstor, dstft))
		printf("OK: expected \"%s\", got \"%s\".\n", dstor, dstft);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", dstor, dstft);

	if ((strlcpy(dstor, "", 5) == ft_strlcpy(dstft, "", 5)) && !strcmp(dstor, dstft))
		printf("OK: expected \"%s\", got \"%s\".\n", dstor, dstft);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", dstor, dstft);

	if ((strlcpy(dstor, "Help", 4) == ft_strlcpy(dstft, "Help", 4)) && !strcmp(dstor, dstft))
		printf("OK: expected \"%s\", got \"%s\".\n", dstor, dstft);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", dstor, dstft);
}


void	test_strlcat(void)
{
	printf("\n\n=========== TESTING STRLCAT ============\n\n");

	char	catdstor[20] = "Hello, ";
	char	catdstft[20] = "Hello, ";

	printf("The length for Real: %zu\nThe length for Ft: %zu\n", strlcat(catdstor, "World!", sizeof(catdstor)), ft_strlcat(catdstft, "World!", sizeof(catdstft)));

	if ((strlcat(catdstor, "Hey", 5) == ft_strlcat(catdstft, "Hey", 5)) && !strcmp(catdstor, catdstft))
		printf("OK: expected \"%s\", got \"%s\".\n", catdstor, catdstft);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", catdstor, catdstft);

	if ((strlcat(catdstor, "CoucouCommentVa", 15) == ft_strlcat(catdstft, "CoucouCommentVa", 15)) && !strcmp(catdstor, catdstft))
		printf("OK: expected \"%s\", got \"%s\".\n", catdstor, catdstft);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", catdstor, catdstft);
	
	if ((strlcat(catdstor, "xx", 20) == ft_strlcat(catdstft, "xx", 20)) && !strcmp(catdstor, catdstft))
		printf("OK: expected \"%s\", got \"%s\".\n", catdstor, catdstft);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", catdstor, catdstft);
	
	if ((strlcat(catdstor, "o", 3) == ft_strlcat(catdstft, "o", 3)) && !strcmp(catdstor, catdstft))
		printf("OK: expected \"%s\", got \"%s\".\n", catdstor, catdstft);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", catdstor, catdstft);
		
}

void	test_strchr(void)
{
	printf("\n\n=========== TESTING STRCHR ============\n\n");
	char	s[] = "tiya-helena-kavini";
	char	d[] = "tiya-helena-kavini";
	printf("Original\t:\tReal\t:\tFt\n");
	printf("%s\t:", s);
	printf("%s\t:%s", strchr(s, 'e'),ft_strchr(d,'e'));
}
	
void	test_strrchr(void)
{
	printf("\n\n=========== TESTING STRRCHR ============\n\n");
	char	s[] = "tiya-helena-kavini";
	char	d[] = "tiya-helena-kavini";
	printf("Original\t:\tReal\t:\tFt\n");
	printf("%s\t:", s);
	printf("%s\t:%s", strrchr(s, 'e'),ft_strrchr(d,'e'));
}

void	test_strncmp(void)
{
	printf("\n\n=========== TESTING STRNCMP ============\n\n");

//	char	s1[50] = "Hello there are 75 days left.";
//	char	s2[50] = "Hello there are 75 days left.";
	char	s1[20] = "\x12\xff\x65\x12\xbd\xde\xad";
	char	s2[20] = "\x12\x02";

	if (strncmp(s1, s2, 20) == ft_strncmp(s1, s2, 20))
		printf("OK: expected %d, got %d.\n", strncmp(s1, s2, 20), ft_strncmp(s1, s2, 20));
	else
		printf("Try again: expected %d, got %d.\n", strncmp(s1, s2, 20), ft_strncmp(s1, s2, 20));

	if (strncmp(s1, s2, 0) == ft_strncmp(s1, s2, 0))
		printf("OK: expected %d, got %d.\n", strncmp(s1, s2, 0), ft_strncmp(s1, s2, 0));
	else
		printf("Try again: expected %d, got %d.\n", strncmp(s1, s2, 0), ft_strncmp(s1, s2, 0));

	s2[14] = ' ';
	if (strncmp(s1, s2, 20) == ft_strncmp(s1, s2, 20))
		printf("OK: expected %d, got %d.\n", strncmp(s1, s2, 20), ft_strncmp(s1, s2, 20));
	else
		printf("Try again: expected %d, got %d.\n", strncmp(s1, s2, 20), ft_strncmp(s1, s2, 20));

	s2[14] = '~';
	if (strncmp(s1, s2, 20) == ft_strncmp(s1, s2, 20))
		printf("OK: expected %d, got %d.\n", strncmp(s1, s2, 20), ft_strncmp(s1, s2, 20));
	else
		printf("Try again: expected %d, got %d.\n", strncmp(s1, s2, 20), ft_strncmp(s1, s2, 20));

	if (strncmp(s1, s2, 9) == ft_strncmp(s1, s2, 9))
		printf("OK: expected %d, got %d.\n", strncmp(s1, s2, 9), ft_strncmp(s1, s2, 9));
	else
		printf("Try again: expected %d, got %d.\n", strncmp(s1, s2, 9), ft_strncmp(s1, s2, 9));

	strcpy(s2, "");
	if (strncmp(s1, s2, 20) == ft_strncmp(s1, s2, 20))
		printf("OK: expected %d, got %d.\n", strncmp(s1, s2, 20), ft_strncmp(s1, s2, 20));
	else
		printf("Try again: expected %d, got %d.\n", strncmp(s1, s2, 20), ft_strncmp(s1, s2, 20));
}

void	test_toupper(void)
{
	printf("\n\n=========== TESTING TO UPPER ============\n\n");
	char	c;

	printf("char\t:\tReal\t:\tFT\n");
	c = 'a';
	printf("\'%c\'\t:\t\'%c\'\t:\t\'%c\'\n", c, toupper(c), ft_toupper(c));
	c = 'w';
	printf("\'%c\'\t:\t\'%c\'\t:\t\'%c\'\n", c, toupper(c), ft_toupper(c));
	c = 'A';
	printf("\'%c\'\t:\t\'%c\'\t:\t\'%c\'\n", c, toupper(c), ft_toupper(c));
	c = ' ';
	printf("\'%c\'\t:\t\'%c\'\t:\t\'%c\'\n", c, toupper(c), ft_toupper(c));
	c = '3';
	printf("\'%c\'\t:\t\'%c\'\t:\t\'%c\'\n", c, toupper(c), ft_toupper(c));
	c = '~';
	printf("\'%c\'\t:\t\'%c\'\t:\t\'%c\'\n", c, toupper(c), ft_toupper(c));
	c = '*';
	printf("\'%c\'\t:\t\'%c\'\t:\t\'%c\'\n", c, toupper(c), ft_toupper(c));
}

void	test_tolower(void)
{
	printf("\n\n=========== TESTING TO LOWER ============\n\n");
	char	c;

	printf("char\t:\tReal\t:\tFT\n");
	c = 'A';
	printf("\'%c\'\t:\t\'%c\'\t:\t\'%c\'\n", c, tolower(c), ft_tolower(c));
	c = 'W';
	printf("\'%c\'\t:\t\'%c\'\t:\t\'%c\'\n", c, tolower(c), ft_tolower(c));
	c = 'a';
	printf("\'%c\'\t:\t\'%c\'\t:\t\'%c\'\n", c, tolower(c), ft_tolower(c));
	c = ' ';
	printf("\'%c\'\t:\t\'%c\'\t:\t\'%c\'\n", c, tolower(c), ft_tolower(c));
	c = '3';
	printf("\'%c\'\t:\t\'%c\'\t:\t\'%c\'\n", c, tolower(c), ft_tolower(c));
	c = '~';
	printf("\'%c\'\t:\t\'%c\'\t:\t\'%c\'\n", c, tolower(c), ft_tolower(c));
	c = '*';
	printf("\'%c\'\t:\t\'%c\'\t:\t\'%c\'\n", c, tolower(c), ft_tolower(c));
}

void	test_memchr(void)
{
	printf("\n\n=========== TESTING MEMCHR ==============\n\n");
//	char	c;
	char	s[] = "tiya-helena-kavini";
	char	d[] = "tiya-helena-kavini";
	printf("Original\t:\tReal\t:\tFt\n");
	printf("%s\t:", s);
	printf("%s\t:%s", memchr(s, 'a',11),ft_memchr(d,'a',11));
}

void	test_memcmp(void)
{
	printf("\n\n=========== TESTING MEMCMP ============\n\n");

//	char	s1[50] = "Hello there are 75 days left.";
//	char	s2[50] = "Hello there are 75 days left.";
	char	s1[20] = "\x12\xff\x65\x12\xbd\xde\xad";
	char	s2[20] = "\x12\x02";

	if (memcmp(s1, s2, 20) == ft_memcmp(s1, s2, 20))
		printf("OK: expected %d, got %d.\n", memcmp(s1, s2, 20), ft_memcmp(s1, s2, 20));
	else
		printf("Try again: expected %d, got %d.\n", memcmp(s1, s2, 20), ft_memcmp(s1, s2, 20));

	if (memcmp(s1, s2, 0) == ft_memcmp(s1, s2, 0))
		printf("OK: expected %d, got %d.\n", memcmp(s1, s2, 0), ft_memcmp(s1, s2, 0));
	else
		printf("Try again: expected %d, got %d.\n", memcmp(s1, s2, 0), ft_memcmp(s1, s2, 0));

	s2[14] = ' ';
	if (memcmp(s1, s2, 20) == ft_memcmp(s1, s2, 20))
		printf("OK: expected %d, got %d.\n", memcmp(s1, s2, 20), ft_memcmp(s1, s2, 20));
	else
		printf("Try again: expected %d, got %d.\n", memcmp(s1, s2, 20), ft_memcmp(s1, s2, 20));

	s2[14] = '~';
	if (memcmp(s1, s2, 20) == ft_memcmp(s1, s2, 20))
		printf("OK: expected %d, got %d.\n", memcmp(s1, s2, 20), ft_memcmp(s1, s2, 20));
	else
		printf("Try again: expected %d, got %d.\n", memcmp(s1, s2, 20), ft_memcmp(s1, s2, 20));

	if (memcmp(s1, s2, 9) == ft_memcmp(s1, s2, 9))
		printf("OK: expected %d, got %d.\n", memcmp(s1, s2, 9), ft_memcmp(s1, s2, 9));
	else
		printf("Try again: expected %d, got %d.\n", memcmp(s1, s2, 9), ft_memcmp(s1, s2, 9));

	strcpy(s2, "");
	if (memcmp(s1, s2, 20) == ft_memcmp(s1, s2, 20))
		printf("OK: expected %d, got %d.\n", memcmp(s1, s2, 20), ft_memcmp(s1, s2, 20));
	else
		printf("Try again: expected %d, got %d.\n", memcmp(s1, s2, 20), ft_memcmp(s1, s2, 20));
}


void	test_strnstr(void)
{

	printf("\n\n=========== TESTING STRNSTR ==============\n\n");

	char	haystack[25] = "MZIRIBMZIRIBMZE123";
	char	needle[25] = "MZIRIBMZE";

	if (strnstr(haystack, needle, strlen(needle)) == ft_strnstr(haystack, needle, strlen(needle)))
		printf("OK: expected \"%s\", got \"%s\".\n", strnstr(haystack, needle, strlen(needle)), ft_strnstr(haystack, needle, strlen(needle)));
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", strnstr(haystack, needle, strlen(needle)), ft_strnstr(haystack, needle, strlen(needle)));
	
}

void	test_atoi(void)
{
	printf("\n\n=========== TESTING ATOI ============\n\n");
	
	char *n = "-922337203685477580899";
 	int i1 = atoi(n);
 	int i2 = ft_atoi(n);

 	if (i1 == i2)
 		printf("OK: expected %d, got %d \n", i1,i2);
	else
		printf("error: expected %d, got %d \n", i1,i2);
	if (atoi("0") == ft_atoi("0"))
		printf("OK: expected %d, got %d.\n", atoi("0"), ft_atoi("0"));
	else
		printf("Try again: expected %d, got %d.\n", atoi("0"), ft_atoi("0"));

	if (atoi("-52") == ft_atoi("-52"))
		printf("OK: expected %d, got %d.\n", atoi("-52"), ft_atoi("-52"));
	else
		printf("Try again: expected %d, got %d.\n", atoi("-52"), ft_atoi("-52"));

	if (atoi("+200") == ft_atoi("+200"))
		printf("OK: expected %d, got %d.\n", atoi("+200"), ft_atoi("+200"));
	else
		printf("Try again: expected %d, got %d.\n", atoi("+200"), ft_atoi("+200"));

	if (atoi("   		1") == ft_atoi("   		1"))
		printf("OK: expected %d, got %d.\n", atoi("   		1"), ft_atoi("   		1"));
	else
		printf("Try again: expected %d, got %d.\n", atoi("   		1"), ft_atoi("   		1"));

	if (atoi("abc") == ft_atoi("abc"))
		printf("OK: expected %d, got %d.\n", atoi("abc"), ft_atoi("abc"));
	else
		printf("Try again: expected %d, got %d.\n", atoi("abc"), ft_atoi("abc"));

	if (atoi("  14n5") == ft_atoi("  14n5"))
		printf("OK: expected %d, got %d.\n", atoi("  14n5"), ft_atoi("  14n5"));
	else
		printf("Try again: expected %d, got %d.\n", atoi("  14n5"), ft_atoi("  14n5"));

	if (atoi("-2147483648") == ft_atoi("-2147483648"))
		printf("OK: expected %d, got %d.\n", atoi("-2147483648"), ft_atoi("-2147483648"));
	else
		printf("Try again: expected %d, got %d.\n", atoi("-2147483648"), ft_atoi("-2147483648"));

	if (atoi("2147483700") == ft_atoi("2147483700"))
		printf("OK: expected %d, got %d.\n", atoi("2147483700"), ft_atoi("2147483700"));
	else
		printf("Try again: expected %d, got %d.\n", atoi("2147483700"), ft_atoi("2147483700"));
}

void	test_calloc(void)
{

	printf("\n\n=========== TESTING CALLOC ==============\n\n");

	size_t counts = 10;
    size_t n = sizeof(int);

    printf("Using calloc:\n");
    int *arr_calloc = (int *)calloc(counts, n);
    
    if (arr_calloc == NULL) 
	{
        printf("Memory allocation failed for calloc.\n");
    }
	else printf("Total bytes of memory allocated by calloc: %zu\n", counts * n);
    free(arr_calloc);
    
    // Using ft_calloc
    printf("\nUsing ft_calloc:\n");
    int *arr_ft_calloc = (int *)ft_calloc(counts, n);
    if (arr_ft_calloc == NULL)
	{
        printf("Memory allocation failed for ft_calloc.\n");
    }
    else printf("Total bytes of memory allocated by ft_calloc: %zu\n", counts * n);
    free(arr_ft_calloc);
 //   return 0;
}

void	test_strdup(void)
{
	printf("\n\n=========== TESTING STRDUP ============\n\n");
	
	char	tocpy[22] = "Duplication in action.";
	char	*orcpy;
	char	*ftcpy;

	orcpy = strdup(tocpy);
	ftcpy = ft_strdup(tocpy);
	if (!strcmp(orcpy, ftcpy))
		printf("OK: expected \"%s\", got \"%s\".\n", orcpy, ftcpy);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", orcpy, ftcpy);
	free(orcpy);
	free(ftcpy);

	
	orcpy = strdup(tocpy + 18);
	ftcpy = ft_strdup(tocpy + 18);
	if (!strcmp(orcpy, ftcpy))
		printf("OK: expected \"%s\", got \"%s\".\n", orcpy, ftcpy);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", orcpy, ftcpy);
	free(orcpy);
	free(ftcpy);

	orcpy = strdup("Hello");
	ftcpy = ft_strdup("Hello");
	if (!strcmp(orcpy, ftcpy))
		printf("OK: expected \"%s\", got \"%s\".\n", orcpy, ftcpy);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", orcpy, ftcpy);
	free(orcpy);
	free(ftcpy);


	orcpy = strdup("");
	ftcpy = ft_strdup("");
	if (!strcmp(orcpy, ftcpy))
		printf("OK: expected \"%s\", got \"%s\".\n", orcpy, ftcpy);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", orcpy, ftcpy);
	free(orcpy);
	free(ftcpy);
}

void	test_substr(void)
{
	printf("\n\n=========== TESTING SUBSTR ============\n\n");
	
	char	srcstr[20] = "Hello World!";
	char	*substr;

	substr = ft_substr(srcstr, 6, 20);
	if (!strcmp(srcstr + 6, substr))
		printf("OK: expected \"%s\", got \"%s\".\n", srcstr + 6, substr);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", srcstr + 6, substr);
	free(substr);


	substr = ft_substr(srcstr, 0, 20);
	if (!strcmp(srcstr, substr))
		printf("OK: expected \"%s\", got \"%s\".\n", srcstr, substr);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", srcstr, substr);
	free(substr);

	substr = ft_substr(srcstr, 7, 1);
	if (substr[0] == srcstr[7] && substr[1] == '\0')
		printf("OK: expected \"%c\", got \"%s\".\n", srcstr[7], substr);
	else
		printf("Try again: expected \"%c\", got \"%s\".\n", srcstr[7], substr);
	free(substr);


	substr = ft_substr("", 7, 5);
	if (!strcmp(substr, ""))
		printf("OK: expected \"%s\", got \"%s\".\n", "", substr);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", "", substr);
	free(substr);

	substr = ft_substr("Hello", 2, 0);
	if (!strcmp(substr, ""))
		printf("OK: expected \"%s\", got \"%s\".\n", "", substr);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", "", substr);
	free(substr);

	substr = ft_substr("Hello", 15, 5);
	if (!strcmp(substr, ""))
		printf("OK: expected \"%s\", got \"%s\".\n", "", substr);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", "", substr);
	free(substr);

	substr = ft_substr("", 0, 5);
	if (!strcmp(substr, ""))
		printf("OK: expected \"%s\", got \"%s\".\n", "", substr);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", "", substr);
	free(substr);
}

void	test_strjoin(void)
{
	printf("\n\n=========== TESTING STRJOIN ============\n\n");


	char	join0[100] = "";
	char	join1[100] = "Coucou!";
	char	join2[100] = " comment va la vie?";
	char	*res0 = NULL;
	char	*res1;
	res1 = ft_strjoin(join1, join2);
	res0 = strcat(join1, join2);
	if (!strcmp(res0, res1))
		printf("OK: expected \"%s\", got \"%s\".\n", res0, res1);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", res0, res1);
	free(res1);

	strcpy(join1, "Coucou!");
	res1 = ft_strjoin(join0, join1);
	res0 = strcat(join0, join1);
	if (!strcmp(res0, res1))
		printf("OK: expected \"%s\", got \"%s\".\n", res0, res1);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", res0, res1);
	free(res1);

	strcpy(join1, " comment va la vie?");
	strcpy(join2, "");
	res1 = ft_strjoin(join1, join2);
	res0 = strcat(join1, join2);
	if (!strcmp(res0, res1))
		printf("OK: expected \"%s\", got \"%s\".\n", res0, res1);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", res0, res1);
	free(res1);
	
	strcpy(join0, "");
	strcpy(join1, "");
	res1 = ft_strjoin(join0, join1);
	res0 = strcat(join0, join1);
	if (!strcmp(res0, res1))
		printf("OK: expected \"%s\", got \"%s\".\n", res0, res1);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", res0, res1);
	free(res1);
}

void	test_strtrim(void)
{
	printf("\n\n=========== TESTING STRTRIM ============\n\n");

	char	*trimmed;

	trimmed = ft_strtrim("/......../.hello./////...", "./");
	if (!strcmp("hello", trimmed))
		printf("OK: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	free(trimmed);

	trimmed = ft_strtrim("", "abcd");
	if (!strcmp("", trimmed))
		printf("OK: expected \"%s\", got \"%s\".\n", "", trimmed);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", "", trimmed);
	free(trimmed);

	trimmed = ft_strtrim("hello", "");
	if (!strcmp("hello", trimmed))
		printf("OK: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	free(trimmed);

	trimmed = ft_strtrim("hello", "l");
	if (!strcmp("hello", trimmed))
		printf("OK: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	free(trimmed);

	trimmed = ft_strtrim("hello", "xyz");
	if (!strcmp("hello", trimmed))
		printf("OK: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	free(trimmed);

	trimmed = ft_strtrim("llllllhellolllllll", "l");
	if (!strcmp("hello", trimmed))
		printf("OK: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	free(trimmed);

	trimmed = ft_strtrim("Hello world", "od");
	if (!strcmp("Hello worl", trimmed))
		printf("OK: expected \"%s\", got \"%s\".\n", "", trimmed);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", "", trimmed);
	free(trimmed);

	trimmed = ft_strtrim("llllllhello/hilllllll", "helo");
	if (!strcmp("/hi", trimmed))
		printf("OK: expected \"%s\", got \"%s\".\n", "/hi", trimmed);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", "/hi", trimmed);
	free(trimmed);
}

void	test_split(void)
{
	printf("\n\n=========== TESTING SPLIT ============\n\n");
	char	**tab;
	unsigned int	i;
	char	s0[50] = "split         ";
	char	s1[50] = "      split       this for   me  !";
	char	s2[50] = "split       this for   me  !";
	char	s3[50] = "      split       this for   me  !       ";


	printf("---------- TEST 1 ----------\n");
	i = 0;
	tab = ft_split(s0, ' ');
	printf("Test string : \"%s\".\n\n", s0);
	if (!tab[0])
		printf("Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 2 ----------\n");
	i = 0;
	tab = ft_split(s1, ' ');
	printf("Test string : \"%s\".\n\n", s1);
	if (!tab[0])
		printf("Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 3 ----------\n");
	i = 0;
	tab = ft_split(s2, ' ');
	printf("Test string : \"%s\".\n\n", s2);
	if (!tab[0])
		printf("Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 4 ----------\n");
	i = 0;
	tab = ft_split(s3, ' ');
	printf("Test string : \"%s\".\n\n", s3);
	if (!tab[0])
		printf("Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 5 ----------\n");
	i = 0;
	tab = ft_split("", ' ');
	printf("Test string : \"%s\".\n\n", "");
	if (!tab[0])
		printf("Ok: expected null, got %s.\n", tab[0]);
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 6 ----------\n");
	i = 0;
	tab = ft_split("split", '\0');
	printf("Test string : \"%s\".\n\n", "split");
	if (!tab[0])
		printf("Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 7 ----------\n");
	i = 0;
	tab = ft_split("\0aa\0bbb", '\0');
	printf("Test string : \"%s\".\n\n", "\\0aa\\0bbb");
	if (!tab[0])
		printf("Ok: expected null, got %s.\n", tab[0]);
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 8 ----------\n");
	i = 0;
	tab = ft_split("        ", ' ');
	printf("Test string : \"%s\".\n\n", "       ");
	if (!tab[0])
		printf("Ok: expected null, got %s.\n", tab[0]);
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 9 ----------\n");
	i = 0;
	tab = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	printf("Test string : \"%s\".\n\n", "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse");
	if (!tab[0])
		printf("Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 10 ----------\n");
	i = 0;
	tab = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	printf("Test string : \"%s\" split at 'i'.\n\n", "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.");
	if (!tab[0])
		printf("Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 11 ----------\n");
	i = 0;
	tab = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	printf("Test string : \"%s\" split at 'z'.\n\n", "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.");
	if (!tab[0])
		printf("Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	test_itoa(void)
{
	printf("\n\n=========== TESTING ITOA ============\n\n");

	int	n;

	n = 0;
	if (!strcmp("0", ft_itoa(n)))
		printf("OK: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
	else
		printf("Try again: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));

	n = 123456789;
	if (!strcmp("123456789", ft_itoa(n)))
		printf("OK: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
	else
		printf("Try again: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));

	n = -42;
	if (!strcmp("-42", ft_itoa(n)))
		printf("OK: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
	else
		printf("Try again: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));

	n = -2147483648;
	if (!strcmp("-2147483648", ft_itoa(n)))
		printf("OK: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
	else
		printf("Try again: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
}

//function for testing ft_strmapi --------------------------------
char increment_char(unsigned int i, char c) 
{
	(void)i;
	return c + 1; // Increment character to next ASCII value
}

char decrement_char(unsigned int i, char c) 
{
	i--;
	return c - 1; // Increment character to next ASCII value
}

void	test_strmapi(void)
{
	printf("\n\n=========== TESTING STRMAPI ============\n\n");

	
	char *result1 = ft_strmapi("HELLO!", increment_char);
    if (result1 != NULL) 
	{
        printf("\"HELLO!\" transformed to: \"%s\"\n", result1);
        free(result1); // Correct use of free
    }

    char *result2 = ft_strmapi("Tiya", decrement_char);
    if (result2 != NULL) 
	{
        printf("\"Tiya\" transformed to: \"%s\"\n", result2);
        free(result2); // Correct use of free
    }	
}
//function for striteri.c --------------
void	test_striteri_print(unsigned int i, char *c)
{
	i--;
	write(1, c, 1);
}

void uppercase(unsigned int i, char *c) 
{
    (void)i;
	*c = toupper((unsigned char) *c); // Convert to uppercase
}

void	test_striteri(void)
{
	printf("\n\n=========== TESTING STRITERI ============\n\n");

	char str[] = "hello world"; // Example string

    printf("Original string: %s\n", str);
    
    // Applying the transformation
    ft_striteri(str, uppercase);
    
    printf("Modified string: %s\n", str); // Print the modified string
}

void	test_putchar_fd(void)
{
	printf("\n\n=========== TESTING PUTCHAR_FD ============\n\n");
	
	ft_putchar_fd('x', 1);
	int fd = open("testing/testputchar.txt", O_WRONLY | O_CREAT, 0777);
	ft_putchar_fd('x', fd);
	printf("\nCheck /testing/testputchar.txt file. Should have 'x'.\n");
	close(fd);
}

void	test_putstr_fd(void)
{
	printf("\n\n=========== TESTING PUTSTR_FD ============\n\n");
	
	ft_putstr_fd("Hello World!", 1);
	int fd0 = open("testing/testputstr.txt", O_WRONLY | O_CREAT, 0777);
	ft_putstr_fd("Hello World!", fd0);
	printf("\nCheck /testing/testputstr.txt file. Should have \"Hello World!\".\n");
	close(fd0);
}

void	test_putendl_fd(void)
{
	printf("\n\n=========== TESTING PUTENDL_FD ============\n\n");
	
	ft_putendl_fd("Hello World!", 1);
	int fd1 = open("testing/testputendl.txt", O_WRONLY | O_CREAT, 0777);
	ft_putendl_fd("Hello World!", fd1);
	printf("\nCheck /testing/testputendl.txt file. Should have \"Hello World!\".\n");
	close(fd1);
}

void	test_putnbr_fd(void)
{
	printf("\n\n=========== TESTING PUTNBR_FD ============\n\n");
	
	ft_putstr_fd("910\t\t: ", 1);
	ft_putnbr_fd(910, 1);
	ft_putstr_fd("\n123456789\t: ", 1);
	ft_putnbr_fd(123456789, 1);
	ft_putstr_fd("\n0\t\t: ", 1);
	ft_putnbr_fd(0, 1);
	ft_putstr_fd("\n-8453\t\t: ", 1);
	ft_putnbr_fd(-8453, 1);
	ft_putstr_fd("\n2003\t\t: ", 1);
	ft_putnbr_fd(+2003, 1);
	ft_putstr_fd("\n-2147483648\t: ", 1);
	ft_putnbr_fd(-2147483648, 1);
	ft_putstr_fd("\n", 1);
	int fd2 = open("testing/testputnbr.txt", O_WRONLY | O_CREAT, 0777);
	ft_putnbr_fd(910, fd2);
	printf("\nCheck /testing/testputnbr.txt file. Should have \"910\".\n");
	close(fd2);
}

void	test_lstnew(void)
{
    printf("\n\n=========== TESTING LSTNEW ============\n\n");
	// Test data
    int data = 43;
    
    t_list *node = ft_lstnew(&data);// Create a new node with the test data
    if (node != NULL)// Check if the node creation was successful
    {
        // Print the content of the node
        printf("Content of the node: %d\n", *(int *)(node->content));
        // Free the memory allocated for the node
        free(node);
    }
    else
    {
        printf("Failed to create the node.\n");
    }
}

void	test_lstadd_front(void)
{
    printf("\n\n=========== TESTING LSTADD_FRONT ============\n\n");
	// Create an empty linked list
    t_list *head = NULL;

    // Test data
    int data1 = 10;
    int data2 = 20;
    int data3 = 30;

    // Create new nodes
    t_list *node1 = ft_lstnew(&data1);
    t_list *node2 = ft_lstnew(&data2);
    t_list *node3 = ft_lstnew(&data3);

    // Add nodes to the front of the linked list
    ft_lstadd_front(&head, node3);
    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node1);

    // Print the contents of the linked list
    printf("List contents: ");
    t_list *current = head;
    while (current != NULL)
    {
        printf("%d ", *(int *)(current->content));
        current = current->next;
    }
    printf("\n");

    // Free the memory allocated for the nodes
    free(node1);
    free(node2);
    free(node3);
}

int	main(void)
{
	test_isalpha();
    test_isdigit();
    test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	test_memset();
	test_bzero();
	test_memcpy();
	test_memmove();
	test_strlcpy();
	test_strlcat();
	test_toupper();
	test_tolower();
	test_strchr();
	test_strrchr();
	test_strncmp();
	test_memchr();
	test_memcmp();
	test_strnstr();
	test_atoi();
	test_calloc();
	test_strdup();
	test_substr();
	test_strjoin();
	test_strtrim();
	test_split();
	test_itoa();
	test_strmapi();
	test_striteri();
	test_putchar_fd();
	test_putstr_fd();
	test_putendl_fd();
	test_putnbr_fd();
	test_lstnew();
	test_lstadd_front();
    return 0;
}
