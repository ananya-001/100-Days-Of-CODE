// Q125 : Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char text[500]; 

    FILE *fp = fopen("info.txt", "a");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    fputs(text, fp);

    printf("File updated successfully with appended text.\n");

    fclose(fp);
    return 0;
}
