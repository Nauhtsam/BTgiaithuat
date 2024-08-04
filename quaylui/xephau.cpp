#include <iostream>
using namespace std;
int n = 8;
int F = n-1;

void printl(int A[],int k){
    for(int i=1; i<=k;i++) cout <<i<<' '<<A[i]<<" -- ";
    cout<<endl;
}

void printl2(int A[],int k){
    for(int i = 1;i<=k;i++){
        for(int j = 1; j<=k;j++){
            if(j==A[i]) cout << "H ";
            else cout << "* ";
        }
        cout << endl;
    }
    cout << "--------------------------" << endl;
}
void backtrack(int i,bool A[],bool B[],bool C[],int X[]){

    for(int j = 1;j<=n;j++){
        if(!A[j] && !B[i+j] && !C[i-j+F]){
            X[i] = j;
            if(i>=n){
                printl1(X,i);
                return;
            }
            A[j] = 1; B[i+j] =1;C[i-j+F]=1;
            backtrack(i+1,A,B,C,X);
            A[j] = 0; B[i+j] =0;C[i-j+F]=0;
        }
    }
}
int main(){
    bool A[n+1] = {0};
    bool B[n*2+1] = {0};
    bool C[(n-1)*2+1] {0};
    int X[n+1];
    backtrack(1,A,B,C,X);
}
