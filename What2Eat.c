#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {   
    int numberofPeople;
    printf("How many people: ");  
    // reads and stores input
    scanf("%d", &numberofPeople);
    // displays output
    printf("%d people exist.\n", numberofPeople);
    printf("You can only choose Kebab, Burger, Pasta, Lahmacun, Salad\n");
    printf("Order these foods in order to your preferences\n");
    printf("Kebab\nBurger\nPasta\nLahmacun\nSalad\n");

    int threshold = numberofPeople*4;
    
    bool firstFood = false;
    bool secondFood = false;
    bool thirdFood = false;
    bool fourthFood = false;
    bool fifthFood = false;
    char temporaryFood[10];
    char temporaryFood2[10];
    
    int kebabRate = 0;
    int burgerRate = 0;
    int pastaRate = 0;
    int lahmacunRate = 0;
    int saladRate = 0;
    
for (int i = 0; i < numberofPeople; i++)
{
     firstFood = false;
     secondFood = false;
     thirdFood = false;
     fourthFood = false;
     fifthFood = false;
     
	for (int j=1; j < 6; j++){
	
	    printf("%dst choose: ",j);
	    scanf("%s", temporaryFood);
	    printf("temporaryfood = %s\n",temporaryFood);
	    if(!strcmp(temporaryFood, "Kebab")){
	    		if(!firstFood){
	    		printf("food found\n");
	    		firstFood = true;
	    		kebabRate += 6-j;
	    	}else{
	    		printf("kebab already choosen.\n");
	    		j--;
	    	}
	    }else if(!strcmp(temporaryFood, "Burger")){
	    	    	if(!secondFood){
	    		printf("food found\n");
	    		secondFood = true;
	    		burgerRate += 6-j;
	    	}else{
	    		printf("burger already choosen.\n");
	    		j--;
	    	}
	    }else if(!strcmp(temporaryFood, "Pasta")){
	    	    	if(!thirdFood){
	    		printf("food found\n");
	    		thirdFood = true;
	    		pastaRate += 6-j;
	    	}else{
	    		printf("pasta already choosen.\n");
	    		j--;
	    	}
	    }else if(!strcmp(temporaryFood, "Lahmacun")){
	    	    	if(!fourthFood){
	    		printf("food found\n");
	    		fourthFood = true;
	    		lahmacunRate += 6-j;
	    	}else{
	    		printf("lahmacun already choosen.\n");
	    		j--;
	    	}
	    }else if(!strcmp(temporaryFood, "Salad")){
	    	    	if(!fifthFood){
	    		printf("food found\n");
	    		fifthFood = true;
	    		saladRate += 6-j;
	    	}else{
	    		printf("salad already choosen.\n");
	    		j--;
	    	}
	    }else{
	    j--;
	    }
	    
	}
}
    firstFood = false;
    secondFood = false;
    thirdFood = false;
    fourthFood = false;
    fifthFood = false;
	bool willItContinue = true;
	int counter = 0;
	char selectedFood[10];

	if(kebabRate>=threshold){
		firstFood = true;
		counter++;
	}if(burgerRate>=threshold){
		secondFood = true;
		counter++;
	}if(pastaRate>=threshold){
		thirdFood = true;
		counter++;
	}if(lahmacunRate>=threshold){
		fourthFood = true;
		counter++;
	}if(saladRate>=threshold){
		fifthFood = true;
		counter++;
	}
printf("counter: %d\n", counter);
printf("kebab point: %d\n", kebabRate);
printf("burger point: %d\n", burgerRate);
printf("lahmacun point: %d\n", lahmacunRate);
printf("pasta point: %d\n", pastaRate);
printf("salad point: %d\n", saladRate);
printf("threshold: %d\n", threshold);

	if(counter==0){
		printf("you won't eat anything today\n");
	}else if(counter==1){
		if(firstFood==true){
			printf("you will eat Kebab today\n");
			return 0;
		}else if(secondFood==true){
			printf("you will eat Burger today\n");
			return 0;
		}else if(thirdFood==true){
			printf("you will eat Pasta today\n");
			return 0;
		}else if(fourthFood==true){
			printf("you will eat Lahmacun today\n");
			return 0;
		}else if(fifthFood==true){
			printf("you will eat Salad today\n");
			return 0;
		}else{
			printf("you won't eat anything today\n");
			return 0;
		}
		
	}else{
		printf("Choose one of below:\n");
		if(firstFood==true){
			printf("Kebab\n");
		}if(secondFood==true){
			printf("Burger\n");
		}if(thirdFood==true){
			printf("Pasta\n");
		}if(fourthFood==true){
			printf("Lahmacun\n");
		}if(fifthFood==true){
			printf("Salad\n");
		}

	    kebabRate = 0;
	    burgerRate = 0;
	    pastaRate = 0;
	    lahmacunRate = 0;
	    saladRate = 0;

	    bool firstFood1 = false;
	    bool secondFood1 = false;
	    bool thirdFood1 = false;
	    bool fourthFood1 = false;
	    bool fifthFood1 = false;

		for (int k = 0; k < numberofPeople; k++){
			firstFood1 = false;
		    secondFood1 = false;
		    thirdFood1 = false;
		    fourthFood1 = false;
		    fifthFood1 = false;
			for(int l=1; l<counter+1;l++){

	    printf("%dst choose: ",l);
	    scanf("%s", temporaryFood2);
	    if(!strcmp(temporaryFood2, "Kebab") && firstFood==true){
	    		if(!firstFood1){
	    		printf("food found\n");
	    		firstFood1 = true;
	    		kebabRate += 6-l;
	    	}else{
	    		printf("kebab already choosen.\n");
	    		l--;
	    	}
	    }else if(!strcmp(temporaryFood2, "Burger") && secondFood==true){
	    	    	if(!secondFood1){
	    		printf("food found\n");
	    		secondFood1 = true;
	    		burgerRate += 6-l;
	    	}else{
	    		printf("burger already choosen.\n");
	    		l--;
	    	}
	    }else if(!strcmp(temporaryFood2, "Pasta") && thirdFood==true){
	    	    	if(!thirdFood1){
	    		printf("food found\n");
	    		thirdFood1 = true;
	    		pastaRate += 6-l;
	    	}else{
	    		printf("pasta already choosen.\n");
	    		l--;
	    	}
	    }else if(!strcmp(temporaryFood2, "Lahmacun") && fourthFood==true){
	    	    	if(!fourthFood1){
	    		printf("food found\n");
	    		fourthFood1 = true;
	    		lahmacunRate += 6-l;
	    	}else{
	    		printf("lahmacun already choosen.\n");
	    		l--;
	    	}
	    }else if(!strcmp(temporaryFood2, "Salad") && fifthFood==true){
	    	    	if(!fifthFood1){
	    		printf("food found\n");
	    		fifthFood1 = true;
	    		saladRate += 6-l;
	    	}else{
	    		printf("salad already choosen.\n");
	    		l--;
	    	}
	    }else{
	    l--;
	    }
			}
		}
	}

if(kebabRate > burgerRate && kebabRate > lahmacunRate && kebabRate > pastaRate && kebabRate > saladRate){
	printf("You will eat Kebab today!\n");
	return 0;
}else if(burgerRate > kebabRate && burgerRate > lahmacunRate && burgerRate > pastaRate && burgerRate > saladRate){
	printf("You will eat Burger today!\n");
	return 0;
}else if(lahmacunRate > kebabRate && lahmacunRate > burgerRate && lahmacunRate > pastaRate && lahmacunRate > saladRate){
	printf("You will eat Lahmacun today!\n");
	return 0;
}else if(pastaRate > kebabRate && pastaRate > burgerRate && pastaRate > lahmacunRate && pastaRate > saladRate){
	printf("You will eat Pasta today!\n");
	return 0;
}else if(saladRate > kebabRate && saladRate > burgerRate && saladRate > pastaRate && saladRate > lahmacunRate){
	printf("You will eat Salad today!\n");
	return 0;
}else{
	printf("Rate them again. Rates are equal!\n");
}





    
    return 0;
}
