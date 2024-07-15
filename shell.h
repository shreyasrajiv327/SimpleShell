#ifndef SHELL_H
#define SHELL_H

/***** LIBRARIES *****/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <fcntl.h>

/*--- Macros ---*/
#define TOK_DELIM " \t\r\n\a\""
extern char **environ;

/*--- Prototypes ---*/
/* main.c */
void shell_interactive(void);
void shell_no_interactive(void);

/* shell_interactive.c */
char *read_line(void);
char **split_line(char *line);
int execute_args(char **args);

/* execute_args.c */
int new_process(char **args);

/* shell_no_interactive.c */
char *read_stream(void);



/*--- Builtin functions ---*/
int own_cd(char **args);
int own_help(char **args);
int own_env(char **args);
int own_exit(char **args);

#endif
