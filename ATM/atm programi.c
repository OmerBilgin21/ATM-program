#include<stdio.h>
#include<string.h>

struct atm{
	
	char name[30];
	int cusNo;
	int money;
	
}user[3];
int musterino(){

	int muno;
	int a,c;
		
		
		do{
			
			printf("Customer Number :");
			scanf("%d",&muno);
			
			switch(muno){
				case 11111:
					a=0;
					c=3;
					break;
				case 22222:
					a=1;
					c=3;
					break;
				case 33333:
					a=2;
					c=3;
					break;
				default :
					printf("You entered the wrong customer number, please try again.\n");
					c=2;
			}
	
		}while(c == 2);
	
	return a;

}

int main(){
	
	strcpy(user[0].name,"Omer Faruk Bilgin");
	strcpy(user[1].name,"Umut Terlemez");
	strcpy(user[2].name,"Cem Bulbul");
	
	user[0].cusNo=11111;
	user[1].cusNo=22222;
	user[2].cusNo=33333;
	
	user[0].money=1200;
	user[1].money=1200;
	user[2].money=1200;
	
	
	int islem,pyat,yatmik,cekmik;
	int result,i,k;
	int muno,pyatmuno;
	
	do{
	
	
	printf("Welcome, please enter the result of 7+3*2-4/2 to log in.\n");
	scanf("%d",&result);
	switch(result){

	case 11:
	muno = musterino();
		
	do{
		
		
		printf("Dear: %s please choose the operation that you want to do:\n",user[muno].name);
		printf("To deposit money please press 1,\n");
		printf("To withdraw money please press 2,\n");
		printf("To query the money in your account please press 3.\n");
		scanf("%d",&islem);
		
		
		switch(islem){
			
			case 1:
				printf("To deposit money on your own account please press 1,\n");
				printf("To deposit money on someone else's account please press 2.\n");
				scanf("%d",&pyat);
				
				switch(pyat){
					
					case 1:
						printf("Please enter the amount that you want to deposit: ");
						scanf("%d",&yatmik);
						user[muno].money=user[muno].money+yatmik;
						break;
					case 2:
						pyatmuno = musterino();
						printf("Please enter the amount that you want to deposit: ");
						scanf("%d",&yatmik);
						user[pyatmuno].money=user[pyatmuno].money+yatmik;
						user[muno].money=user[muno].money-yatmik;
						break;
					default:
						printf("You entered a wrong value.\n");
						break;
				}
				break;
				
			case 2:
				printf("How much money you want to withdraw? \n");
				scanf("%d",&cekmik);
				user[muno].money=user[muno].money-cekmik;
				break;
			
			
			case 3:
				printf("The amount of money in your account is: %d\n",user[muno].money);
				break;
				
				
			default:
				printf("You entered a wrong value.\n");
				break;
				
		}
			
			printf("Do you want to take another action? \n");
			printf("If you want please press 1 if not please press 2.\n");
			scanf("%d",&i);	
			
	}while(i==1);
	break;
	
	
	default :
	printf("You entered a wrong value. Please try again.\n");
	break;
	}

	}while(1);
}
