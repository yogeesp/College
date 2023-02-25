#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void merge_sort(int *arr, int low, int high);
void merge(int *arr, int low, int mid, int high);

int main()
{
    int arr1[10];
    int arr2[10]={500,1000,1500,2000,2500,3000,3500,4000,4500,5000};
    int arr3[10]={10000,9500,9000,8500,8000,7500,7000,6500,6000,5500};

    double start, end,time_taken;
    
    for(int i = 0; i < 10; i++)
    {
        arr1[i] = rand() % 10000;
    }
    start = clock();
    merge_sort(arr1, 0, 9);
    end = clock();
    time_taken = (end - start)/CLOCKS_PER_SEC;
    printf("Sorted random array: ");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("Time taken for sorting random array: %d",time_taken);
    start=0.0;
    end=0.0;
    time_taken=0.0;
    printf("\n");
    printf("\n");
    start=clock();
    merge_sort(arr2, 0, 9);
    end=clock();
    time_taken=(end-start)/CLOCKS_PER_SEC;
    printf("Sorting on sorted array: ");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    printf("Time taken for sorting already sorted array: %d",time_taken);
    start=0.0;
    end=0.0;
    time_taken=0.0;
    printf("\n");
    printf("\n");
    start=clock();
    merge_sort(arr3, 0, 9);
    end=clock();
    time_taken=(end-start)/CLOCKS_PER_SEC;
    printf("Merge sort on reverse sorted array: ");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    printf("Time taken for sorting reverse sorted array: %d",time_taken);

}

// merge sort
void merge_sort(int *arr, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
void merge(int *arr, int low, int mid, int high)
{
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[low + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = arr[mid + 1 + j];
    }
    i = 0;
    j = 0;
    k = low;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}