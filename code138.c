#include <stdio.h>

typedef enum {
    APPLE,
    BANANA,
    CHERRY,
    DATE,
    GRAPE
} Fruit;

int main() {
    
    const char* FruitNames[] = {
        "APPLE",
        "BANANA",
        "CHERRY",
        "DATE",
        "GRAPE"
    };

   
    for (int i = APPLE; i <= GRAPE; i++) {
        
        printf("Name: %s, Value: %d\n", FruitNames[i], i);
    }

    return 0;
}
