#include "stack.h"
#include "instructions.h"

int	main(int argc, char *argv[])
{
	t_stack		*a;
	t_stack		*b;

	if (argc < 2)
		return (0);
	a = generate_stack_a_content(argv, argc);
	if (!a)
		return (-1);
	b = malloc_stack(NULL, NULL, 0);
	if (!b)
	{
		free_stack(a);
		return (-1);
	}
	select_algo(a, b, a->size);
	free_stack(a);
	free_stack(b);
	return (0);
}