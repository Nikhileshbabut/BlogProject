#include <iostream>
using namespace std;
//sort the elements in increasing order
void bubblesort(int a[], int n){
  for (int t=1; t<=n-1; t++){
    //repeated swapping
    for(int j=0; j<=n-t-1; j++){
      if (a[j]>a[j+1]){
        swap(a[j], a[j+1]);
      }
    }
  }
}
int main(){
  int arr[]={-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n=sizeof(arr)/sizeof(int);
  bubblesort(arr, n);
  for (auto x: arr){
    cout<<x<<",";
  }
  return 0;
}
