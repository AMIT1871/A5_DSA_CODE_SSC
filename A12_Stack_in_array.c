#include<stdio.h>
#include<stdlib.h>
int s[10], top=-1, n=5, i, x;  // globle variable

void push(){
    if(top==n-1) printf("Stac is overflow\n");
    else{
        printf("Enter any no  = ");
        scanf("%d",&x);
        top = top+1;
     s[top] = x;
    }
}

void pop(){
    if(top==-1) printf("Stack is empty");
    else{
        x = s[top];
        printf("Deleted no is : %d", x);
        top = top-1;
    }
}

void display(){
    if(top==-1) printf("Stack is empty\n");
    else{
        printf("Stack value's is... \n");
        for(int i=top; i>=0; i--)
        printf("\t|%d|\n",s[i]);
    }
}

int main(){
int d;
while(1){
    printf("\n\t\tMANU OF STAC \n");
    printf("\t*********************************** \n");
    printf("\t 1. PUSH an element in stack \n");
    printf("\t 2. POP an element in stack \n");
    printf("\t 3. DISPLAY an element in stack \n");
    printf("\t 4. EXIT to program \n\n");
    printf("Enter any choice \n");
    scanf("%d",&d);
    
switch(d){
    case 1: push(); break;
    case 2: pop(); break;
    case 3: display(); break;
    case 4: exit(0);
    default : printf("You are enterd invalid input\n");
}  // switch      
}  // while
}  // main






