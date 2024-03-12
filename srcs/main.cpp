#include "../incs/parsing.hpp"

int	main(int ac, char **av) {

	if (ac != 3)
	{
		std::cout << _RED "Invalid numbers of arguments." _END << std::endl;
		return (FAILURE); 
	}

	return (SUCCESS);
}