/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:06:15 by wweisser          #+#    #+#             */
/*   Updated: 2022/04/14 14:07:42 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		i++;
		if ((unsigned char)s1[i - 1] != (unsigned char)s2[i - 1])
			return ((unsigned char)s1[i - 1] - (unsigned char)s2[i - 1]);
		if ((unsigned char)s1[i - 1] == '\0'
			|| (unsigned char)s2[i - 1] == '\0')
			return (0);
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main( void )
// {
//     char buffer[80];
//     int retval;

//     strcpy( buffer, "Tripouille" );

//     retval = ft_strncmp( "abcdef", "abcdefghijklmnop", 6);
// 		printf( "%d \n", retval);
//     if( retval < 0 ) {
//         printf( "Less than\n" );
//     } else if( retval == 0 ) {
//         printf( "Equal to\n");
//     } else {
//         printf( "Greater than\n");
//     }

//     return EXIT_SUCCESS;
// }
