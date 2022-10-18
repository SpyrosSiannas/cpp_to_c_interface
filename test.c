#include "cpp_inter.h"
#include "stdio.h"

int main(void) {
    testh t = create(5);
    int a = get_val(t);
    destroy(t);
    printf("%d", a);
    return 0;
}
