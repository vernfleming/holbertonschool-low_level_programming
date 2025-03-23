#include "variadic_functions.h"

/**
 * print_all - prints any and everything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *string_argument, *string_separator = "";

	va_list argument_list;

	va_start(argument_list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", string_separator, va_arg(argument_list, int));
					break;
				case 'i':
					printf("%s%d", string_separator, va_arg(argument_list, int));
					break;
				case 'f':
					printf("%s%f", string_separator, va_arg(argument_list, double));
					break;
				case 's':
					string_argument = va_arg(argument_list, char *);
					if (!string_argument)
						string_argument = "(nil)";
					printf("%s%s", string_separator, string_argument);
					break;
				default:
					i = i + 1;
					continue;
			}
			string_separator = ", ";
			i = i + 1;
		}
	}
	va_end(argument_list);
	printf("\n");
}
