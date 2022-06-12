#include "../includes/philo_sem.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (init(argc, argv, &data))
		return (1);
	if (start_process(&data))
		return (1);
	return (0);
}
