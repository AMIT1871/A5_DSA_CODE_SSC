#include<stdio.h>
#include<stdlib.h>

int q[10], f=-1, r=-1, i, n=4,x;

void qinsetr(){
   if(r==n-1) printf("QUE is overflow\n");
   else{
    printf("Enter element which you want to insert\n");
    scanf("%d",&x);
    if(f==-1 && r==-1) f=r=0; // if que is empty
    else  r = r+1;            // if que is non empty
    q[r] = x;
   }
}

void qdeletion(){
    if(r==f) printf("QUE is empty\n");
    else{
        x = q[f];
        printf("Deleted element is : %d", x);
        if(f==r) f=r=-1;  // if single element
        else f = f+1;     // more than one element
    }
}

void qdisplay(){
    if(f==r) printf("QUE is empty\n");
    else{
        for(i=f; i<=r; i++)
        printf("%4d", q[i]);
    }
}
int main(){
    int d;
    while(1){
        printf("----------------------- MENU ---------------------\n\n");
        printf("\t\t 1.insertion\n");
        printf("\t\t 2.deletion\n");
        printf("\t\t 3.print\n");
        printf("\t\t 4.Exit\n\n");
        printf("choose any one option\n");
        scanf("%d",&d);

    switch(d){
       case 1: qinsetr();
       case 2: qdeletion();
       case 3: qdisplay();
       case 4: exit(0);
       default : printf("Invalid choice\n");
    }
    }
}