#include <stdio.h>
#include <string.h> 

int main() {
    char chuoi[] = "HelloPTIT";
    int len = strlen(chuoi);

    printf("Chuoi ban dau: %s\n", chuoi);
    printf("Chuoi dao nguoc: ");
    
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", chuoi[i]); 
    }
    printf("\n"); 
    return 0;
}



