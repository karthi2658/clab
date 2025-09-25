#include <stdio.h>
int main() {
    char ch;
    int lines;
    printf("Enter a character to print: ");
    scanf(" %c", &ch); 
    printf("Enter number of lines: ");
    scanf("%d", &lines);
    printf("\nPattern:\n");
    for (int i = 1; i <= lines; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}
