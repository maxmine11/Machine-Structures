#include <string.h>
#include <stdio.h>
#include <stdint.h>



void foo1(int *a, int n) {

    int i;

    for (i = 0; i < n; i++) {

        *(a+i) += 3;

    }

}

void foo2(int *p) { 
    p++;
    printf ("p at foo2: %d\n", *p); 
}

int main() {

    int x = 4;

    int b[] = {1, 2, 3, 4, 5};

    int *p = &b[1];

    foo1(b, sizeof(b) / sizeof(int));

    foo2(&p);
    printf("*p = %d\n", *p);
    printf("%d, %d, %d\n", b[1], *(++p), b[x]);

}


