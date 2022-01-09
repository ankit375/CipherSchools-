#include <bits/stdc++.h>
using namespace std;

int sum_to_close(int arr[],int n,int x){

    sort(arr,arr+n);
    int ans = 0;
    int diff = INT_MAX;
    for(int i = 0; i < n; i++){
        int left = i + 1;
        int right = n - 1;
        while(left < right){
            int temp = arr[left] + arr[right] + arr[i];
            if(abs(x - temp) < diff){
               ans = temp;
               diff = abs(x - temp);
            }
        if(temp == x) return temp;
        else if(temp > x) right--;
        else left++;
         }
      }
    return ans; 

}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<sum_to_close(arr,n,x)<<endl;


}