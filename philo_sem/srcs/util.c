#include "../includes/philo_sem.h"

void	delay_time(uint64_t delay_time)
{
	uint64_t	limit_time;

	limit_time = get_time() + delay_time;
	while (get_time() < limit_time)
		usleep(10);
}

uint64_t	get_time(void)
{
	struct timeval	current_time;

	gettimeofday(&current_time, NULL);
	return ((current_time.tv_sec * 1000) + (current_time.tv_usec / 1000));
}

uint64_t	ft_atou64(const char *str)
{
	uint64_t	ret;
	uint64_t	p;

	ret = 0;
	p = 1;
	while (*str == '\f' || *str == '\n' || *str == '\r'
		|| *str == '\t' || *str == '\v' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			p *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ret *= 10;
		ret += (p * (*str - '0'));
		str++;
	}
	return ((uint64_t)ret);
}
