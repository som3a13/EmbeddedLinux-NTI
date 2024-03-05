#include <stdio.h>



int binary_search(int arr[],int left ,int right,int element)
{
    while (left<=right)
    {
        int mid= (left+right)/2;

        if(arr[mid]==element)
        {
            return mid;
        }
        if(arr[mid]>element)
        {
            right= mid-1;
        }
        else if (arr[mid]<element) {
            left=mid+1;
        }
        else
        {
            
        }
    }
   
    return -1 ;
}




int main()
{
        int arr[] = {2, 5, 7, 12, 15, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 15;
    int result = binary_search(arr, 0, n - 1, target);
    if (result == -1)
        printf("Element is not present in array\n");
    else
        printf("Element is present at index %d\n", result);
    return 0;
}
