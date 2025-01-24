#include<stdio.h>
int main(){
    int a[3][3]={{2,3,5},{6,7,8},{4,1,9}};
    int pds=0,sds=0,j=2;
    for(int i=0;i<3;i++){
        pds=pds+a[i][i];
    }
    for(int i=0;i<3;i++){
    
            sds=sds+a[i][j];
            j--;
        }
    
    printf("Primary diagonal sum:%d",pds);
    printf("\nSecondry diagonal sum:%d",sds);
}
