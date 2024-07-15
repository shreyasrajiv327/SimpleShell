#include "shell.h"
/**
 * new_process - create a new process
 * @args: array of strings that contains the command and its flags
 *
 * Return: 1 if success, 0 otherwise.
 */

int new_process(char **args)
{
    pid_t pid;
	int status;

    pid = fork();
    if(pid == 0)
    {
        if(execvp(args[0],args)== -1)
        {
            perror("error in new process: child process");
        }
        exit(EXIT_FAILURE);
    }
    else if(pid<0)
    {
        perror("error in new_process : forking");
        /* error forking */
    }
    else{
        /*parent process*/

        do{
            waitpid(pid,&status,WUNTRACED);
            //WUNTRACED tells waitpid() to return if a child has stopped due to receiving a SIGSTOP signal
            //It allows the parent process to handle cases where the child process might be paused or stopped temporarily.
        }while (!WIFEXITED(status) && !WIFSIGNALED(status));
        //WIFEXITED(status) is a macro that checks whether the child process exited normally
        //WIFSIGNALED(status) is another macro that checks whether the child process terminated due to a signal.
        //It returns true if the child process was terminated by a signal (e.g., SIGKILL, SIGTERM).
       /*The purpose of this loop is to suspend the execution of the parent process (waitpid() call) until the child process has completed its task.
       It ensures that the parent process synchronizes with the child process and handles its termination properly.
       By using WIFEXITED(status) and WIFSIGNALED(status) macros, the parent process can determine how the child process terminated and take appropriate actions based on that information.*/
        
    }
    return 1;
}
