#include<stdio.h> 
#include<stdlib.h> 
int s[10] , n = 5 , top1 = -1 , top2 = 5 , i , x ;   // whay top2=n is not valid statement
void push1(){ 
 if(top1==top2-1) printf("Stack1 Overflow\n"); 
 else{ 
 printf("Enter any No.="); 
 scanf("%d",&x); 
 top1 = top1 + 1; 
 s[top1] =x; 
 } 
} 

void pop1(){ 
 if(top1==-1) printf("Stack1 Underflow\n"); 
 else{ 
 x=s[top1]; 
 printf("Deleted Element=%d\n",x); 
 top1 = top1 - 1; 
 } 
}

void display1(){ 
 if(top1==-1) printf("Empty Stack1\n"); 
 else{ 
 printf("\nStack1 Values...\n\n"); 
 for( i = top1 ; i >= 0 ; i-- ){ 
 printf("\t------\n"); 
 printf("\t| %d |\n",s[i]); 
 } 
 } 
} 

void push2(){ 
 if(top2 == top1+1) printf("Stack2 Overflow\n"); 
 else { 
 printf("Enter any No.="); 
 scanf("%d",&x); 
 top2 = top2 - 1; 
 s[top2] = x ; 
 } 
}

void pop2(){ 
 if(top2==n) printf("Stack2 Underflow\n"); 
 else { 
 x = s[top2]; 
 printf("Deleted Element=%d\n",x); 
 top2 = top2 + 1; 
 } 
} 

void display2(){ 
 if(top2 == n) printf("Empty Stack2\n"); 
 else { 
 printf("\nStack2 Values...\n\n"); 
 for( i = top2 ; i <= n-1 ; i++ ){ 
 printf("\t------\n"); 
 printf("\t| %d |\n",s[i]); 
 } 
 } 
} 

int main(){ 
 int p,q,r; 
 while(1){ 
    printf("\n\t\t\t\tMAIN MENU"); 
    printf("\n\t\t\t************"); 
    printf("\n\t\t\t\t 1. STACK1"); 
    printf("\n\t\t\t\t 2. STACK2"); 
    printf("\n\t\t\t\t 3. QUIT"); 
    printf("\n\t\t\t***********************"); 
    printf("\n\t\tEnter Your Choice :"); 
   scanf("%d",&p); 

 switch(p){ 
   case 1: 
        printf("\n\t\t\t\tMENU OF STACK1"); 
        printf("\n\t\t\t**********************"); 
        printf("\n\t\t\t\t 1. Push Stack1"); 
        printf("\n\t\t\t\t 2. Pop Stack1"); 
        printf("\n\t\t\t\t 3. Display Stack1"); 
        printf("\n\t\t\t\t 4. Return Main Menu"); 
        printf("\n\t\t\t***********************"); 
        printf("\n\t\tEnter Your Choice :"); 
        scanf("%d",&q); 

 switch(q){ 
    case 1 : push1(); break; 
    case 2 : pop1(); break; 
    case 3 : display1(); break; 
    case 4 : break; 
    default : printf("Invalid Choice\n"); 
 } 
 break; 
 case 2: 
 printf("\n\t\t\t\tMENU OF STACK2"); 
 printf("\n\t\t\t***********************"); 
 printf("\n\t\t\t\t1. Push Stack2"); 
 printf("\n\t\t\t\t2. Pop Stack2"); 
 printf("\n\t\t\t\t3. Display Stack2"); 
 printf("\n\t\t\t\t4. Return Main Menu"); 
 printf("\n\t\t\t***********************"); 
 printf("\n\t\tEnter Your Choice :"); 
 scanf("%d",&r); 

 switch(r){ 
      case 1 : push2(); break; 
      case 2 : pop2(); break; 
      case 3 : display2(); break; 
      case 4 : break; 
      default : printf("Invalid Choice\n"); 
 } 
 break; 
 case 3: exit(0); 
 default : printf("Invalid Choice\n"); 
 } 
 } 
}