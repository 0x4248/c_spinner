#include <threads.h>
#include <stdio.h>
#include <unistd.h>

#include "spinner.h"

int main(){
    thrd_t spinner_thread;
    thrd_create(&spinner_thread, spinner, "Example Spinner");
    sleep(1);
    pthread_cancel(spinner_thread);
    spinner_cleanup();
    return 0;
}