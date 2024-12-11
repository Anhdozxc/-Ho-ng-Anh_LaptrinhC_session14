#include <stdio.h>
#include <string.h> 

int main() {
    char chuoi[] = "hello world";  

    int dem = 1;  
    int len = strlen(chuoi);
    for (int i = 0; i < len; i++) {
        if (chuoi[i] == ' ') {
            dem++;  
        }
    }

    printf("%d\n", dem);

    return 0;
}


