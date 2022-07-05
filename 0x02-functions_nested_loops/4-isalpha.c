#include "naim.h"
/**
 * _isalpha - Entry point
 * Description: checks for alphabetic characters
 * @c: A character to search for
 * Return: return value if c is upper or lower character
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
