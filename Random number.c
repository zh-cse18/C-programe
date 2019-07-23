#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv, char** envp)
{
    pid_t pid;
    char* zero_argv[] = {NULL};
    posix_spawn(&pid, "./that_app", NULL, NULL, zero_argv, envp);

    int status;
    waitpid(&pid, &status, NULL);
    return 0;
}
