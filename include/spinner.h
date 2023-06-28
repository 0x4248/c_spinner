#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void *spinner(void *message) {
    const char *animation[] = {"-", "\\", "|", "/"};
    while (1) {
        for (int i = 0; i < 4; i++) {
            printf("\r%s [%s]", message, animation[i]);
            fflush(stdout);
            usleep(100000);
        }
    }
}

void spinner_cleanup() { printf("\r"); }