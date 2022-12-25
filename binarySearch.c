#include<stdio.h>

int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1; 
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            printf(mid);
        }

        else if(arr[mid]>key){
            end = mid - 1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;

}

int main() {
    int arr[] = {1, 2, 4, 5, 7, 9, 12, 16, 18, 22, 27, 30};
    int arrLength = sizeof(arr)/sizeof(int);
    int key = 18;
    int x = binarySearch(arr, arrLength, key);
}