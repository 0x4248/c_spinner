/* C_Spinner
 * A simple spinner that runs in a thread for C programs.
 * GitHub: https://www.github.com/0x4248/c_spinner
 * Licence: GNU General Public License v3.0
 * By: 0x4248
 */

#include <stdio.h>
#include <threads.h>
#include <unistd.h>

#include "spinner.h"

int main() {
    thrd_t spinner_thread;
    thrd_create(&spinner_thread, spinner, "Example Spinner");
    sleep(1);
    pthread_cancel(spinner_thread);
    spinner_cleanup();
    return 0;
}