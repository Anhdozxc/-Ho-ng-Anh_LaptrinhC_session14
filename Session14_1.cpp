#include <stdio.h>
#include <string.h> 

int main() {
    char chuoi[100]; 

    printf("Moi ban nhap vao mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin); 

    int len = strlen(chuoi);
    if (len > 0 && chuoi[len - 1] == '\n') {
        chuoi[len - 1] = '\0';
        len--; 
    }
    printf("Chuoi ban vua nhap la: %s\n", chuoi);
    printf("Do dai cua chuoi la: %d\n", len); 

    return 0;
}


