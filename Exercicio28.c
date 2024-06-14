#include <stdio.h>
#include <stdlib.h>

/*
O Hipermercado Tabajara está com uma promoção de carnes que é imperdível. Confira:

                      Até 5 Kg           Acima de 5 Kg
                      
File Duplo      R$ 4,90 por Kg          R$ 5,80 por Kg
Alcatra         R$ 5,90 por Kg          R$ 6,80 por Kg
Picanha         R$ 6,90 por Kg          R$ 7,80 por Kg

Para atender a todos os clientes, cada cliente poderá levar apenas um dos tipos de carne da promoção, 
porém não há limites para a quantidade de carne por cliente. 

Se compra for feita no cartão Tabajara o cliente receberá ainda um desconto de 5% sobre o total da compra.
 
Escreva um programa que peça o tipo e a quantidade de carne comprada pelo usuário e gere um cupom fiscal, contendo as informações da compra: tipo e quantidade de carne, 
preço total, tipo de pagamento, valor do desconto e valor a pagar.
*/

int main(int argc, char *argv[]) {
	
// CONSTANTS:

    float tBoneLess5 = 4.90;
    float tBoneMore5 = 5.80;
    float topSirloinLess5 = 5.90;
    float topSirloinMore5 = 6.80;
    float rumpSteakLess5 = 5.90;
    float rumpSteakMore5 = 6.80;
    float cardDiscount = 0.05;
    
// VARIABLES:

	int meatSelection;
    float totalWeigth;
    char discountCard;
    float totalPrice;
    float saved;
    float discountPrice;
    
// REQUEST1:
    
    printf ("\n\nMeat in promotion:\n\n1 - T-Bone\n2 - Top Sirloin\n3 - Rump Steak");
    
    printf ("\n\n");
	    
    printf ("Please enter the type of meat you which to take: ");
    scanf("%d", &meatSelection);

    
    printf ("\n\n");

// REQUESTS2:

	switch (meatSelection){
		
		case 1: 
		
			printf ("Please enter how many kg of T-Bone do you which to take: ");
    		scanf("%f", &totalWeigth);
    		
			printf ("\n\nWill you be paying with our house card? (Y/N): ");
    		scanf(" %c", &discountCard);
    		
 // SELECTION HANDLING:   		
    		
    		if (totalWeigth <= 5 && (discountCard == 'N' || discountCard == 'n')){
    			
    			totalPrice = totalWeigth * tBoneLess5;
				printf ("\n\nYou total cost for this purchase is: %.2f R$", totalPrice);
    			
			}else if(totalWeigth <= 5 && (discountCard == 'Y' || discountCard == 'y')){
				
    			totalPrice = totalWeigth * tBoneLess5;
    			saved = totalPrice * cardDiscount;
    			discountPrice = totalPrice - saved;
    			
    			printf("\n\nPaying with your House Card gives you a %.f %% discount on your purchase\nYou've saved %.2f R$ on this purchase.", (cardDiscount * 100), saved);
    			printf ("\nYour total cost for this purchase would be: %.2f R$", totalPrice);
				printf ("\nWith the discount, your total cost for this purchase is: %.2f R$", discountPrice);
				
			}else if (totalWeigth > 5 && (discountCard == 'N' || discountCard == 'n')){
    			
    			totalPrice = totalWeigth * tBoneMore5;
				printf ("\n\nYou total cost for this purchase is: %.2f R$", totalPrice);
    			
			}else if(totalWeigth > 5 && (discountCard == 'Y' || discountCard == 'y')){
				
    			totalPrice = totalWeigth * tBoneMore5;
    			saved = totalPrice * cardDiscount;
    			discountPrice = totalPrice - saved;
    			
    			printf("\n\nPaying with your House Card gives you a %.f %% discount on your purchase\nYou've saved %.2f R$ on this purchase.", (cardDiscount * 100), saved);
    			printf ("\nYour total cost for this purchase would be: %.2f R$", totalPrice);
				printf ("\nWith the discount, your total cost for this purchase is: %.2f R$", discountPrice);
				
			}else{
				
				printf("\n******************************\n\nERROR - Something went wrong.\nPlease RESTART the program!\n\n******************************\n");
				
			}
    		
    		break;
    	
    	case 2:
    	
			printf ("Please enter how many kg of Top Sirloin do you which to take: ");
    		scanf("%f", &totalWeigth);
    		
 // SELECTION HANDLING:   		
    		
    		if (totalWeigth <= 5 && (discountCard == 'N' || discountCard == 'n')){
    			
    			totalPrice = totalWeigth * topSirloinLess5;
				printf ("\n\nYou total cost for this purchase is: %.2f R$", totalPrice);
    			
			}else if(totalWeigth <= 5 && (discountCard == 'Y' || discountCard == 'y')){
				
    			totalPrice = totalWeigth * topSirloinLess5;
    			saved = totalPrice * cardDiscount;
    			discountPrice = totalPrice - saved;
    			
    			printf("\n\nPaying with your House Card gives you a %.f %% discount on your purchase\nYou've saved %.2f R$ on this purchase.", (cardDiscount * 100), saved);
    			printf ("\nYour total cost for this purchase would be: %.2f R$", totalPrice);
				printf ("\nWith the discount, your total cost for this purchase is: %.2f R$", discountPrice);
				
			}else if (totalWeigth > 5 && (discountCard == 'N' || discountCard == 'n')){
    			
    			totalPrice = totalWeigth * topSirloinMore5;
				printf ("\n\nYou total cost for this purchase is: %.2f R$", totalPrice);
    			
			}else if(totalWeigth > 5 && (discountCard == 'Y' || discountCard == 'y')){
				
    			totalPrice = totalWeigth * topSirloinMore5;
    			saved = totalPrice * cardDiscount;
    			discountPrice = totalPrice - saved;
    			
    			printf("\n\nPaying with your House Card gives you a %.f %% discount on your purchase\nYou've saved %.2f R$ on this purchase.", (cardDiscount * 100), saved);
    			printf ("\nYour total cost for this purchase would be: %.2f R$", totalPrice);
				printf ("\nWith the discount, your total cost for this purchase is: %.2f R$", discountPrice);
				
			}else{
				
				printf("\n******************************\n\nERROR - Something went wrong.\nPlease RESTART the program!\n\n******************************\n");
				
			}
    		
    		break;
    		
    	case 3:
    		
			printf ("Please enter how many kg of Rump Steak do you which to take: ");
    		scanf("%f", &totalWeigth);
    		
 // SELECTION HANDLING:   		
    		
    		if (totalWeigth <= 5 && (discountCard == 'N' || discountCard == 'n')){
    			
    			totalPrice = totalWeigth * rumpSteakLess5;
				printf ("\n\nYou total cost for this purchase is: %.2f R$", totalPrice);
    			
			}else if(totalWeigth <= 5 && (discountCard == 'Y' || discountCard == 'y')){
				
    			totalPrice = totalWeigth * rumpSteakLess5;
    			saved = totalPrice * cardDiscount;
    			discountPrice = totalPrice - saved;
    			
    			printf("\n\nPaying with your House Card gives you a %.f %% discount on your purchase\nYou've saved %.2f R$ on this purchase.", (cardDiscount * 100), saved);
    			printf ("\nYour total cost for this purchase would be: %.2f R$", totalPrice);
				printf ("\nWith the discount, your total cost for this purchase is: %.2f R$", discountPrice);
				
			}else if (totalWeigth > 5 && (discountCard == 'N' || discountCard == 'n')){
    			
    			totalPrice = totalWeigth * rumpSteakMore5;
				printf ("\n\nYou total cost for this purchase is: %.2f R$", totalPrice);
    			
			}else if(totalWeigth > 5 && (discountCard == 'Y' || discountCard == 'y')){
				
    			totalPrice = totalWeigth * rumpSteakMore5;
    			saved = totalPrice * cardDiscount;
    			discountPrice = totalPrice - saved;
    			
    			printf("\n\nPaying with your House Card gives you a %.f %% discount on your purchase\nYou've saved %.2f R$ on this purchase.", (cardDiscount * 100), saved);
    			printf ("\nYour total cost for this purchase would be: %.2f R$", totalPrice);
				printf ("\nWith the discount, your total cost for this purchase is: %.2f R$", discountPrice);
				
			}else{
				
				printf("\n******************************\n\nERROR - Something went wrong.\nPlease RESTART the program!\n\n******************************\n");
				
			}
    		
    		break;
    		
	}
	
	return 0;
}

/* FUNCTION FOR SELECTION HANDLING:

void selectionHandling (meatSelection, totalWeigth, discountCard){
}

*/
