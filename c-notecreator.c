#include <stdio.h>

int main() {
    for (int i=0; i<102; i++){
        // printf("struct node *c%d = NULL;\n", i);
        printf("c%d = malloc(sizeof(struct node));\n", i);
    }
}