#include <stdio.h>

int main() {
    int N, num = 1;

    printf("Enter the limit (N): ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d\t", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}