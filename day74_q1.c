// Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>

int main()
{
    char srcName[100], destName[100];

    printf("Enter source file: ");
    scanf("%99s", srcName);
    printf("Enter destination file: ");
    scanf("%99s", destName);

    FILE *src = fopen(srcName, "r");

    if (src == NULL)
    {
        printf("Could not open source file\n");
        return 1;
    }

    FILE *dest = fopen(destName, "w");

    if (dest == NULL)
    {
        printf("Could not create destination file\n");
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);
    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destName);
    return 0;
}