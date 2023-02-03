//array
#include <iostream>
using namespace std;

void printArray(int arr[],int size) {
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool linerSearch(int *arr,int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) 
          return true;
    }
    return false;
}

bool binarySearch(int arr[],int size,int key) {
    int low = 0;
    int hi = size-1;

    while(low <= hi) {
        int mid = low + (hi-low)/2;
        if(arr[mid] == key) 
           return true;

        if(arr[mid] < key)
           low = mid+1;
        else 
           hi = mid-1;      
    }
    return false;
}

void reverse(int arr[],int size) {
    int start = 0;
    int end = size-1;

    while(start <= end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void sorted(int arr[],int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


int main() {

    //Initializing arrays

    int foo1[5];
    foo1[0] = -10;
    foo1[1] = 50;
    foo1[2] = 200;
    foo1[3] = 4;
    foo1[4] = 76;

    int foo2 [5] = { 12071, 2, 77, 40, 16 };


    // print array 

    for(int i = 0; i < 5; i++) {
        cout<<foo1[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<5;i++) {
        cout<<foo2[i]<<" ";
    }
    cout<<endl;

    //liner search 

    int key;
    cin>>key;

    if(linerSearch(foo1,5,key)) {
        cout<<"YES!"<<endl;
    }
    else{
        cout<<"NO!"<<endl;
    }

    //binary search

    if(binarySearch(foo2,5,key)) 
       cout<<"YES!"<<endl;
    else  
       cout<<"NO!"<<endl;   


    sorted(foo2,5);

    printArray(foo2,5);   

    


    
    return 0;
}