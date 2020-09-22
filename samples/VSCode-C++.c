#include "stdio.h"
#define true 1
#define false 0

int main() {
    _Bool flag = false;
    int x = 10;
    while (x > 5) {
        if (flag != false)
            break;
        else
            dec(x);
    }
    printf("%d", x);
    return 0;
}

_Bool dec(int x) {
    return (x > 0) ? 1 : 0;
}

