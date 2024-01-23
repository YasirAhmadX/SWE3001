//duplicate elements
#include<stdio.h>
int main(){
	int n;
	printf("Size of array: ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter elements %d: ",i);
		scanf("%d",&arr[i]);
	}
	//search
		
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){

				printf("Duplicate elements at %d, %d\n",i,j);
			}
		}
	}
}		
