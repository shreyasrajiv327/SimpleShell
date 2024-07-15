#include "shell.h"

/**
 * own_env - function that prints enviroment variables
 * @args: arguments
 *
 * Return: 1 on success, 0 otherwise
 */

int own_env(char **args)
{
    int i = 0;
    (void)(**args);/*tells the compiler, "I know args is here, but I'm intentionally not using it." This line basically does nothing, but it makes the compiler stop complaining about the unused parameter.*/
    while(environ[i])
    {
        write(STDOUT_FILENO,environ[i],strlen(environ[i]));
        write(STDOUT_FILENO,"\n",1);
        i++;
    }
    return(-1);
}
