/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 05:13:05 by rsampaio          #+#    #+#             */
/*   Updated: 2024/10/20 05:21:48 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 300

void	ft_display(char *filename)
{
	int		file;
	int		bytes_read;
	char	buffer[BUF_SIZE];

	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	bytes_read = read(file, buffer, BUF_SIZE);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(file, buffer, BUF_SIZE);
	}
	close(file);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_display(argv[1]);
	return (0);
}
