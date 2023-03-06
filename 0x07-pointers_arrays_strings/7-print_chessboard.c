#include "main.h"

/**
 * print_chessboard - this function prints chessboard
 * @a: prototype given
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*(*(i + a) + j));
		}
	_puchar('\n');
	}
}
