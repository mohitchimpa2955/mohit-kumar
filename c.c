#include <stdio.h>   

void show(int arr[]){
int i;
   for(i=0;i<10;i++){
      printf("i=%d   :   val=%d\n",i, arr[i]);
   }

}




int main(){
   int arr[10];
   int val = 10;
   for(int i=0;i<5;i++){
      scanf("%d",&arr[i]);
   }

   show(arr);
   for(int i=5;i>0;i--){
      arr[i] = arr[i-1];
   }
   printf("after shifting\n");
   show(arr);
   arr[0] = val;

   show(arr);
   
   return 0;
}