#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int common = 0;

void parentProcess() {
    common = 10;
    printf("Parent process PID: %d\n",getppid());
    printf("Parent process - common variable value: %d\n", common);
}

void childProcess() {
    printf("Child process PID: %d\n",getppid());
    printf("Child process - common variable value: %d\n", common);
}

int main() {
    pid_t pid = fork();

    printf("Value before parent call: %d\n",common);

    if (pid < 0) {
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {
        // Child process
        childProcess();
    } else {
        // Parent process
        parentProcess();
    }

    return 0;
}
