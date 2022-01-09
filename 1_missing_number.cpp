#include<bits/stdc++.h>
using namespace std;


int find_missing_no(int arr[],int n){

    int sum_of_n = n * (n+1)/2;

    for(int i=0;i<n;i++){
        sum_of_n -= arr[i];
    }
    return sum_of_n;
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<find_missing_no(arr,n)<<endl;


}