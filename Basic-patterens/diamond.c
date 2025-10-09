#include<stdio.h>

int main(){
    int n = 5;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<=n-i-1;j++){
            printf(" ");
        }
            for(int k=0 ;k<=i;k++){
                printf("* ");
                 
            }
        
    printf("\n");
}
    for(int l = 1 ; l<n;l++){//for sharper l=1 else l=0
        for(int m = 0; m<=l;m++){
            printf(" ");
        }
        for(int p=0;p<=(n-l-1);p++){
            printf("* ");
        }
    printf("\n");
    }
    return 0;
}