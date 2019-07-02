#include <stdio.h>

int n;
int k;
int A[100000];


unsigned int p(unsigned int x){
    int L=0;
    int i;
    for(i=0; i<n; i++){
        L+=(((A[i]-1)/x)+1);
    }
    return L<=k;
}

int main(){

}
