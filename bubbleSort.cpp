#include<iostream>
using namespace std;
void sort(int arr[],int n){
    int temp;
    for(int i=0 ; i<n-1 ; i++){
        bool swapped=false;
        for(int j=0 ; j<n-i-1 ; j++){
            if(arr[j+1]<arr[j]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}
int main(){
    int n,temp;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    sort(arr,n);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
