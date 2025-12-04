#include <stdio.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

int main() {
    Status current_status = SUCCESS;

    switch (current_status) {
        case SUCCESS:
            printf("Operation successful.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Unknown status.\n");
            break;
    }

    
    current_status = FAILURE;
    switch (current_status) {
        case SUCCESS:
            printf("Operation successful.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Unknown status.\n");
            break;
    }

    return 0;
}
