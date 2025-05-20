//----------------------- BUBBLE SORT-----------------
//Bubble sort for digit's in array.
#include<stdio.h>
int main(){

int a[10], n;
printf("Enter size of array\n");
scanf("%d",&n);

printf("Enter elements  of array\n");
for(int i=0; i<n; i++)
scanf("%d",&a[i]);

for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
        if(a[j]>a[j+1]){
            int temp = a[j];
                a[j] = a[j+1];
              a[j+1] = temp;
        }
    }
}

printf("After sorting array is :\n");
for(int i=0; i<n; i++)
printf("%d\n",a[i]);
}


//-------------- BUBBLE SORT FOR NAME'S ----------------------------
// #include<stdio.h>
// #include<string.h>
// int main(){

// char a[10][40], t[40];
// int n;

// printf("Enter size of array\n");
// scanf("%d",&n);

// printf("Enter name's \n");
// for(int i=0; i<n; i++)
// scanf("%s",a[i]);

// for(int i=0; i<n-1; i++){
//     for(int j=0; j<n-i-1; j++){
//         if(strcmp(a[j],a[j+1])>0){
//             strcpy(t, a[j]);
//             strcpy(a[j], a[j+1]);
//             strcpy(a[j+1], t);
            
//         }
//     }
// }

// printf("After sorting name's is \n");
// for(int i=0; i<n; i++)
// printf("%s\n", a[i]);

// }


// --------------- INPUT 1 NAME LIKE 'PCTA' AND OUTPUT IS 'ACPT'
// #include<stdio.h>
// #include<string.h>
// int main(){

// char a[40], t;
// int n;

// printf("Enter a name\n");
// scanf("%s", a);

// n = strlen(a);
// for(int i=0; i<n-1; i++){
//     for(int j=0; j<n-i-1; j++){
//         if(a[i]>a[i+1]){
//             t = a[i];
//          a[i] = a[i+1];
//        a[i+1] = t;
//         }
//     }
// }

// printf("After sorting name is \n");
// printf("%s\n", a);

// }

