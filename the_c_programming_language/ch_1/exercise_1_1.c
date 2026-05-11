#include <stdio.h>
#include <string.h>

#define CHAR_BUFF 20 // Buffer for characters in name

/// Greet user after receiving the name as input
void greet() 
{
    char name[CHAR_BUFF];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Hello, %s!\n", name);
}

// Greet the world
char hello_world() 
{
    char hw[] = "Hello, World!";

    printf("%s\n", hw);
}

int main(void)
{
    greet();
    hello_world();
}