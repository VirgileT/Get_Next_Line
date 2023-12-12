/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtestut <vtestut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 23:25:39 by vtestut           #+#    #+#             */
/*   Updated: 2022/12/21 23:27:07 by vtestut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
    int     fd;
    char    *line;

    fd = open("main/song", O_RDONLY);
    while (1)
    {
        line = get_next_line(fd);
        printf("%s", line);
        if (line == NULL)
            break;
        free(line);
    }
    return (0);
}

// gcc -Wall -Wextra main/main.c srcs/mandatory/get_next_line.c srcs/mandatory/get_next_line_utils.c