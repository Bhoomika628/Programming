#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = arr[0];
    int second = -2147483648; 

    for(i = 1; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } 
        else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if(second == -2147483648) {
        printf("No second largest element");
    } else {
        printf("Second largest element = %d", second);
    }

    return 0;
}