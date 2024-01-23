//stud struct
#include<stdio.h>


struct StudentDetail{
	char regNo[10];
	char name[20];
	char branch[10];
	char DoB[10];
	int marks[5];
	char grade;
};

int main(){
	struct StudentDetail stud;
	printf("Enter student name: ");
	scanf("%s",stud.name);
	printf("Enter reg no.: ");
	scanf("%s",stud.regNo);
	printf("branch :");
	scanf("%s",stud.branch);
	printf("DoB :");
	scanf("%s",stud.DoB);
	
	for(int i=0;i<5;i++){
		printf("Enter marks of subj %d:",i+1);
		scanf("%d",&stud.marks[i]);
	}
	
	float avg=0;
	for(int i=0; i<5;i++){
		avg = avg + stud.marks[i];
	}
	avg = avg/5;

	if(avg>90){
		stud.grade = 'S';
	}
	else if(avg>80){
		stud.grade = 'A';
	}
	else if(avg>70){
		stud.grade = 'B';
	}
	else if(avg>60){
		stud.grade = 'C';
	}
	else if(avg>50){
		stud.grade = 'D';
	}
	else{
		stud.grade = 'F';
	}

    printf("student details");
    printf("name: %s",stud.name);
    printf("reg no: %s",stud.regNo);
    printf("branch: %s", stud.branch);
    printf("DoB: %s", stud.DoB);
    printf("avg marks: %f",avg);
    printf("Grade: %c",stud.grade);
}






	
