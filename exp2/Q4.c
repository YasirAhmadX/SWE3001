//bubble sort
#include <stdio.h>
int main(){
	int n;
	printf("Size of array: ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter elemnt %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	//bubble sort

	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}					

