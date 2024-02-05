#include <stdio.h>
#include "types.h"

int main() {

    connection con1 = { 1, NULL, NULL };
    connection con2 = { 2, NULL, NULL };
    connection con3 = { 3, NULL, NULL };

    con1.next = &con2;
    con2.prev = &con1;
    con2.next = &con3;
    con3.prev = &con2;

    connection *jqnext = NULL;
    for (connection *con = &con1; con != NULL; con = jqnext) {
        printf("Process connection with id '%d', address '%p'\n", con->id, (void *)con);
        jqnext = con->next;
    }

    return 0;
}
