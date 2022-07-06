#include <unistd.h>
/**
 * PUTCHARRRRRR!!!!!!!!!!!!!!!!
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
