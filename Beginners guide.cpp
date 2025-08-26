#include<stdio.h>

int Quiz(){//Function for Ics background student (choice =1) that returns the score of the user
    int score=0 ,option;  
        printf("Giving you a small quiz!\n");
		printf("Q1: Which of the following is valid in C?\n");
		printf("1. int K:0 \n 2. intK;\n 3.int K03\n");
		scanf(" %d",&option);
		if(option== 2){
			score= score + 1;
		}
		printf("Q2:What does int,float,char represent in C?\n");
		printf("1.integer,floating point,character\n 2.instrument,float,character\n 3.inter,floater,charater\n");
		scanf(" %d",&option);
		if(option==1){
			score = score + 1;
		}
		printf("Q3:What is the default return type of a function in C if it is not specified?\n");
		printf("1.int\n 2.void \n 3.float \n");
		scanf(" %d",&option);
		if(option ==1){
			score = score + 1;
		}
		printf("Q4:Which of the following is the correct format specifier to print an integer in C?\n");
    	printf("1. %%d\n 2.%%f\n 3.%%c\n");

		scanf(" %d",&option);
		if(option==1){
			score = score + 1;
		}
	
	return score;
}
int Choice1(){//Function for Choice 1/ ICS background
	int score= Quiz();
	if(score==4){
		printf("You should consider 'Head First C',by David Griffiths\n Learn the concepts you are weak in and learn and keep practicing\n Also work on small projects side by side\n");
		printf("Refer to Youtube channel Free.code camp.org");
	}
	if(score>= 2){
		printf("You are mid and know a few basics \n Kindly refer to book 'C programming A mordern approach',by K.N.King\n Find the topics you are weak in and learn them\n");
		printf("Kindly refer to Youtube playlist of Jenny's Lectures C playlist', and 'Neso Academy'\n");
		printf("Practice a small amount of questions daily, keep revising too!\n");
}
    if(score< 2){
    	printf("Kindly start from the book 'Let us C'. read the theory understand the examples \n. For practice questions refer to 'Programming in ANSIC'and 'Head First C'\n");
    	printf("Refer to 'Jenny's Lectures on C' on Youtube and 'Neso Academy'\n");
    	printf("Take help from Chat Gpt or other AI but only for understanding a topic, asking for practice problems\n. Refrain from copy pasting code because it can kill your logic building which is very important\n");
	}
	
}
int Choice2(){
	printf("As you are just a beginner, follow these steps\n");
	printf("Watch the crash course Computer science (first 6 videos)for introduction\n Watch C550 intro lecture  to understand why we need programming languages\n");
	printf("Start reading text of 'Let us C 'book and while skipping the exercise pair with exercise of 'Head Fisrt C'\n");
	printf("For Youtube please refer to 'Apna College','Jenny's Lectures', and 'Code with Harry'\n");
}
int main(){
	int choice;
	printf("Welcome to your personal Programming guide\n");
	printf("Please enter '1' for Ics background and '2'for others:\n");
	scanf(" %d",&choice);
	if (choice==1){
		Choice1();
	}
	else if(choice==2){
		Choice2();
	}
	else{
		printf("Wrong choice entered please retry!");
	}
	return 0;
}

	