#include "stack.h"
#include "instructions.h"

int main()
{
	t_stk	stk;
	char *l = "1, 5, 3, 2, 4";
	
	*stk = malloc_stk();
	free_stk(*stk);
	return(0);
}