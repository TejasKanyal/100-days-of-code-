#include <stdio.h>


typedef enum {
    GUEST,
    USER,
    ADMIN
} UserRole;


void displayMessage(UserRole role) {
    switch (role) {
        case GUEST:
            printf("Welcome, Guest. Limited access granted.\n");
            break;
        case USER:
            printf("Hello, User. You have standard access.\n");
            break;
        case ADMIN:
            printf("Welcome back, Administrator. Full system access granted.\n");
            break;
        default:
            printf("Unknown role.\n");
            break;
    }
}

int main() {
    
    UserRole role1 = GUEST;
    UserRole role2 = USER;
    UserRole role3 = ADMIN;

    
    displayMessage(role1);
    displayMessage(role2);
    displayMessage(role3);

    return 0;
}
