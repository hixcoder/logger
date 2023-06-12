/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logger.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:39:33 by hboumahd          #+#    #+#             */
/*   Updated: 2023/06/12 14:15:25 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_H
# define LOGGER_H

# include "mlx.h"
#include <stdlib.h>
#include <stdio.h>
# include <math.h>

# define COLUMN_SIZE 50
# define TEX_WIDTH 50
# define TEX_HEIGHT 50

# define KEY_ESC	53
# define KEY_W	13
# define MOUSE_R	6
# define MOUSE_L	7
# define MOUSE_R2	10
# define MOUSE_L2	9
# define KEY_S	1
# define KEY_A	0
# define KEY_D	2
# define KEY_AROW_R	124
# define KEY_AROW_L	123
# define KEY_RANDOM	9999999

typedef struct	s_vars {
	void	*mlx_ptr;
	void	*win_ptr;
}				t_vars;

int				ft_exit_handler(void *n_data);
int				ft_key_handler(int key, void *n_data);
int				ft_mouse_handler(int key, int x, int y, void *n_data);

#endif
