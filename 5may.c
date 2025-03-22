#include<stdio.h>
int main(){
    int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int i,j;
    printf("Original array\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d",a[i][j]);
            printf(" ");
        }
        printf(" ");
        printf("\n");
    }
    printf("Rotated matrix\n");
    for(int i=0;i<4;i++){
        for(int j=3;j>=0;j--){
            printf("%d",a[j][i]);
            printf(" ");
        }
        printf(" ");
        printf("\n");
    }
    return 0;
}
