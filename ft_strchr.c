/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:03:49 by wweisser          #+#    #+#             */
/*   Updated: 2022/04/04 17:58:03 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (1)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// // int main( void )
// {
//     char buffer[80];
//     char* where;
//     strcpy( buffer, "video x-rays" );
//     where = strchr( buffer, 't' + 256);
// 	printf( "result: %s\n", where );
//     if( where == NULL ) {
//         printf( "'x' not found\n" );
//     } else {
//         printf( "'x' found: %s\n", where );
//     }
//     return EXIT_SUCCESS;
// }
