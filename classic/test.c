#include <stdio.h>

int main() {
    int c;

    printf("Enter characters (Ctrl+D to end):\n");
    while ((c = getchar()) != EOF) {
        putchar(c); // 將讀取到的字符輸出
    }

    printf("End of input detected.\n");
    return 0;
}
