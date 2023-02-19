#ifndef _STRING_HANDLING_H
#define _STRING_HANDLING_H

bool str_equals(const char* s1, const char* s2);
bool str_equals_fast(const char* s1, const char* s2);

void str_popback(char* s);

bool str_begins_with(const char* s, const char* begin);

#endif // _STRING_HANDLING_H
