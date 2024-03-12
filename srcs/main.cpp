#include "../incs/parsing.hpp"

int	main(int ac, char **av) {

	if (ac != 3)
	{
		std::cout << _RED "Usage: ./ircserv <port> <password>." << _END << std::endl;
		return (FAILURE); 
	}

	return (SUCCESS);
}