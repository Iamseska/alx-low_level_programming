#include "main.h"
/**
 * alphabet - contains the alphabet letters
 *
 * Return : void
 */
void alphabet(void)
{
	char lt;
	int putchar;

	for (lt = 'a'; lt <= 'z'; lt++)
		putchar(lt);
	putchar('\n');
}
