#include <stdio.h>
int main() {
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    int target;
    printf("Enter the target: ");
    scanf("%d", &target);
    int low = 0;
    int high = size - 1;
    int mid;
    int found = 0;
    while (low <= high) {
        mid = (low + high) / 2;
        if (array[mid] == target) {
            found = 1;
            break;
        }
        else if (array[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if (found == 1) {
        printf("Element found\n");
    } else {
        printf("Element not found\n");
    }
    return 0;
}
