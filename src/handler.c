/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:31:14 by hboumahd          #+#    #+#             */
/*   Updated: 2023/06/12 15:00:19 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logger.h"

// this function handles the exit of the game when 
// clicking the red cross or the ESK
int	ft_exit_handler(void *n_data)
{
	t_vars	*data;

	data = (t_vars *)n_data;
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	exit(0);
	return 0;
}

// this funciton handles the click on the keys
int	ft_key_handler(int key, void *n_data)
{
	(void) n_data;
	(void) key;
	system("open -a /System/Library/CoreServices/ScreenSaverEngine.app");
	printf("someone touche the keys\n");
	return (0);
}

// this function handles the events that comes from the mouse
int	ft_mouse_handler(int key, int x, int y, void *n_data)
{
	(void) n_data;
	
	// key += 5;
	(void) x;
	(void) y;
	(void) key;
	// if (key == MOUSE_L || key == MOUSE_L2 || key == MOUSE_R || key == MOUSE_R2)
	printf("someone touche the mouse\n");
	system("open -a /System/Library/CoreServices/ScreenSaverEngine.app");
	return (0);
}
