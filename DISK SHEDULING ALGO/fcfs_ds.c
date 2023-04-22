#include <stdio.h>

int main() {
    int head, n, s = 0;
    int queue[100], ans[100];
    printf("Enter the value of head:");
    scanf("%d", &head);
    queue[0] = head;
    printf("Enter the number of processes:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int x;
        printf("Enter the value of process:");
        scanf("%d", &x);
        queue[i] = x;
    }
    printf("[");
    for (int i = 0; i <= n; i++) {
        printf("%d, ", queue[i]);
    }
    printf("]\n");
    for (int i = 0; i < n; i++) {
        int j;
        if (queue[i+1] > queue[i]) {
            j = queue[i+1] - queue[i];
        } else {
            i++;
            j = queue[i+1] - queue[i];
        }
        s += j;
    }
    printf("%d\n", s);
    return 0;
}