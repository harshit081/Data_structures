#include <stdio.h>
int linear_search(int arr[], int key, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int key;
    scanf("%d", &key);
    int pos = linear_search(arr, key, 10);
    printf("%d\n", pos);
    return 0;
}
