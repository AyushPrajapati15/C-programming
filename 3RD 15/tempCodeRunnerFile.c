// WAp to find the second largest element in an array
// #include<stdio.h>
// int main(){
//  int a[5],i,j=0,max1,max2;
//   printf("Enter 10 elements in to the array: ");
//   for(i=0;i<5;i++)
//       scanf("%d",&a[i]);
//   max1=a[0];
//   for(i=1;i<5;i++){
//       if(max1<a[i]){
//            max1=a[i];
//            j = i;
//       }
//   }
//   max2=a[5-j-1];
//   for(i=1;i<5;i++){
//       if(max2 <a[i] && j != i)
//           max2 =a[i];
//   }
//   printf("Second biggest: %d", max2);
//   return 0;
// }