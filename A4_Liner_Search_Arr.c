// -------------- LINEAR SEARCH ------------------------
// Linear search and sequential search are same

#include<stdio.h>
int main(){

int a[10], n, x;
printf("Enter size of array is:\n");
scanf("%d",&n);

printf("Enter the elements of array \n");
for(int i=0; i<n; i++){
scanf("%d",&a[i]);
}

printf("Enter the vlaue you want to searc\n");
scanf("%d",&x);
int t=0;
for(int i=0; i<n; i++){
    if(a[i]==x){
        printf("Found and place is : %d",i+1);
        t=1;
        break;
    }
}
if(t==0) printf("Not found \n");
 }


// ---------------- Liner search fo character ---------------------
// #include<stdio.h>
// #include<string.h>
// int main(){

// char a[10][40], x[10];
// int n;
// printf("Enter size of array is:\n");
// scanf("%d",&n);

// printf("Enter the name's  \n");
// for(int i=0; i<n; i++){
// scanf("%s", a[i]);
// }

// printf("Enter the name you want to searched \n");
// scanf("%s", x);
// int t=0;
// for(int i=0; i<n; i++){
//     if(strcmp(a[i],x)==0){
//         printf("Found and place is : %d",i+1);
//         t=1;
//         break;
//     }
// }
// if(t==0) printf("Not found \n");
// }


// ENTER STRING AND SEARCH HOW MANY TIMES PERTICULER CHARACTER ARE 
// COMES IN STRING ?
// INPUT - INDIA
// SEARCH - I
// OUTPUT - 2

// #include<stdio.h>
// #include<string.h>
// int main(){

// char a[10], x;
// int n, t=0;

// printf("Enter a name  \n");
// scanf("%s", a);

// printf("Enter the name you want to searched \n");
// fflush(stdin);  // whay we can use this
// scanf("%c", &x);

// n = strlen(a);
// for(int i=0; i<n; i++){
//     if(a[i]==x) t++;
// }
// if(t==0) printf("Not found \n");
// else printf("No. of times - %d", t);
// }

 

 

