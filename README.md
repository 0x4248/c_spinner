# C Spinner

A simple spinner for C.

## Usage

Here is an example of how to use the spinner.

```c
#include <threads.h> // For the thread functions
#include "spinner.h" // Include the spinner header

int main(){
    thrd_t spinner_thread; // Create a thread for the spinner
    thrd_create(&spinner_thread, spinner, "Example Spinner"); // Start the spinner with a message
    // Do some work
    pthread_cancel(spinner_thread); // Stop the spinner loop
    spinner_cleanup(); // Clear the spinner from the screen
    return 0;
}
```

## Example

To build the example run:
```
cmake .
make
./spinner
```

or run the alternative makefile with:
```
make -f make.mk
./spinner
```