#include <stdio.h>
#include "cal.h"

void test_add() {
    if (add(2, 3) == 5) {
        printf("test_add passed.\n");
    } else {
        printf("test_add failed.\n");
    }
}

int main() {
    printf("Running tests...\n");
    test_add();
    return 0;
}
