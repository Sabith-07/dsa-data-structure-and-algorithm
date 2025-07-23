// Online C compiler to run C program online
#include <stdio.h>
void selection_sort(int arr[],int n) {
    int i,j,min,temp;
    for(i=0; i<n-1; i++){
        min = i;
    for(j=i+1;j<n;j++){
        
        if(arr[j]<arr[min]){
            min = j;
        }
    }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    
}
int main(){
int arr[] = {2,7,8,9,15,18};
int n = sizeof(arr) / sizeof(arr[0]);
printf("sorted array\n");
for(int i=0; i<n; i++){
printf(" %d ",arr[i]);
}
}