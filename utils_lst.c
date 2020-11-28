/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadolph <sadolph@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:57:05 by sadolph           #+#    #+#             */
/*   Updated: 2020/11/23 13:57:05 by sadolph          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	del_content(void *elem)
{
	t_env *env;

	env = elem;
	free_memory(env->env_name);
	free_memory(env->env_cont);
	free(elem);
	elem = NULL;
}

void	*apply_nothing(void *elem)
{
	return (elem);
}
