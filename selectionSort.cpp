#include<iostream>
#include<vector>
using namespace std;
int find_min(vector<int> &arr,int n,int i){
    int min=arr[i],min_i=i;
    for(int j=i+1 ; j<n ; j++){
        // cout<<"in fnc"<<endl;
        // cout<<min_i<<" ";
        if(min>arr[j]){
            min=arr[j];
            min_i=j;
        }
        // cout<<endl;
    }
    return min_i;
}
int main(){
    int n,temp;
    cin>>n;
    vector<int> arr;
    for(int i=0 ; i<n ; i++){
        cin>>temp;
        arr.push_back(temp);
    }
    for(int i=0; i<n-1 ; i++){
        // cout<<"*"<<endl;
        int min_i=find_min(arr,n,i);
        // cout<<arr[i]<<" "<<arr[min_i]<<endl;
            temp=arr[min_i];
            arr[min_i]=arr[i];
            arr[i]=temp;
        //     cout<<i<<" "<<min_i<<endl;
        // cout<<arr[i]<<" "<<arr[min_i]<<endl;
    }
    cout<<"sorted array: "<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}
