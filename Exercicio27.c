#include <stdio.h>
#include <stdlib.h>

/* 
Uma fruteira está vendendo frutas com a seguinte tabela de preços:

               Até 5 Kg          Acima de 5 Kg
 
Morangos.        2.50 R$/Kg         2.20 R$/Kg

Maçãs.           2.20 R$/Kg         1.80 R$/Kg

Se total Kg > 8 Kg ou valor total > 25.00 R$
 Recebe 10% de desconto sobre o valor total
 
Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a quantidade (em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente.
*/

int main(int argc, char *argv[]) {
	
// CONSTANTS:

    float strawberriesLess5 = 2.50;
    float strawberriesMore5 = 2.20;
    float applesLess5 = 2.20;
    float applesMore5 = 1.80;
    float discount = 0.10;
    float totalWeigthForDiscount = 8.00;
    float totalPriceForDiscount = 25.00;
    
// VARIABLES:

    float strawberryWeigth;
    float appleWeigth;
    float totalWeigth;
    float totalPrice;
    float strawberryPrice;
    float applePrice;
    float discountPrice;

// REQUESTS:

    printf ("Please enter how many kg of strawberries do you which to take: ");
    scanf("%f", &strawberryWeigth);
    printf ("\n\nPlease enter how many kg of apples do you which to take: ");
    scanf("%f", &appleWeigth);
    printf ("\n\n");
    
// SELECTION HANDLING:

    if (strawberryWeigth <= 5 && appleWeigth == 0){
        
        strawberryPrice = strawberriesLess5;
        totalPrice = strawberryWeigth * strawberryPrice;
        totalWeigth = strawberryWeigth;
    
    }else if(appleWeigth <= 5 && strawberryWeigth == 0){
        
        applePrice  = applesLess5;
        totalPrice = appleWeigth * applePrice;
        totalWeigth = appleWeigth;
        
    }else if(strawberryWeigth <= 5 && appleWeigth <= 5){
        
          applePrice  = applesLess5;
          strawberryPrice = strawberriesLess5;
          totalPrice = (strawberryWeigth * strawberryPrice) + (appleWeigth * applePrice);
          totalWeigth = strawberryWeigth + appleWeigth;
        
    }else if(strawberryWeigth > 5 && appleWeigth ==0){
     
        strawberryPrice = strawberriesMore5;
        totalPrice = strawberryWeigth * strawberryPrice;
        totalWeigth = strawberryWeigth;
                
    }else if(appleWeigth > 5 && strawberryWeigth == 0){
        
        applePrice = applesMore5;
        totalPrice = appleWeigth * applePrice;
        totalWeigth = appleWeigth;
            
    }else if(strawberryWeigth > 5 && appleWeigth > 5){
        
        strawberryPrice = strawberriesMore5;        
        applePrice = applesMore5;
        totalPrice = (strawberryWeigth * strawberryPrice) + (appleWeigth * applePrice);
        totalWeigth = strawberryWeigth + appleWeigth;
        
    }else if(strawberryWeigth > 5 && appleWeigth <= 5){
        
        strawberryPrice = strawberriesMore5;        
        applePrice = applesLess5;
        totalPrice = (strawberryWeigth * strawberryPrice) + (appleWeigth * applePrice);
        totalWeigth = strawberryWeigth + appleWeigth;
        
    }else if(strawberryWeigth  <= 5 && appleWeigth > 5){
        
        strawberryPrice = strawberriesLess5;        
        applePrice = applesMore5;
        totalPrice = (strawberryWeigth * strawberryPrice) + (appleWeigth * applePrice);
        totalWeigth = strawberryWeigth + appleWeigth;
        
    }else{
        
        printf ("\nInvalid Option Selected. Please try again.\n");
        
    }
    
    
// DISCOUNT HANDLING:

    if (totalPrice > totalPriceForDiscount || totalWeigth > totalWeigthForDiscount){
        
        discountPrice = totalPrice -(totalPrice * discount);
        
        printf("Your original price was: %.2f R$\n", totalPrice);
        printf("You've been given a %.f %% discount. Enjoy!\nYour final price is: %.2f R$", (discount * 100), discountPrice);
        
    }else{
        
        printf ("Your total cost on this purchase is: %.2f R$", totalPrice);
    }
	
	return 0;
}
