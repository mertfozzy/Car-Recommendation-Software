#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void intro_ekrani(){
  printf("\n----------------------------------\n");
  printf("|   Discerete Structures Project  |");
  printf("\n----------------------------------\n");
  printf("|     Made By: Mert & Alperen     |");
  printf("\n----------------------------------\n\n\n");

  printf("Loading  ");
  int j, a;
  for (a = 0; a <= 5; a++) {
    printf(".");
    for (j = 0; j <= 120000000; j++);
  }
  system("cls");
}

void automobile()
{
	system ("cls");
	int secim1;
	printf("\n\n\tWhich category that you more interest ?");
	printf("\n\t1. Low-Cost Passenger Car ");
	printf("\n\t2. Medium-Cost Passenger Car ");
	printf("\n\t3. Electrical Passenger Car ");
	printf("\n\t4. Low-Cost SUV Passenger Car ");
	
    printf("\n\n\tENTER YOUR CHOICE:\t");
    scanf("%d", &secim1);
    
    if(secim1==1) //low cost passenger
	{
    		system ("cls");
                	FILE * dosya;
                	char character;
   					dosya = fopen("binek-normal-low-cost.txt" , "r");
   					
   					if(dosya!=NULL)
					{
						character=fgetc(dosya); 
						while(character!=EOF)
						{
							printf("%c", character);
							character=fgetc(dosya);
						}
					}

   					fclose(dosya);
   					
  					printf ("\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
	}
	
	else if (secim1==2) //medium cost passenger
	{
		system ("cls");
                	FILE * dosya;
                	char character;
   					dosya = fopen("binek-normal-med-cost.txt" , "r");
   					
   					if(dosya!=NULL)
					{
						character=fgetc(dosya); 
						while(character!=EOF)
						{
							printf("%c", character);
							character=fgetc(dosya);
						}
					}

   					fclose(dosya);
   					
  					printf ("\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
	}
	
	else if (secim1==3) //electric cars
	{
		system ("cls");
                	FILE * dosya;
                	char character;
   					dosya = fopen("binek-elektrik.txt" , "r");
   					
   					if(dosya!=NULL)
					{
						character=fgetc(dosya); 
						while(character!=EOF)
						{
							printf("%c", character);
							character=fgetc(dosya);
						}
					}

   					fclose(dosya);
   					
  					printf ("\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
	}
	
	else if (secim1==4)
	{
		system ("cls");
                	FILE * dosya;
                	char character;
   					dosya = fopen("arazi-suv-low-cost.txt" , "r");
   					
   					if(dosya!=NULL)
					{
						character=fgetc(dosya); 
						while(character!=EOF)
						{
							printf("%c", character);
							character=fgetc(dosya);
						}
					}

   					fclose(dosya);
   					
  					printf ("\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
	}
	
}
void luxury()
{
	
}

void performance()
{
	
}

void camper()
{
	
}

void off_road()
{
	
}

void commercial()
{
	
}

int main ()
{

	intro_ekrani();

  
				int rakam;
	            printf("\n=======================================================================\n");
                printf("\n\n\t\tWELCOME CAR RECOMMENDATION SOFTWARE");
                printf("\n\n\t Please answer the questions to find your true car !");
                printf("\n\n\t1. Looking for an Automobile ?");
                printf("\n\t2. Are you a boss? Looking for Luxury ?");
                printf("\n\t3. Do you want some speed ? Performance maybe ?");
                printf("\n\t4. Do you interested in Camping ? Campers here..");
                printf("\n\t5. Want some off-road ? Terrain vehicles here..");
                printf("\n\t6. Do you want to carry something? Looking for commercial cars?");
                printf("\n\t7. EXIT");
                printf("\n\n=======================================================================\n\n");

                printf("\n\n\tENTER YOUR CHOICE:\t");
                scanf("%d", & rakam);
    switch(rakam)
	{
	
	case 1 : automobile();
	break;
	
	case 2 : luxury();
	break;
	
	case 3 : performance();
	break;	
	
	case 4 : camper();
	break;
	
	case 5 : off_road();
	break;
	
	case 6 : commercial();
	break;
	
	case 7 : printf("\n\n\tTHANK YOU\n");
			 exit(0);
	break;
	
	default: printf("\nWrong choise. Please enter the correct numbers to use program.\n");
    break;
	
	}
	
}
