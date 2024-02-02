#include <stdio.h>
#include "types.h"

int main() {

    // connection *log_con_jqueue;
    // connection * const sentinel = (connection *)(uintptr_t)&log_con_jqueue;
	// connection * const joblist = log_con_jqueue;

    connection con1 = { 1, NULL, NULL };
    connection con2 = { 2, NULL, NULL };
    connection con3 = { 3, NULL, NULL };

    con1.next = &con2;
    con2.prev = &con1;
    con2.next = &con3;
    con3.prev = &con2;

    connection * a = &con1;
    connection * b = a;
    a = b;

    printf("a has address '%p'\n", (void *)a);
    printf("b has address '%p'\n", (void *)b);
    printf("a has address '%p'\n", (void *)a);

    return 0;
}
