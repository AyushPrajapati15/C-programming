// search an element in an array

#include<stdio.h>
int main()
{
	int arr[9]={10,20,30,40,50,60,70,80,90},search=50,i,count=0;
    printf("The elements of array are\n");
	for(i=0;i<=8;i++)
    {
        printf("%d ",arr[i]);
    }
	for(i=0;i<=8;i++){
		if(arr[i]==search){
			count=1;
			break;
		}
	}
	if(count==1){
		printf("\n%d is found successfully\n",search);
	}
	else{
		printf("\n%d is not found\n",search);
	}
	
	return 0;
}
