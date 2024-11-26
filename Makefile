# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarmonte <sarmonte@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/23 12:41:41 by sarmonte          #+#    #+#              #
#    Updated: 2024/11/25 18:16:43 by sarmonte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables con nombre de los ejecutables, el principal y el de bonus
PROG	= pipex
PROG_B  = pipex_bonus

# Variables con los archivos fuente necesarios para la compilación
SRCS 	= srcs/pipex.c srcs/utils.c
OBJS 	= ${SRCS:.c=.o}
MAIN	= srcs/pipex.c

# Variables con los archivos fuente necesarios para la compilación con bonus
SRCS_B	= srcs/pipex_bonus.c srcs/utils.c srcs/utils_bonus.c
OBJS_B	= ${SRCS_B:.c=.o}
MAIN_B	= srcs/pipex_bonus.c

# define una variable llamada HEADER que contiene la opción -Iincludes
# indica al compilador que busque archivos de encabezado en el directorio includes
HEADER	= -Iincludes

# Definimos el compilador a utilizar
CC 		= gcc
# Definimos las flags a utilizar
CFLAGS 	= -Wall -Wextra -Werror -g

# Define cómo convertir archivos .c en archivos .o utilizando gcc
# con las opciones de compilación y los archivos de cabecera especificados
.c.o:		%.o : %.c
					@gcc ${CFLAGS} ${HEADER} -c $< -o $(<:.c=.o)

all: 		${PROG}

# Regla para compilar el ejecutable
${PROG}:	${OBJS}
					@echo "\033[33m----Compiling lib----"
					@make re -C ./libft
					@$(CC) ${OBJS} -Llibft -lft -o ${PROG}
					@echo "\033[32mPipex Compiled! ᕦ(\033[31m♥\033[32m_\033[31m♥\033[32m)ᕤ\n"


bonus:		${PROG_B}

# Regla para compilar el ejecutable con bonus
${PROG_B}:	${OBJS_B}
					@echo "\033[33m----Compiling lib----"
					@make re -C ./libft
					@$(CC) ${OBJS_B} -Llibft -lft -o ${PROG_B}
					@echo "\033[32mPipex Bonus Compiled! ᕦ(\033[31m♥\033[32m_\033[31m♥\033[32m)ᕤ\n"

# Regla para limpiar los archivos generados durante la compilación
clean:
					@make clean -C ./libft
					@rm -f ${OBJS} ${OBJS_B}

# Regla para limpiar los archivos generados durante la compilación y también el ejecutable
fclean: 	clean
					@make fclean -C ./libft
					@rm -f $(NAME)
					@rm -f ${PROG}
					@echo "\n\033[31mDeleting EVERYTHING! ⌐(ಠ۾ಠ)¬\n"

# Regla para recompilar el ejecutable
re:			fclean all

# Regla para recompilar el ejecutable con bonus
re_bonus:	fclean bonus

# Regla para hacer una fiesta
party:
					@printf "\033c"
					@echo "\n\033[35m♪┏(・o･)┛♪"
					@sleep 1
					@printf "\033c"
					@echo "\033[1;33m♪┗(・o･)┓♪"
					@sleep 1
					@printf "\033c"
					@echo "\n\033[36m♪┏(・o･)┛♪"
					@sleep 1
					@printf "\033c"
					@echo "\033[34m♪┗(・o･)┓♪\n"

# Regla para mostrar el mensaje de ayuda
.PHONY: all clean fclean re re_bonus bonus party