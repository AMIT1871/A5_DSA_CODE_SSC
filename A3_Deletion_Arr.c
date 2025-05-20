// --------------- DELETION IN ARRAY----------------------
// if arr size is : n
// so arr insertion are able to perform in : (n)th place

#include<stdio.h>
int main(){

int a[10] = {30,12,60,80,11};
int n=5, p;

printf("Enter position \n");
scanf("%d",&p);

if(p>n || p<=0){
    printf("Insertion is not possible \n");
}
else{
    for(int i=p-1; i<n-1; i++){
        a[i] = a[i+1];
    }
n--;
printf("After deletion array is :\n");
for(int j=0; j<n; j++){
printf("%d\n",a[j]);
}
}
}

