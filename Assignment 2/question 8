#include <iostream>
using namespace std;
void duplicates(int arr[] , n){
int unique_count = 1;
for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            unique_count++;
        }
    }
    return unique_count;
}

int main(){
    int n;
      cout << "Enter the number of elements in the array: ";
      cin >> n;
    int arr[n];
      cout << "Enter the elements of the sorted array" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    int result = countUnique(arr, n);
      cout << "Number of unique elements: " << result << endl;
    }
