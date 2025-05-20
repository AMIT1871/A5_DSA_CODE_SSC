// Array element's must be sorted that is a property of Binary search.

#include<stdio.h> 
 int main() { 
 int a[10], n, x, low, high; 

 printf(" Enter size of array is \n "); 
 scanf("%d", &n); 
 printf(" Enter the sorted elements of arrray is: \n "); 
 for( int i=0; i<n; i++ ){ 
 scanf("%d", &a[i]); 
 } 

printf(" ENTER NO. TO BE SEARCHED \n"); 
scanf("%d", &x); 

low = 0;
high = n-1;
int t=0, mid;
while(low <= high){
   mid = (low+high)/2;

if(a[mid]==x){
    t =1;
    break;
}
else if(a[mid]<x)  low = mid+1;
else high = mid-1;
}

if(t==0) printf("Not found \n");
else printf("Found at place : %d", mid+1);
 }



//------------------ BINARY SEARCH USE FUNCTION ----------------------------
// #include<stdio.h> 
// int binarysearch( int a[10] , int n , int x ){ 
//  int low , high , mid ,t = 0; 
// low = 0;
// high = n-1; 

// while(low <= high){ 
//  mid = (low+high)/2; 
//  if(a[mid]==x){ 
//  t = mid+1;
//  break; 
//  } 
//  else if(a[mid]<x)  low = mid+1; 
//  else  high = mid-1; 
//  } 
//  return(t); 
// } 

// int main() { 
//  int a[10], i, n, x, t; 
//  printf("\nEnter Size ="); 
//  scanf("%d",&n); 
//  printf("ENTER SORTED NOS \n"); 
//  for(i=0; i<n; i++){ 
//  scanf("%d",&a[i]); 
//  } 
//  printf("\nEnter the no. to be Search = "); 
//  scanf("%d",&x); 
//  t = binarysearch(a,n,x); 
//  if( t== 0) printf("\n No. Not Found "); 
//  else  printf("\nNo. is Found & Position=%d",t); 
//  } 
