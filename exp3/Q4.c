// A C program to demonstrate Zombie Process. 
// Child becomes Zombie as parent is sleeping 
// when child process exits. 


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t child_pid;

    // Create a child process
    child_pid = fork();

    if (child_pid == -1) {
        // Fork failed
        fprintf(stderr,"fork error\n");
        exit(1);
    }

    if (child_pid > 0) {
        // Parent process
        printf("Parent process (PID %d) is sleeping for 3 seconds.\n", getpid());
        sleep(3);

        // The parent process does not call wait, leaving the child in a zombie state
        printf("Parent process exiting without waiting for the child.\n");
    } else {
        // Child process
        printf("Child process (PID %d) is exiting.\n", getpid());
        exit(0);
    }

    return 0;
}
