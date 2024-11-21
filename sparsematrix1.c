#include<stdio.h>
int main(){
int a[m][n],count-0,j,m,n;
printf("Enter the lements:");
scamf("%d%d",&m,&n);
printf("Enter the elemts:");
for(int i=0;i<m;i++){
fot(j=0;j<n;j++){
scanf("%d",&a[i][j]);
}}
for(int i=0;i<m;i++){
fot(j=0;j<n;j++){
if(a[i][j]==0)
  count++;
}}
if(count>(m*n)/2)
  ptintf("Matrix is sparse");
else
  printf("Not a sparse matrox");
return 0;
}
