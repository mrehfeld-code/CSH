#include <stdio.h>
#include <string.h>

#include "../typedefs.h"
#include "string_handling.h"

/* Compares the actuall string content not the size. */
bool str_equals(const char* s1, const char* s2) {
	if (strlen(s1) != strlen(s2)) return false;

	for (long i = 0; i <= strlen(s1); i++)
		if (s1[i] != s2[i]) return false;

	return true;
}

/* Compares only the array size of the strings. faster but not as exact */
bool str_equals_fast(const char* s1, const char* s2) {
	if (sizeof(s1) != sizeof(s2)) return false;
	return true;
}

/* Removes the last item before '\0'. */
void str_popback(char* s) {
	s[strlen(s) - 1] = '\0';
}
