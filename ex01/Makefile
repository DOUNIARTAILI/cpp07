# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 13:39:05 by drtaili           #+#    #+#              #
#    Updated: 2023/12/09 13:39:19 by drtaili          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp 

OBJS = $(SRC:.cpp=.o)

NAME = iter
HEADERS = iter.hpp    
CC = c++

RM = rm -rf

FLAGS = -Wall -Wextra -Werror -std=c++98


all: $(NAME)

$(NAME) : $(OBJS) 
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@
	
clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY = all clean fclean re