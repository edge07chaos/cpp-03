NAME = DiamondTrap

#files
OBJS = main.o ClapTrap.o ScavTrap.o FragTrap.o DiamondTrap.o
HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

#compiler conf.
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

#commands
DELETE = rm -rf
COMP = $(CXX) $(CXXFLAGS)

#targets
all: $(NAME)

$(NAME): $(OBJS)
	$(COMP) -o $@ $^

$(OBJS): $(HEADERS)

clean:
	$(DELETE) $(OBJS)

fclean: clean
	$(DELETE) $(NAME)

re: fclean all

.PHONY: all clean fclean re