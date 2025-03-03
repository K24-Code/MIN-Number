#include<iostream>
#include<limits.h>
using namespace std;

int findMin(int arr[], int size){
    int minAns=INT_MAX;
    for(int i=0; i<size; i++){
         minAns= min(minAns, arr[i]);  //DUBARA INT NHI LIKHNA HAI 
    }
    return minAns;
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[90];
    for(int i=0; i<size; i++){
        cout<<"Enter the input values of index: "<<i<<endl;
        cin>>arr[i];
    }

    cout<<"Minimum number is: "<<findMin(arr, size) <<endl;

    return 0;
}