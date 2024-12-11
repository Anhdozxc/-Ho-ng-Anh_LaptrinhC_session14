#include <stdio.h>
#include <string.h> 

int main() {
    char chuoi[] = "I Love PTIT"; 

    int dem = 0; 
    int len = strlen(chuoi);
    for (int i = 0; i < len; i++) {
        if ((chuoi[i] >= 'A' && chuoi[i] <= 'Z') || (chuoi[i] >= 'a' && chuoi[i] <= 'z')) {
            dem++; 
        }
    }
    printf("So ky tu la chu cai trong chuoi: %d\n", dem);

    return 0;
}


