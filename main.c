#include "shell.h"


int main(int argc,char **argv)
{
    (void)argc;
    (void)argv;
    printf("*******************************************\n");
    printf("*                                         *\n");
    printf("*      Welcome! You have entered          *\n");
    printf("*             Shreyas's shell             *\n");
    printf("*                                         *\n");
    printf("*******************************************\n");
    if(isatty(STDIN_FILENO)==1)
    {
      shell_interactive();
      
    }else{
       shell_no_interactive();
    }
}

// Ensure there is a newline character at the end of this file.
