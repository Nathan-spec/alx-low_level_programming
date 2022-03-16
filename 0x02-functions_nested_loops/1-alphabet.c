#include "main.h" 

/** 
 * Main - entry level
 * Program to return lowercase letters of the alphabets
 * Return: Always 0.
 */
int main(void)
{
	void print alphabet(void)
	{

		int c; 

		for( c = 'a';c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
