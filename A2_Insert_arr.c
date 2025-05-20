// --------------- INSERTION IN ARRAY----------------------
// if arr size is : n
// so arr insertion are able to perform in : (n+1)th place

#include<stdio.h>
int main(){

int a[10] = {30,20,60,50};
int n=4, p;

printf("Enter position \n");
scanf("%d",&p);

if(p>n+1 || p<=0){
    printf("Insertion is not possible \n");
}
else{
    for(int i=n-1; i>=p-1; i--){
        a[i+1] = a[i];
    }


printf("Enter the new number : \n");
scanf("%d",&a[p-1]);
n++;

printf("After insertion array is :\n");
for(int j=0; j<n; j++){
    printf("%d\n",a[j]);
}
}
}
