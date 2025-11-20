// Q126 : Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!
*/

#include <stdio.h>
int main(){
    FILE *fp;
    char filename[200], str[200];
    printf("Enter the filename : ");
    scanf("%s", &filename);
    fp=fopen(filename,"r");
    if (fp==NULL)
    {
        printf("--ERROR : %s does not exist.--", filename);
        return 0;
        fclose(fp);
    }
    printf("File opened successfully.\n");
    while (fgets(str, 100, fp)!=NULL)
    {
        printf("%s",str);
    }
    fclose(fp);
    return 0;
}