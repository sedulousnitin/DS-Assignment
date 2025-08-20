#include <iostream>
using namespace std;
int missing_number(int arr[], int n){
int sum = (n * (n+1))/2;
int arr_sum=0;
for(int i=0 ; i<n ; i++){
    arr_sum += arr[i];
}
return sum - arr_sum;
}
int main(){
int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
  cout<<"enter the elements of the sorted array"<<endl;
  for(int i=0 ; i< n ; i++){
    cin>>arr[i];
}
int missing = missing_number(arr, n);
    cout << "The missing number is: " << missing << endl;
return 0;
}
