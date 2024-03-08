#include <stdio.h>

void inverterString(char *str) {
    int comprimento = 0;
    while (str[comprimento] != '\0') {
        comprimento++;
    }

    int i, j;
    for (i = 0, j = comprimento - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char minhaString[100];

    printf("Digite uma string: ");
    scanf("%s", minhaString);

    inverterString(minhaString);

    printf("String invertida: %s\n", minhaString);

    return 0;
}
