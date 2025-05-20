#include<stdio.h>
int main(){
 
 int a[10], b[10], c[20], n1, n2;
 printf("Enter size of first table\n");
 scanf("%d", &n1);
 printf("Enter sorted elements of frist table \n");
 for(int i=0; i<n1; i++)
    scanf("%d",&a[i]);

printf("Enter size of Second table\n");
 scanf("%d", &n2);
 printf("Enter sorted elements of second table \n");
 for(int j=0; j<n2; j++)
    scanf("%d",&b[j]);

int i=0, j=0, k=0;
while(i<n1 && j<n2){

   if(a[i]<b[j]){
     c[k] = a[i];
     i++; k++;
   }

   else if(a[i]>b[j]){
    c[k] = b[j];
    j++; k++;
   } 

   else{
    c[k] = a[i];
    i++; j++; k++;
   }
}// while

while(i<n1){
    c[k] = a[i];
    i++; k++;
}

while(j<n2){
    c[k] = b[j];
    j++; k++;
}

printf("\nAfter mearging table is \n");
for(int t=0; t<k; t++)
printf("%d\n",c[t]);
}




