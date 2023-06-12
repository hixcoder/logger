# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 10:29:55 by hboumahd          #+#    #+#              #
#    Updated: 2023/06/12 14:16:04 by hboumahd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = logger

# madatory
SRC_FOLDER = ./src/
SRC =	main.c handler.c
SRCS = $(addprefix $(SRC_FOLDER), $(SRC))
SRCOBJ = ${SRCS:.c=.o}


INCLUDES = ./src/logger.h 
FLAGS = -Wall -Wextra -Werror -g
CC = cc 

%.o : %.c ${INCLUDES} 
	$(CC) ${FLAGS} -Imlx -c $< -o $@
	
all : $(NAME) clean 


$(NAME) : ${SRCOBJ} $(OTHER_SRCS) ${INCLUDES} 
	@$(CC) ${FLAGS} $(SRCOBJ) -lmlx -framework OpenGL -framework AppKit -o $(NAME)
	@echo "|+| make the $(NAME) program   [${GREEN}DONE${RESET}]"
	


clean :
	@rm -f $(SRCOBJ)  
	@echo "|-| remove object files [${RED}DONE${RESET}]"

fclean : clean
	@rm -f ${NAME}
	@echo "|-| remove the programs  [${RED}DONE${RESET}]"

re : fclean all

# colors used
GREEN = \033[0;92m
RED = \033[0;91m
RESET = \033[0m