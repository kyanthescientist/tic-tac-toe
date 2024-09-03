#include<stdio.h>
#include <stdbool.h>
//inititalizing the win function which basically lists the various conditions for which the user will win.
int   win(int arr[3][3]){
    if(arr[0][0]==arr[0][1] && arr[0][1]==arr[0][2] ||
    arr[1][0]==arr[1][1] && arr[1][1]==arr[1][2] ||
    arr[2][0]==arr[2][1] && arr[2][1]==arr[2][2] ||
    arr[0][0]==arr[1][0] && arr[1][0]==arr[2][0] ||
    arr[0][1]==arr[1][1] && arr[1][1]==arr[2][1] ||
    arr[0][2]==arr[1][2] && arr[1][2]==arr[2][2] ||
     arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2] ||
      arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0] 
    )
    return 1;
}
int main(){ 
int  count=0;//count is for counting the number of turns that are gone.
int n;  int p ;// These variables will store the user input
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}; // main 2-D array. Initialised with 1,2,3... to make it easy for user to choose
    for( int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }// printing the array
    bool turn; turn  = true; // bool to keep track of the turn
  while(win( arr)!=1) { 
    
    if( turn ==true){
    printf("turn of the first player  ");
   

    scanf("%d", &n);
    if(n==1 && arr[0][0]!=0 && arr[0][0]!=-1){  //here just checking which value does the user have written and changing the corresponding value to 0
        arr[0][0]=0;        count++;
    }
      else if(n==2 && arr[0][1]!=0 && arr[0][1]!=-1){
        arr[0][1]=0;       count++;
    }
         else if(n==3 && arr[0][2]!=0 && arr[0][2]!=-1){
        arr[0][2]=0;       count++;
    }
         else if(n==4 && arr[1][0]!=0 && arr[1][0]!=-1){
        arr[1][0]=0;       count++;
    }
         else if(n==5 && arr[1][1]!=0 && arr[1][1]!=-1){
        arr[1][1]=0;       count++;
    }
         else if(n==6 && arr[1][2]!=0 && arr[1][2]!=-1){

        arr[1][2]=0;       count++;
    }
         else if(n==7 && arr[2][0]!=0 && arr[2][0]!=-1){
        arr[2][0]=0;       count++;
    }
           else if(n==8 && arr[2][1]!=0 && arr[2][1]!=-1){
        arr[2][1]=0;       count++;
    }
           else if(n==9 && arr[2][2]!=0 && arr[2][2]!=-1){
        arr[2][2]=0;       count++;
    }
   turn=false;
   
 
  }
 
  
  else if(turn ==false) {
printf("turn of the second player  ");
  

    scanf("%d", &p);
    if(p==1 && arr[0][0]!=0 && arr[0][0]!=-1){  // taking the value of the second user and making the changes in the array , also this time we use -1
        arr[0][0]=-1;
        count++;
    }
      else if(p==2  && arr[0][1]!=0 && arr[0][1]!=-1){
        arr[0][1]=-1;       count++;
    }
         else if(p==3  && arr[0][2]!=0 && arr[0][2]!=-1){
        arr[0][2]=-1;       count++;
    }
         else if(p==4  && arr[1][0]!=0 && arr[1][0]!=-1){
        arr[1][0]=-1;       count++;
    }
         else if(p==5 && arr[1][1]!=0 && arr[1][1]!=-1){
        arr[1][1]=-1;       count++;
    }
         else if(p==6  && arr[1][2]!=0 && arr[1][2]!=-1){
        arr[1][2]=-1;       count++;
    }
         else if(p==7  && arr[2][0]!=0 && arr[2][0]!=-1){
        arr[2][0]=-1;       count++;
    }
           else if(p==8 && arr[2][1]!=0 && arr[2][1]!=-1){
        arr[2][1]=-1;       count++;
    }
           else if(p==9  && arr[2][2]!=0 && arr[2][2]!=-1){
        arr[2][2]=-1;       count++;
    }
   turn=true;
    



  }
  for( int i=0; i<3; i++){  // printing the array afteer every turn of the user
        for(int j=0; j<3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    if(count ==9){   // Draw condition, if the count no. turns 9 then we can  break the loop and write draw
        printf("draw");
        break;
    }
    }
    
    if(turn ==false && count!=9){
        printf("the player one has won");
    }
    else if(turn ==true && count!=9){
        printf("the player two has won ");
    }
    }
