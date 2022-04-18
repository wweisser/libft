/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:10:45 by wweisser          #+#    #+#             */
/*   Updated: 2022/03/28 10:33:56 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ps1[i] != ps2[i])
			return (ps1[i] - ps2[i]);
		i++;
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

//     strcpy( buffer, "zello" );

//     retval = ft_memcmp( buffer, "hello", 5 );
//     if( retval < 0 ) {
//         printf( "Less than\n" );
//     } else if( retval == 0 ) {
//         printf( "Equal to\n");
//     } else {
//         printf( "Greater than\n");
//     }

//     return EXIT_SUCCESS;
// }
