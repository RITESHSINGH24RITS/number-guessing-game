#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
	int number,guess,nguesses;
	srand(time(0));
	number=rand()%100+1;//generate random no. b/w 1 to 100
	do{
		printf("guess the number between 1 to 100 \n");
		scanf("%d",&guess);
		 if(guess>number){
			printf("***lower number please***\n");
		}
		else if(guess<number){
			printf("***higer number please***\n");
		}
		else{
			printf("you guesses it in %d attempts\n",nguesses);
		}
		nguesses++;
		
			}while(guess!=number);
		
		getch();
	}


