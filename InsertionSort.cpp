#include<iostream>
using namespace std;
void insertionSort(int n,int arr[]){
    for(int i=1; i<n ; i++){
        int temp=arr[i];
        int j=i-1;
        while(j>0){
             if(arr[j]>temp){
                //shift krdo
                arr[j+1]=arr[j];
             }else{
                //ruk jao
                break;
             }
            j--;
        }
        arr[j+1]=temp;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    insertionSort(n,arr);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
