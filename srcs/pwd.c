/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatrina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 18:07:37 by pcatrina          #+#    #+#             */
/*   Updated: 2020/11/22 20:53:04 by pcatrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include <stdio.h>

void	pwd(t_data *data)
{
	char	*pwd;

	if ((pwd = getcwd(NULL, 0)) == NULL)
		printf("error\n");
	else
		printf("%s\n", pwd);
	free(pwd);
}
