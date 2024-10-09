#include "kernel/types.h"
#include "user/user.h"

int main(void) {
    uint64 num_calls = scount();
    printf("There are %lu total sys calls so far.", num_calls);
}
