#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int flag = 0;
        int beginNumber, endNumber;
        for (beginNumber = 1; beginNumber < n; beginNumber++) {
            for (endNumber = beginNumber + 1; endNumber < n; endNumber++) {
                int sum = (beginNumber + endNumber) * (endNumber - beginNumber + 1) / 2;
                if (sum == n) {
                    flag = 1;
                    for (int i = beginNumber; i <= endNumber; i++)
                        printf("%d ", i);
                    printf("\n");
                }
            }
        }
        if (flag == 0) {
            printf("NONE\n");
        }
    }
    return 0;
}