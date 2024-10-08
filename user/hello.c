#include "kernel/types.h"
#include "user/user.h"

int main(void) {
    int count = 0;

    for (;;) {
        count++;
        printf("count %d\n", count);
    }

    return 0;
}
