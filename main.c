#include <stdio.h>
#include "add.h"
#include "sub.h"

int main(){
    int x = add(3, 5);
    printf("%d\n", x);
    int y = sub(8, 5);
    printf("%d\n", y);
    return 0;
}
