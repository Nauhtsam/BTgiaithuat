#include <iostream>
using namespace std;
int n = 3,k =2;
void printl(int A[]){
    for(int i =0; i<k;i++) cout << A[i]<<' ';
    cout<<endl;
}

void backtrack(int i,int A[],int B[]){
    for(int j = 1;j<=n;j++){
        if(!B[j]){
            if(i<k){
                A[i] = j;
                B[j] = 1;
                backtrack(i+1,A,B);
                B[j] = 0;
            }
            else{
                printl(A);
                return;
            }
        }
    }
}
int main(){
    int B[n+1] = {0};
    int A[k];
    backtrack(0,A,B);
    return 0;
}
