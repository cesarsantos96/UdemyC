#include <stdio.h>
#include <stdlib.h>

int main()
{
    // definindo uma variável

    int a = 5, b;

    // imprimindo a variável "a"
    printf("%d", a);

    // pula linha
    printf("\n");

    // concatenando

    printf("The value of var a is: %d", a);

    // mudando o valor de a

    a = 15;
    printf("\nThe value of var a is: %d", a);
    printf("\n%d", a);

    // lendo valores

    scanf("\n%d", &b);
    printf("\nThe value of var b is: %d", b);

    // pula linha
    printf("\n");

    // imprimindo
    printf("Uhuul");
}