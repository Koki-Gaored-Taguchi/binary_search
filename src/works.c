#include <stdio.h>

int n;
int k;
int A[100000];

unsigned int p(int x){
    int L=0;
    int i=0;
    while(i<n){
        int H=0;
        while(H<=x){
            H=H+A[i];
            i=i+1;
    }
        L=L+1;
        i=i-1;
}
    return L<=k;
}


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    int Max=A[0];
    for (i=1; i<n; i++){
        if(A[i]>Max){Max=A[i];}
    }
    lb=Max-1;
    int Sum;
    for(i=0; i<n; i++){
        Sum=Sum+A[i];
    }
    ub=Sum;
    while(ub-lb>1){
        int m=(ub+lb)/2;
        if(p(m)){ub=m;}
        else{lb=m;}
    }
    printf("%d\n", ub);
  return 0;
}
