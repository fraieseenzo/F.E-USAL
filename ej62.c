#include <stdio.h>
#define MAX 10

int main() {
    char array[MAX];
    int i = 0;
    int c;
    
    while (i < MAX && (c = getchar()) != EOF) {
        if (c == '\n') continue;
        array[i++] = (char)c;
    }

 
    for (int i = 0; i < MAX; i++) {
        printf("%c", array[i]);
        if (i < MAX - 1) {
            printf(", ");
        }
    }

    printf("\n");
    return 0;
}