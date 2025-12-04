#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Person {
    int id;
    float salary;
    char name[50];
};

bool are_identical(struct Person p1, struct Person p2) {
    if (p1.id != p2.id) {
        return false;
    }
    if (p1.salary != p2.salary) {
        return false;
    }
    if (strcmp(p1.name, p2.name) != 0) {
        return false;
    }
    return true;
}

int main() {
    struct Person person1 = {1, 50000.0, "Alice"};
    struct Person person2 = {1, 50000.0, "Alice"};
    struct Person person3 = {2, 60000.0, "Bob"};

    if (are_identical(person1, person2)) {
        printf("person1 and person2 are identical\\n");
    } else {
        printf("person1 and person2 are not identical\\n");
    }

    if (are_identical(person1, person3)) {
        printf("person1 and person3 are identical\\n");
    } else {
        printf("person1 and person3 are not identical\\n");
    }

    return 0;
}
