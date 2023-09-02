#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void reverse (int arr[],int N){
    int start = 0;
    int end =N-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void print_reverse(int arr[],int  N){
  for(int i=0; i<N;i++){
        cout<<arr[i];
    }  
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin>>N;
    int arr[N] ;
    for(int i=0; i<N;i++){
        cin>>arr[i];
    }
     reverse(arr , N);
    print_reverse(arr, N);
    return 0;
}
