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
	printf("\n\t1. Low-Cost Passenger Car (80.000tl - 200.000tl)");
	printf("\n\t2. Medium-Cost Passenger Car (200.000tl - 400.000tl)");
	printf("\n\t3. Electrical Passenger Car (150.000tl - 300.000tl)");
	printf("\n\t4. Low-Cost SUV Passenger Car (180.000tl - 300.000tl)");
	
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
   					
  					printf ("\n\nPress any key to return to the main menu.");
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
   					
  					printf ("\n\nPress any key to return to the main menu.");
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
   					
  					printf ("\n\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
	}
	
	else if (secim1==4) //low cost suv
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
   					
  					printf ("\n\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
	}
	
}
void luxury()
{
	system ("cls");
	int secim2;
	printf("\n\n\tWhich category that you more interest ?");
	printf("\n\t1. V.I.P. Cars ");
	printf("\n\t2. Limousin Cars ");
	printf("\n\t3. Official / Staff Car ");
	
    printf("\n\n\tENTER YOUR CHOICE:\t");
    scanf("%d", &secim2);
    
    if (secim2 == 1) //vip cars
    {
    	system ("cls");
                	FILE * dosya;
                	char character;
   					dosya = fopen("vip.txt" , "r");
   					
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
   					
  					printf ("\n\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
	}
	
	else if (secim2==2) //limuzin
	{
		system ("cls");
                	FILE * dosya;
                	char character;
   					dosya = fopen("limuzin.txt" , "r");
   					
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
   					
  					printf ("\n\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
	}
	
	else if (secim2 == 3)
	{
		system ("cls");
                	FILE * dosya;
                	char character;
   					dosya = fopen("makam.txt" , "r");
   					
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
   					
  					printf ("\n\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
	}
}

void performance()
{
	system ("cls");
	int secim3;
	printf("\n\n\tWhich category that you more interest ?");
	printf("\n\t1. Classic / Oldschool Cars");
	printf("\n\t2. European Monsters");
	printf("\n\t3. American Muscles");
	printf("\n\t4. Asian-Eastside Tuner Cars");
	printf("\n\t5. Drag Race Specials (CSR)");
	printf("\n\t6. Extreme Performance Cars");
    printf("\n\n\tENTER YOUR CHOICE:\t");
    scanf("%d", &secim3);
    
    if(secim3==1) //classics
	{
    		system ("cls");
                	FILE * dosya;
                	char character;
   					dosya = fopen("classic.txt" , "r");
   					
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
   					
  					printf ("\n\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
	}
	
	else if (secim3==2) //european
	{
		system ("cls");
                	FILE * dosya;
                	char character;
   					dosya = fopen("european.txt" , "r");
   					
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
   					
  					printf ("\n\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
	}
	
	else if (secim3==3) //american muscular
	{
		system ("cls");
                	FILE * dosya;
                	char character;
   					dosya = fopen("american-muscle.txt" , "r");
   					
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
   					
  					printf ("\n\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
	}
	
	else if (secim3==4) //asian tuner
	{
		system ("cls");
                	FILE * dosya;
                	char character;
   					dosya = fopen("eastside-asian.txt" , "r");
   					
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
   					
  					printf ("\n\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
	}
		else if (secim3==5) //drag special
	{
		system ("cls");
                	FILE * dosya;
                	char character;
   					dosya = fopen("drag-special.txt" , "r");
   					
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
   					
  					printf ("\n\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
	}
		else if (secim3==6) //extreme
	{
		system ("cls");
                	FILE * dosya;
                	char character;
   					dosya = fopen("extreme.txt" , "r");
   					
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
   					
  					printf ("\n\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
	}
	
}

void camper()
{
	system ("cls");
                	FILE * dosya;
                	char character;
   					dosya = fopen("camper-special.txt" , "r");
   					
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
   					
  					printf ("\n\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
	
}

void off_road()
{
	system ("cls");
                	FILE * dosya;
                	char character;
   					dosya = fopen("arazi-4x4-pickup.txt" , "r");
   					
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
   					
  					printf ("\n\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
}

void commercial()
{
	system ("cls");
	int secim4;
	printf("\n\n\tWhich category that you more interest ?");
	printf("\n\t1. Minivan for Passsenger");
	printf("\n\t2. Minivan for Commercial");
	printf("\n\t3. Minivan for Transporting 19+1");
	printf("\n\t4. Minibus for Commercial");

    printf("\n\n\tENTER YOUR CHOICE:\t");
    scanf("%d", &secim4);
    
    if(secim4==1) 
	{
    		system ("cls");
                	FILE * dosya;
                	char character;
   					dosya = fopen("minivan-5.txt" , "r");
   					
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
   					
  					printf ("\n\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
	}
	else if(secim4==2) 
	{
    		system ("cls");
                	FILE * dosya;
                	char character;
   					dosya = fopen("minivan-servis.txt" , "r");
   					
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
   					
  					printf ("\n\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
	}
	else if(secim4==4) 
	{
    		system ("cls");
                	FILE * dosya;
                	char character;
   					dosya = fopen("ticari-minibus.txt" , "r");
   					
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
   					
  					printf ("\n\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
	}
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
