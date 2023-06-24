/*This is a program for check whether three points are collinear or not */

#include<stdio.h>

int main(){
    
    float x1,y1,x2,y2,x3,y3;
    
    printf("enter the coordinates of points ,ie,x1,y1,x2,y2,x3,y3 respectively: \n");
   
    scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
   
    if(((y2-y1)/(x2-x1))==((y3-y2)/(x3-x2))){
        printf("points fall on staight line");
    }
    else{
        printf("points do not fall on a straight line");
    }
    return 0;
}