/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:18:23 by wweisser          #+#    #+#             */
/*   Updated: 2022/03/27 22:39:42 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(void *buf, int ch, unsigned int n)
{
	unsigned int	i;
	unsigned char	*c;

	i = 0;
	c = (unsigned char *)buf + i;
	while (i < n)
	{
		if (c[i] == (unsigned char)ch)
			return (&buf[i]);
		i++;
	}
	c = 0;
	return (c);
}

// #include <stdio.h>
// #include <string.h>

// int main () {
//     char buffer[80];
//     char* where;

//     strcpy( buffer, "video x-rays" );

//     where = (char *) memchr( buffer, 'x', 6 );
//     if( where == NULL ) {
//         printf( "'x' not found\n" );
//     } else {
//         printf( "%s\n", where );
//     }

//     where = (char *) memchr( buffer, 'r', 9 );
//     if( where == NULL ) {
//         printf( "'r' not found\n" );
//     } else {
//         printf( "%s\n", where );
//     }
// }
