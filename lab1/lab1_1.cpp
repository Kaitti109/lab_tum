#include <stdio.h>

int main() {
    int n;
    printf("type: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("[%d]Hello World\n",i);
    }

    return 0;
}
