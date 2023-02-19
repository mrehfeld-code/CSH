#include <stdio.h>
#include <stdlib.h>

#include "../typedefs.h"
#include "string_handling.h"

#define MAXIMUM_LINE_LENGTH 2048
#define PROMPT_STRING " >>> "

int main(int argc, char* argv[]) {
	char line_buffer[MAXIMUM_LINE_LENGTH];

	bool loop = true;
	while (loop) {
		printf(PROMPT_STRING);

		fgets(line_buffer, MAXIMUM_LINE_LENGTH, stdin);
		str_popback(line_buffer);

		if (str_begins_with(line_buffer, "exit") || str_begins_with(line_buffer, "quit")) loop = false;
	}

	return 0;
}
