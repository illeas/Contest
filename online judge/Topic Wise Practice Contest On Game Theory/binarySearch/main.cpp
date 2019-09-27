#include<iostream>
using namespace std;


int binarySearch(int arr[], int l, int h, int x){
    if (h >= l){
        int mid = (l+h)/2;
        if(arr[mid] == x)
            return mid;
        else if(arr[mid] > x){
            return binarySearch(arr, l, mid-1, x);
        }
        else{
            return binarySearch(arr,mid+1,h,x);
        }
    }
    return -1;
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++)
        cout << arr[i] << " "; //printing single elements
    cout << endl; //printing newline
}

int main(){
    int arr[] = {10, 15, 21, 31, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    int result = binarySearch(arr,0,n-1,31); //we are looking for 31
    if(result == -1)
        cout << "Not found!" << endl;
    else cout << "Result found at index: " << result << endl;
    return 0;
}
