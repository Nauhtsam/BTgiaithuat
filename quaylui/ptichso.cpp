#include <iostream>
using namespace std;
int n =6;

void printl(int A[],int k){
    for(int i =1; i<=k;i++) cout << A[i]<<' ';
    cout<<endl;
}

void backtrack(int i, int T[],int A[]){
   for(int j = A[i-1];j<=(n-T[i-1])/2;j++){
            A[i] = j;
            T[i] = T[i-1]+A[i];
            backtrack(i+1,T,A);
   }
   A[i] = n-T[i-1];
   printl(A,i);
}
int main(){
    int T[n+1];
    int A[n+1];
    T[0] = 0;
    A[0] = 1;
    backtrack(1,T,A);
}
