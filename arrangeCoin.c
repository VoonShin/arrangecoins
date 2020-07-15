#include <stdio.h>
#include <stdlib.h>

int arrangeCoins(int n){
    int k=0;
    int tmp=0;
    int left, current;
    
    for(int i=1; i<=n; ++i){
        for(int j=0; j<i; ++j){
            k++;
            tmp = k;
            current += k;
        }
        left = n-current;
        if(left<=tmp){
            return tmp;
        }
        k=0;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int ans = arrangeCoins(n);
    printf("%d\n", ans);
    
    return 0;
    
}