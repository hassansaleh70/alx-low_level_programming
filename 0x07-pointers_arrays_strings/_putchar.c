#incloude "main.h"
#icclude <unistd.h>

/**
 * _putchar - writes he character cto stoudt
 * @c: The character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and erroris set appropiately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
