//change case program
#include <stdio.h>
int main(){
	char str[100];
	printf("Enter the string: ");

	scanf("%[^\n]%*c",str);

	printf("Original String: ");
	/*
	for(int i=0;str[i]!='\0';i++){
		printf("%c",str[i]);
	}
	*/	
	printf("Altered String=: "); 
	for(int i=0;str[i]!='\0';i++){
		if(str[i]>64 && str[i]<91){
			printf("%c",str[i]+32);
		}
		else{
			if(str[i]>96 && str[i]<123){
				printf("%c",str[i]-32);
			}
			else{
				printf("%c",str[i]);
			}
		}
	}
	printf("\n")
}

