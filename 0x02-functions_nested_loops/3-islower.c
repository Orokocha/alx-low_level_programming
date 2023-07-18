#include "main.h"
/**
 *_islower *Checks for lowercase alphabet
 *@c:Character to be checked
 **Return: if character is lowercase , otherwise
*/
Int _islower(int c)
{
	If(c>= ‘a’ && c <= ‘z’)	
		return(1);
	else		
		return(0);
}
