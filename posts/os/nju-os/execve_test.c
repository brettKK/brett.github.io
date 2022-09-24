#include <unistd.h>
#include <stdio.h>

// int main(int argc, char *argv[], char *envp[]);
int main() {
    char * const argv[] = {"/bin/bash", "-c", "env", NULL,};
    char * const envp[] = {"HELLO=WORLD", NULL,};

    execve(argv[0], argv, envp);
    printf("Hello, world!\n");
    return 0;
}