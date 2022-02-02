#include <stdio.h>
void swap(int x,int y){        //function to swapp two numbers without using a temporary variable 
   x=x+y;  //  -->1st 
   y=x-y;  // Using 1st -> y= (x+y)-y = x -->2nd
   x=x-y;  // x= (x+y)-x = y  -->Using 2nd 
   printf("The values of X after swaping : %d \n",x);x
   printf("The values of Y after swaping : %d \n",y);
}                                         
int main(){
int x,y;   //initalizing variables which will store the numbers
printf("Enter the value of X: ");
scanf("%d",&x);  //taking input of first number from the user 
printf("Enter the value of Y: ");
scanf("%d",&y);  //taking the input of second number from the user 
printf("The value of X before swaping : %d \n",x);    //printing X Before swaping
printf("The value of Y before swaping : %d \n",y);    //printing Y Before swaping
swap(x,y);  //function called to swap both X and Y                      
return 0;
}
