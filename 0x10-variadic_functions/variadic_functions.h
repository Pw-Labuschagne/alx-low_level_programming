#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, n...);
void print_number(const char *seperator, const unsigned int n, ...);
void prints_strings(const char *seperator, const unsignedint n, ...);
void print_all(const char * const format, ...);

#endif
