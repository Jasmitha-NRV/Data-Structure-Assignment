#include <stdio.h>
#include <string.h>
#define MAX 100 

int main(void) {
    char str[MAX];
    char stack[MAX];
    int top = -1; 

    printf("Enter a string: ");
    scanf("%s", str); 
    for (int i = 0;i<strlen(str);i++) {
        stack[++top] = str[i];
    }

    for (int i = 0; i <=strlen(str); i++) {
        str[i] = stack[top--];
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
