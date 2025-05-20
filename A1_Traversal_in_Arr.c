// ------- INPUT AND PRINT ARRAY ----------------------------
// IS CAULD ARRY TRAVERSAL

#include<stdio.h>
int main(){
int a[10], n;

printf("Enter the size of array\n");
scanf("%d",&n);

printf("enter array element's\n");
for(int i=0; i<n; i++){
  scanf("%d", &a[i]);
}

printf(" \narray element's is :\n");
for(int i=0; i<n; i++){
  printf("%d\n", a[i]);
}
}