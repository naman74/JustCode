#include <stdio.h>  
int temp;   
void Cocktail(int a[], int n)  
{  
    int is_swapped = 1;  
    int begin = 0,i;  
    int end = n - 1;  
   
    while (is_swapped) {  
        is_swapped = 0;  
     for (i = begin; i < end; ++i) {  
            if (a[i] > a[i + 1]) {  
            temp = a[i];  
        a[i]=a[i+1];  
        a[i+1]=temp;                  
        is_swapped = 1;  
            }  
        }  
 if (!is_swapped)  
            break;  
 is_swapped = 0;  
 for (i = end - 1; i >= begin; --i) {  
     if (a[i] > a[i + 1])   
    {  
          temp = a[i];  
      a[i]=a[i+1];  
      a[i+1]=temp;  
      is_swapped = 1;  
         }  
      }  
        ++begin;  
    }  
}  
   
int main()  
{  
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
    }
    Cocktail(arr, n);  
    printf("printing sorted array :\n");  
     for (i = 0; i < n; i++)  
        printf("%d ", arr[i]);  
    printf("\n");  
    return 0;  
}
