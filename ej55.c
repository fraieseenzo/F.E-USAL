#include <stdio.h>
#include <string.h>

void inversa(char *frase, char *newfrase) {
    char *ini = frase;
    char *end = strlen(frase) - 1;



int main() {
    char frase[6] = {"sigma"};
    char newfrase[6];

    inversa(frase, newfrase);
}