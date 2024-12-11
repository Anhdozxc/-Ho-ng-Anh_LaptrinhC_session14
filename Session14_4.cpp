#include <stdio.h>
#include <string.h> 

int main() {
    char chuoi[] = "HelloPTIT";

    char kyTu;
    printf("Moi ban nhap vao mot ky tu: ");
    scanf("%c", &kyTu);  

    int dem = 0;
    int len = strlen(chuoi);
    
    for (int i = 0; i < len; i++) {
        if (chuoi[i] == kyTu) {
            dem++; 
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", kyTu, dem);

    return 0;
}


