#include<stdio.h>
#include<malloc.h>

int sorting_function(int *arr, int arr_len)
{
        int tmp, j, count=0;
        for(int k = arr_len / 2; k > 0; k /= 2)
        for(int i = k; i < arr_len; i++)
        {
            tmp = arr[i];
            for(j = i; j >= k; j -= k)
            {
                if(tmp < arr[j - k])
                    arr[j] = arr[j - k];
                else
                    break;
            }
            arr[j] = tmp;
        }
    return count;
}

int main() {
    int arr_len;
    scanf("%d",&arr_len);
    int *arr = (int*)malloc(sizeof(int) * arr_len);
    for(int i = 0; i < arr_len; i++)
    {
        scanf("%d",&arr[i]);
    }
    sorting_function(arr, arr_len);
    for(int i = 0; i < arr_len; i++)
    {
        printf("%d", arr[i]);
        if(i<arr_len-1)
        printf(" ");
    }
    free(arr);
    printf("\n");
}