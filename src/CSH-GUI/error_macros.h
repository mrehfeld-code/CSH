#ifndef _ERROR_MACROS_H
#define _ERROR_MACROS_H

/* macros for SDL */
#define PRINT_SDL_ERROR(msg) printf("%s\n%s\n", msg, SDL_GetError())
#define PRINT_SDL_ERROR_AND_EXIT(msg) printf("%s\n%s\n", msg, SDL_GetError()), exit(EXIT_FAILURE)

/* macros for SDL_ttf */
#define PRINT_TTF_ERROR(msg) printf("%s\n%s\n", msg, TTF_GetError())
#define PRINT_TTF_ERROR_AND_EXIT(msg) printf("%s\n%s\n", msg, TTF_GetError()), exit(EXIT_FAILURE)

#endif // _ERROR_MACROS_H
