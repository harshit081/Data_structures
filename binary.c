#include <stdio.h>
int binary_search(int arr[], int key, int n)
{
    int start, end, mid, pos;
    start = 0;
    end = n;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            pos = mid;
            return pos;
        }
        else if (arr[mid] > key)
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return (-1);
}
int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int key;
    scanf("%d", &key);
    int pos = binary_search(arr, key, 10);
    printf("%d\n", pos);
    return 0;
}