#include "main.h"
/**
 * _strstr - Finds first occurrence of substring needle and string haystack
 * @haystack: string 
 * @needle: substring
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
int a, b, c, d;
c = 0;
d = 0;
for (a = 0; haystack[a] != '\0'; a++)
{
b = 0;
while (needle[b] != '\0')
{
if (haystack[a] == needle[b])
{


