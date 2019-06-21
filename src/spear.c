#include <stdio.h>

int n;
int k;
int A[100000];


unsigned int p(unsigned int x){
    int L=0;
    int i;
    for(i=0; i<n; i++){
        L+=(A[i]/x);
        
    }
    return L>=k;
}


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    long long int Sum=0;
    for(i=0; i<n; i++){
        Sum=Sum+A[i];
    }
    ub=(Sum/k)+1;
    int Max=A[0];
    for (i=1; i<n; i++){
        if(A[i]>Max){Max=A[i];}
    }
    lb=Max/k;
    while(ub-lb>1){
        int m=(ub+lb)/2;
        if(p(m)){lb=m;}
        else{ub=m;}
    }
    printf("%d\n", lb);

  return 0;
}
