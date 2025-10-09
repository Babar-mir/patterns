#include<stdio.h>

int main(){
    int n=5;
    for(int i =0;i<n;i++){
        for(int j=0; j<n-i;j++){
            printf(" ");
        }
        for(int k =0 ;k<=i;k++){
            if(i==0||i==n-1){
            printf("* ");

            }
            else if (k==0||k==i)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
            
        }
        printf("\n");
    }
    return 0;
}