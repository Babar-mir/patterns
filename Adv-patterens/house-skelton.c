#include<stdio.h>

int main(){
    int n=10;
     
    //roof or triangle
    for(int a=0;a<n;a++){
        for(int b=0;b<=n-a;b++){
            printf(" ");
        }
        for(int c=0;c<=a;c++){
            if(a==0){
                printf("* ");
            }
            else if (c==0||c==a)
            {
                printf("* ");
            }
            
            else{
                printf("  ");
            }
        }
    printf("\n");
    }
    //four walls
    for(int i = 0;i<n;i++){
        for(int j=0;j<=2*n+2;j++){
            if(i==0||i==n-1){
            printf("*");

            }
            else if (j==0|| j==2*n+2)
            {

                printf("*");
            }
            else{
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}