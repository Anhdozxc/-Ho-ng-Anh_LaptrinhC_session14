#include <stdio.h>
#include <string.h> 

int main() {
    
    char chuoi[] = "HelloPTIT"; 
    int len = strlen(chuoi);
    printf("Cac ky tu trong chuoi la: ");
    for (int i = 0; i < len; i++) {
        printf("%c ", chuoi[i]); 
    }
    printf("\n"); 
    return 0;
}


