/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:39:37 by hboumahd          #+#    #+#             */
/*   Updated: 2023/06/12 14:12:13 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logger.h"

int	main()
{
	t_vars	vars;

	vars.mlx_ptr = mlx_init();
	vars.win_ptr = mlx_new_window(vars.mlx_ptr, 640, 480, "Hello world!");
		
	mlx_hook(vars.win_ptr, 02, 0, ft_key_handler, &vars);
	mlx_hook(vars.win_ptr, 17, 0, ft_exit_handler, &vars);
	mlx_mouse_hook(vars.win_ptr, ft_mouse_handler, &vars);
	mlx_loop(vars.mlx_ptr);
}
