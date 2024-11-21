#include<stdio.h>
int main(){
int a[m][n],i,j,m,n,b[5][3];
printf('Enter the size of row and column:");
scanf("%d%d",&m,&n);
printf("Enetr a sparse matrix");
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
scanf("%d",&a[i][j]);}}
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
if(a[j][j]!=0){
count++;
b[count][0]=i;
b[count][1]=j;
b[count][2]=a[i][j];
}}}
b[0][0]=m;
b[0][1]=n;
b[0][2]=count;
printf("Triplet transformation:");
for(int i=0;i<count;i++){
for(int j=0;j<3;j++){
printf("%d",a[i][j]);
}}}


