#include <stdio.h>
#include <sys/resource.h>

int main() {
    struct rlimit lim;
    
    // Retrieve the stack size limits
    if (getrlimit(RLIMIT_STACK, &lim) == 0) {
        // Print current and maximum stack size
        printf("Current stack size limit: %ld\n", lim.rlim_cur);
        printf("Maximum stack size limit: %ld\n", lim.rlim_max);
    } else {
        // Print an error if getrlimit fails
        perror("Error getting stack size limit");
    }

    return 0;
}
