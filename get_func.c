#include "main.h"
/**
 * get_func - return the correct func
 * @s: array
 * Return: int
 */
int (*get_func(char s))(va_list)
{
	op_t ops[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{"b", print_b},
		{NULL, NULL}
	};

	int i;

	for (i = 0 ; ops[i].c != NULL ; i++)
	{
		if (*ops[i].c == s)
			return (ops[i].f);
	}
	return (NULL);
}
