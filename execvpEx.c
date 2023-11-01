#include <stdio.h>
#include <unistd.h>

/**
* execvp(): Replaces current process image with a new process image.
*
* First argument: Point to the filename asscoiated with the file being executed like ls or echo
* Second argument: An array of pointers to null-terminated strings that represent the argument list available
*                  to the new program. MAKE SURE THIS ARRAY CONTAINS A NULL AT THE END!
*/

int main() {
    /**
    * Ex1: execvp with ls
    */
    char *command = "ls";
    char *argument_list[] = {"ls", "-l", NULL};

    int ret = execvp(command, argument_list);

    if (ret == -1){
        printf("Process did not terminate correctly!\n");
    }

    printf("[SHOULD NOT PRINT] Hello World!\n"); // This print statement should not be printed if execvp() was done successfully.


    /**
    * Ex2: execvp with echo
    */
    // char *command = "echo";
    // char *argument_list[] = {"echo", "Hello", "World!", NULL};

    // int ret = execvp(command, argument_list);

    // if (ret == -1) {
    //     printf("Process did not terminate correctly!\n");
    // }

    // printf("[SHOULD NOT PRINT] Hello World!\n"); // This print statement should not be printed if execvp() was done successfully.

    return 0;
}