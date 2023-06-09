 #include <stdio.h>  //Find the minimum from the ARRAY

int main(void){
   
   int array[100], i , n, min;

   printf("How many numbers? :");
   scanf("%d", &n);
   printf("Enter your %d numbers: ", n);

   for(i=0;i<n;i++){
    
    scanf("%d", &array[i]);



   }
   
   min=array[0];

   for(i=1;i<n;i++){
    
    if(min> array[i])
      
      min=array[i];



   }

   printf("The minimum here is %d", min);

}