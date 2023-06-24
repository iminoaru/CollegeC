#include<stdio.h>
int main(){
    
    int s1,s2,i,j;
    
    printf("enter size of row matrix :");
    scanf("%d",&s1);
    printf("enter the size of columb :");
    scanf("%d",&s2);
    int a[s1][s2];
    
    for(i=0;i<s1;i++){
        for(j=0;j<s2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int (*p)[s2]=a;
    
      for(i=0;i<s1;i++){
        for(j=0;j<s2;j++){
             printf(" %d ",p[i][j]);
        }
        printf("\n");
    }
    //transpose
     for(i=0;i<s1;i++){
        for(j=0;j<s2;j++){
             printf(" %d ",p[j][i]);
        }
        printf("\n");
    }
        
    return 0;
}