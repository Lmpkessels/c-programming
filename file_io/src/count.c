#include <stdio.h>

#define PATH_FILE_BUFF 64 // Buffer for characters in path towards file
#define CONTENT_BUFF 512 // Buffer to store content from file

int count() 
{
    FILE *fptr;

    int i = 0, b = 0, t = 0, nl = 0;

    char path_to_file[PATH_FILE_BUFF];
    char contents[CONTENT_BUFF];
    
    printf("Enter path to file: ");
    scanf("%63s", path_to_file);

    fptr = fopen(path_to_file, "r");
    if (fptr == NULL) {
        printf("File does not exist");
        return 1;
    }

    while (fgets(contents, CONTENT_BUFF, fptr) != NULL) {
        i = 0;
        while (contents[i] != 0) {
            if (contents[i] == ' ') b++;
            else if (contents[i] == '\t') t++;
            else if (contents[i] == '\n') nl++;
            i++;
        }
    }

    printf("\n");
    printf("Blank: %d\n", b);
    printf("Tab: %d\n", t);
    printf("New Line: %d\n", nl);

    fclose(fptr);
    return 0;
}

int main(void) {
    count();
    return 0;
}