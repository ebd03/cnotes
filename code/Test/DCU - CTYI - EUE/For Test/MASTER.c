#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "16.5.15aH1.h" /* Include related header file */

#define NUM_PETS 11     /* Number of pets in given text file */
#define NUM_EQUIP 7     /* Number of equipment items in given text file */

#define MY_DEBUG        /* To check for issues along the way */
#undef MY_DEBUG
                        /* Debug check can be turned on/off here for presentation by commenting previous line */


                        /* NOTE: All name strings have max 20 chars. Structs are initialised in related header file 16.5.15aH1.h */

/* NB: Related header file contains the following lines:
 
 struct equipment{
 char equipcode[20];
 char equipname[20];
 int equipprice;
 };
 typedef struct equipment EQUIP;
 
 struct pet{
 char petcategory[20];
 char breed[20];
 int age;
 int petprice;
 EQUIP petsequip;
 int totalprice;
 };
 typedef struct pet PET;
 
 *comment* Necessary structs initialised *comment*

*/

    /* Main function */
int main()
{
    /* CREATE GIVEN TEXT FILES */
    
    FILE* pPets;
    if ((pPets = fopen("//Users//Jamesie//Xcode//16.5.15a//16.5.15a//pets.txt", "w")) == NULL)
    {
        printf("Unable to create pets.txt\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        fprintf(pPets, "dog Dalmation 3 100 EQP3\n" /* pet 1 */
                       "mouse Black 4 10 EQP1\n"    /* pet 2 */
                       "dog Retriever 9 50 EQP2\n"  /* pet 3 */
                       "dog Wolf 7 300 EQP2\n"      /* pet 4 */
                       "cat Persian 3 100 EQP3\n"   /* pet 5 */
                       "cat Munchkin 8 150 EQP4\n"  /* pet 6 */
                       "cat Manx 3 100 EQP3\n"      /* pet 7 */
                       "rabbit Angora 2 50 EQP7\n"  /* pet 8 */
                       "rabbit Alaska 2 30 EQP7\n"  /* pet 9 */
                       "dog Terrier 9 300 EQP3\n"   /* pet 10 */
                       "fish Gold 4 50 EQP5\n");    /* pet 11 */
#ifdef MY_DEBUG
        printf("Pet database successfully loaded.\n");
#endif
    }

    fclose(pPets);
        
        
    FILE *pEquipment;
    if ((pEquipment = fopen("//Users//Jamesie//Xcode//16.5.15a//16.5.15a//equip.txt", "w")) == NULL)
    {
        printf("Unable to create equip.txt\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        fprintf(pEquipment, "EQP1 MouseCage 50\n"
                            "EQP2 DogBed 30\n"
                            "EQP3 TravelCage 50\n"
                            "EQP4 CatCage 40\n"
                            "EQP5 FishBowl 20\n"
                            "EQP6 FishTank 100\n"
                            "EQP7 RabbitCage 100\n");
#ifdef MY_DEBUG
        printf("Equipment database successfully loaded.\n\n");
#endif
    }

    fclose(pEquipment);

    /* GIVEN TEXT FILES CREATED */
        
    /* READ FILES INTO TWO ARRAYS OF STRUCTURES */
        
    int i;
    PET pet_list[NUM_PETS]; /* FIRST ARRAY OF STRUCTS */
    if ((pPets = fopen("//Users//Jamesie//Xcode//16.5.15a//16.5.15a//pets.txt", "r")) == NULL)
    {
        printf("Unable to open pets.txt\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        for(i = 0; i < NUM_PETS; i++)
        {
            fscanf(pPets, "%s %s %d %d %s", pet_list[i].petcategory, pet_list[i].breed, &pet_list[i].age, &pet_list[i].petprice, pet_list[i].petsequip.equipcode);
#ifdef MY_DEBUG
            printf("%s %s %d %d %s\n", pet_list[i].petcategory, pet_list[i].breed, pet_list[i].age, pet_list[i].petprice, pet_list[i].petsequip.equipcode);
#endif
        }
#ifdef MY_DEBUG
        printf("Pet data successfully read into array.\n\n");
#endif

    }
    fclose(pPets);
        
        
    EQUIP equip_list[NUM_EQUIP]; /* SECOND ARRAY OF STRUCTS */
    if ((pEquipment = fopen("//Users//Jamesie//Xcode//16.5.15a//16.5.15a//equip.txt", "r")) == NULL)
    {
        printf("Unable to open equip.txt\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        for(i = 0; i < NUM_EQUIP; i++)
        {
            fscanf(pEquipment, "%s %s %d", equip_list[i].equipcode, equip_list[i].equipname, &equip_list[i].equipprice);
#ifdef MY_DEBUG
            printf("%s %s %d\n", equip_list[i].equipcode, equip_list[i].equipname, equip_list[i].equipprice);
#endif
        }
#ifdef MY_DEBUG
        printf("Equipment data successfully read into array.\n\n");
#endif
    }
    fclose(pEquipment);

    /* ARRAYS OF STRUCTS CONSTRUCTED */
    
    /* TRANSFER RELEVANT EQUIP DATA INTO PET STRUCTS */
    
    int j;
    
    for(i = 0; i < NUM_PETS; i++)
    {
        for(j = 0; j < NUM_EQUIP; j++)
        {
            if((strcmp(pet_list[i].petsequip.equipcode, equip_list[j].equipcode)) == 0)
            {
                strcpy(pet_list[i].petsequip.equipname, equip_list[j].equipname);
                pet_list[i].petsequip.equipprice = equip_list[j].equipprice;
            }
        }
    }
    
#ifdef MY_DEBUG
    for(i = 0; i < NUM_PETS; i++)
    {
        printf("Pet %d's equipment is %s with price €%d\n", i+1, pet_list[i].petsequip.equipname, pet_list[i].petsequip.equipprice);
    }
#endif

    /* pet_list NOW CONTAINS ALL RELEVANT DATA */
    
    /* APPLY PRICE REDUCTIONS BASED ON AGE */
    
    for(i = 0; i < NUM_PETS; i++)
    {
        if((strcmp(pet_list[i].petcategory, "fish")) == 0 || (strcmp(pet_list[i].petcategory, "mouse")) == 0)
        {
            if(pet_list[i].age > 3)
            {
                pet_list[i].petprice -= 0.2 * pet_list[i].petprice;
            }
#ifdef MY_DEBUG
            printf("New pet price for (old) pet %d is €%d\n", i+1, pet_list[i].petprice);
#endif
        }
        else if((strcmp(pet_list[i].petcategory, "rabbit")) == 0)
        {
            pet_list[i].petprice -= 0.1 * pet_list[i].petprice;
#ifdef MY_DEBUG
            printf("New price for (rabbit) pet %d is €%d\n", i+1, pet_list[i].petprice);
#endif
        }
        else if((strcmp(pet_list[i].petcategory, "dog")) == 0 || (strcmp(pet_list[i].petcategory, "cat")) == 0)
        {
            if(pet_list[i].age > 6)
            {
                pet_list[i].petprice -= 0.5 * pet_list[i].petprice;
#ifdef MY_DEBUG
                printf("New price for (old) pet %d is €%d\n", i+1, pet_list[i].petprice);
#endif
            }
        }
        
    }

    /* PET PRICES ARE NOW COMPLETELY ACCURATE */
    
    /* CALCULATE TOTAL PRICES FOR EACH PET */
    
    for(i = 0; i < NUM_PETS; i++)
    {
        pet_list[i].totalprice = pet_list[i].petprice + pet_list[i].petsequip.equipprice;
#ifdef MY_DEBUG
        printf("Total price for pet %d is €%d\n", i+1, pet_list[i].totalprice);
#endif
    }

    /* TOTAL PRICES FOUND */
    
    /* WRITE ALL DATA INTO NEW FILE */
    
    FILE* pAllData;
    
    if((pAllData = fopen("//Users//Jamesie//Xcode//16.5.15a//16.5.15a//finaldata.txt", "w")) == NULL)
    {
        printf("Unable to create records file\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        for(i = 0; i < NUM_PETS; i++)
        {
            fprintf(pAllData, "%s %s %d %s %d\n", pet_list[i].petcategory, pet_list[i].breed, pet_list[i].age, pet_list[i].petsequip.equipname, pet_list[i].totalprice);
        }
#ifdef MY_DEBUG
        printf("Records file successfully written\n");
#endif
    }
    fclose(pAllData);
    
    /* MUST HAVE AT LEAST THREE FUNCTIONS: menu, buy_pet, view_category */
    
    void explanation(void); /* Function 1 */
    
    int menu(void); /* Function 2 */
    int menu_choice;
    
    void buy_pet(PET pet_array[]); /* Function 3 */
    void view_category(PET pet_array[]); /* Function 4 */
    
    /* EXECUTION OF INTERACTIVE PROGRAM */
    
    explanation();
    
    do
    {
        menu_choice = menu();
        
        switch(menu_choice)
        {
            case 1:
                buy_pet(pet_list);
                break;
            case 2:
                view_category(pet_list);
        }
    } while (menu_choice != 0);
    
    printf("Program ends\n");
    exit(EXIT_SUCCESS);
}
    /* End of main function */





/*  Function 1  : Explanation
    Purpose     : To explain the program for the user at the beginning. No arguments or returns.
*/

void explanation()
{
    printf("\n\n\n\n**********\n");
    printf("This our pet shop's program used to assist customers in purchases.\n"
           "Please note that the program will keep a record of your purchases.\n"
           "NB: Some pets have reduced prices based on their older ages.\n");
    printf("**********\n\n\n\n");
} /* OK */





/*  Function 2  : Menu
    Purpose     : To get the user to select their choice
    Arguments   : None
    Returns     : Menu choice
*/

int menu()
{
    int choice;
    
    printf("\n\n Choose one of the options below by entering its number:\n");
    printf("0: Quit\n");
    printf("1: Select a specific pet for purchase by category and breed\n");
    printf("2: Select a category of pet and view all available options\n");
    
    do
    {
        printf("Enter a valid choice (0-2):\n");
        scanf("%d", &choice);
    } while(choice < 0 || choice > 2);
    
    return (choice);
} /* OK */





/*  Function 3  : Buy Pet
    Purpose     : To get the user to select a specific pet for purchase by category and breed. Summarise purchase and show total price etc.
    Arguments   : Pointer to the pet array
    Returns     : Null
*/

void buy_pet(PET pet_array[])
{
    char category_choice[20];
    char breed_choice[20];
    int i;
    
    printf("Enter the exact category and breed of your desired pet. There is only one pet available for each particular breed.\n");
    scanf("%s %s", category_choice, breed_choice);
    
    for(i = 0; i < NUM_PETS; i++)
    {
        if((strcmp(category_choice, pet_array[i].petcategory)) == 0 && (strcmp(breed_choice, pet_array[i].breed)) == 0)
        {
            printf("Here are the details of your selected pet:\nCategory: %s\nBreed: %s\nAge: %d months\n Pet price: €%d\n Recommended equipment: %s\n Equipment price: €%d\n Total price: €%d\n", pet_array[i].petcategory, pet_array[i].breed, pet_array[i].age, pet_array[i].petprice, pet_array[i].petsequip.equipname, pet_array[i].petsequip.equipprice, pet_array[i].totalprice);
        }
    }
}





/*  Function 4  : View Category
    Purpose     : To allow the user to view all pets of a given category
    Arguments   : Pointer to the pet array
    Returns     : Null
*/

void view_category(PET pet_array[])
{
    char input[20];
    int i;
    int a = 0;
    
    printf("Enter a category of pet below\n");
    scanf("%s", input);
    printf("Here are all the available pets of this category:\n");
    
    for(i = 0; i < NUM_PETS; i++)
    {
        if((strcmp(pet_array[i].petcategory, input)) == 0)
        {
            a++;
            printf("%d: \"%s\" breed, %d months old. Price: €%d\n", a, pet_array[i].breed, pet_array[i].age, pet_array[i].petprice);
            printf("When buying this pet, it is recommended that customers also buy one %s, which costs €%d, bringing the total price to €%d\n\n", pet_array[i].petsequip.equipname, pet_array[i].petsequip.equipprice, pet_array[i].totalprice);
        }
            
    }
}
