#include <iostream>
using namespace std;
int n=9,k=3;
void printl(int A[]){
    for(int i =1; i<=k;i++) cout << A[i]<<' ';
    cout<<endl;
}
void backtrack(int i, int A[]){
    for(int j = A[i-1]+1;j<=n-k+i;j++){
        A[i] = j;
        if(i<k){
            A[i] = j;
            backtrack(i+1,A);
        }
        else{
            printl(A);
            return;
        }
    }
}
int main(){
    int A[k+1];
    A[0] = 0;
    backtrack(1,A);
    return 0;
}
