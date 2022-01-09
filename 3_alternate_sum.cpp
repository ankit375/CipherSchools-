#include <bits/stdc++.h>
using namespace std;

int max_num(int a,int b) {
    if(a>b){
        return a;
    }
    return b;
}

int alternate_sum(int arr[],int n){

    int max_sum_1 = arr[0];
    int max_sum_2 = 0;
    int temp;
    for(int i = 1; i<n;i++){
        temp = max_num(max_sum_1,max_sum_2);
        max_sum_1 = max_sum_2 + arr[i];
        max_sum_2 = temp;
    }
    return max_num(max_sum_1,max_sum_2);

}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i<n; i++) {
        cin>>arr[i];
    }
 
    cout<<alternate_sum(arr,n)<<endl;


}