//Team Tienda
//project title : Online shopping

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

    int num;
    printf("               ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("               ^            Welcome                    To                TIENDA                  ^\n");
    printf("               ^                                                                                 ^\n");
    printf("               ^   +++++++++    +++    ++++++++++    +++       +++    ++++++        +++          ^\n");
    printf("               ^   +++++++++    +++    ++++++++++    ++++      +++    +++++++     +++ +++        ^\n");
    printf("               ^      +++       +++    +++           +++ +     +++    +++  +++   +++   +++       ^\n");
    printf("               ^      +++       +++    +++++++       +++  +    +++    +++  +++   +++   +++       ^\n");
    printf("               ^      +++       +++    +++++++       +++   +   +++    +++  +++   +++++++++       ^\n");
    printf("               ^      +++       +++    +++           +++    +  +++    +++  +++   +++++++++       ^\n");
    printf("               ^      +++       +++    ++++++++++    +++     + +++    +++++++    +++   +++       ^\n");
    printf("               ^      +++       +++    ++++++++++    +++      ++++    ++++++     +++   +++       ^\n");
    printf("               ^                                                                                 ^\n");
    printf("               ^                                                                                 ^\n");
    printf("               ^     Kafi   -   Pritom   -   Tahmid   -   Tasnim   -   Sakib   -   Tonni         ^\n");
    printf("               ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    ;
    printf("\n\tType 1 for enter Log in page\n");

    scanf("%d",&num);
    switch(num)
    {
    case 1:
        login();
        break;
        exit(1);
    }
}
void login()
{
char username[20];
    char password[10];
    printf("\n\t\t\tEnter Username:-");
    scanf("%s",&username);
    printf("\n\t\t\tEnter Password:-");
    scanf("%s",&password);
    choice();
}
void choice()
{
    int num;
    char gender[2];
    printf("\n\t\tEnter your Gender (m for male or f for female):-");
    scanf("%s",&gender);
    if(strcmp(gender,"m")==0 )
    {
        printf("\n\n\t\t\t\tSelect category:-\n");
        printf("\t\t\t\t1. For Fashion Collection.\n");
        printf("\t\t\t\t2. For Gadget.\n");
        scanf("%d",&num);
        switch(num)
        {

        case 1:
            man();
            break;
        case 2:
            gedget();
            break;
            exit(1);
        }
    }
    else if(strcmp(gender,"f")==0 )
    {
        printf("\n\n\t\t\t\tSelect category:-\n");
        printf("\t\t\t\t1. For Fashion Collection.\n");
        printf("\t\t\t\t2. For Gadget.\n");
        scanf("%d",&num);
        switch(num)
        {

        case 1:
            woman();
            break;
        case 2:
            gedget();
            break;
            exit(1);
        }
    }
}
void man()
{
    struct Node
    {
        char brand[25];

        float price;
        struct Node *next;
    };
    typedef struct Node node;
    {
        int qt,num;
        float total;

        node *head;
        head=(node *)malloc(sizeof(node));
        strcpy(head->brand,"Panjabi") ;

        head->price=2599.00;
        printf("\n\n\n\t\t\t-----------------------------------------------------------------------\n");
        printf("\t\t\tBrand name            ------------------------------          Price\n");
        printf("\t\t\t-----------------------------------------------------------------------\n");
        printf("\t\t\t1.%s             ------------------------------       BDT %.2f \n",head->brand,head->price);

        head->next=(node*)malloc(sizeof(node));
        strcpy( head->next->brand,"Shirt");
        head->next->price=2399.00;
        printf("\t\t\t2.%s               ------------------------------       BDT %.2f\n",head->next->brand,head->next->price);

        head->next->next=(node*)malloc(sizeof(node));
        strcpy(head->next->next->brand,"Pant");
        head->next->next->price=3499.00;
        printf("\t\t\t3.%s                ------------------------------       BDT %.2f\n",head->next->next->brand,head->next->next->price);

        head->next->next->next=(node*)malloc(sizeof(node));
        strcpy(head->next->next->next->brand,"Full T-Shirt");
        head->next->next->next->price=1249.00;
        printf("\t\t\t4.%s        ------------------------------       BDT %.2f\n",head->next->next->next->brand,head->next->next->next->price);

        head->next->next->next->next=(node*)malloc(sizeof(node));
        strcpy(head->next->next->next->next->brand,"Belt");
        head->next->next->next->next->price=1099.00;
        printf("\t\t\t5.%s                ------------------------------       BDT %.2f\n",head->next->next->next->next->brand,head->next->next->next->next->price);

        head->next->next->next->next->next=(node*)malloc(sizeof(node));
        strcpy(head->next->next->next->next->next->brand,"Shoe (Bata)");
        head->next->next->next->next->next->price=3599.00;
        printf("\t\t\t6.%s         ------------------------------       BDT %.2f\n",head->next->next->next->next->next->brand,head->next->next->next->next->next->price);

        head->next->next->next->next->next->next=(node*)malloc(sizeof(node));
        strcpy( head->next->next->next->next->next->next->brand,"Watch");
        head->next->next->next->next->next->next->price=2999.00;
        printf("\t\t\t7.%s               ------------------------------       BDT %.2f\n",head->next->next->next->next->next->next->brand, head->next->next->next->next->next->next->price);

        head->next->next->next->next->next->next->next=NULL;
        printf("\n\n\t\t\t\t\tChoose the product you want to buy:-");
        scanf("%d",&num);
        switch(num)
        {
        case 1:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*2599.00;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
            tk();
            break;
        case 2:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*2399.00;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
            tk();
            break;
        case 3:

            printf("\n\t\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*3499.00;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
            tk();
            break;
        case 4:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*1249.00;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
            tk();
            break;
        case 5:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*1099.00;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
            tk();
            break;
        case 6:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*3599.00;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
            tk();
            break;
        case 7:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*2999.00;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
            tk();
            break;

        }
    }
}
void woman()
{
    struct Node
    {
        char brand[25];
        float price;
        struct Node *next;
    };
    typedef struct Node node;
    {
        int qt,num;
        float total;

        node *head;
        head=(node *)malloc(sizeof(node));
        strcpy(head->brand,"Kurtis") ;

        head->price=2999.00;
        printf("\n\n\n\t\t\t---------------------------------------------------------------------\n");
        printf("\t\t\tBrand name              ---------------------------           Price\n");
        printf("\t\t\t---------------------------------------------------------------------\n");
        printf("\t\t\t1.%s                ---------------------------      BDT %.2f \n",head->brand,head->price);

        head->next=(node*)malloc(sizeof(node));
        strcpy( head->next->brand,"Sharee ");
        head->next->price=10999.00;
        printf("\t\t\t2.%s               ---------------------------      BDT %.2f\n",head->next->brand,head->next->price);

        head->next->next=(node*)malloc(sizeof(node));
        strcpy(head->next->next->brand,"Salwar Kamij");
        head->next->next->price=4550.00;
        printf("\t\t\t3.%s          ---------------------------      BDT %.2f\n",head->next->next->brand,head->next->next->price);

        head->next->next->next=(node*)malloc(sizeof(node));
        strcpy(head->next->next->next->brand,"Lehanga");
        head->next->next->next->price=11999.00;
        printf("\t\t\t4.%s               ---------------------------      BDT %.2f\n",head->next->next->next->brand,head->next->next->next->price);

        head->next->next->next->next=(node*)malloc(sizeof(node));
        strcpy(head->next->next->next->next->brand,"Bata heels for Women");
        head->next->next->next->next->price=2990.00;
        printf("\t\t\t5.%s  ---------------------------      BDT %.2f\n",head->next->next->next->next->brand,head->next->next->next->next->price);

        head->next->next->next->next->next=(node*)malloc(sizeof(node));
        strcpy(head->next->next->next->next->next->brand,"Handbag For Women");
        head->next->next->next->next->next->price=3599.00;
        printf("\t\t\t6.%s     ---------------------------      BDT %.2f\n",head->next->next->next->next->next->brand,head->next->next->next->next->next->price);

        head->next->next->next->next->next->next=(node*)malloc(sizeof(node));
        strcpy( head->next->next->next->next->next->next->brand,"Bata Sandal for Women");
        head->next->next->next->next->next->next->price=5999.00;
        printf("\t\t\t7.%s ---------------------------      BDT %.2f\n",head->next->next->next->next->next->next->brand,  head->next->next->next->next->next->next->price);

        head->next->next->next->next->next->next->next=NULL;
        printf("\n\n\tChoose the product you want to buy:-");
        scanf("%d",&num);
        switch(num)
        {
        case 1:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*2999.00;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
            tk();
            break;
        case 2:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*10999.00;;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
            tk();
            break;
        case 3:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*4550.00;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
            tk();
            break;
        case 4:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*11999.00;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
            tk();
            break;
        case 5:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*2990.00;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
            tk();
            break;
        case 6:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*3599.00;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
            tk();
            break;
        case 7:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*5999.00;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
            tk();
            break;
            exit(0);
        }
    }
}
void gedget()
{
    struct Node
    {
        char brand[25];
        float price;
        struct Node *next;
    };
    typedef struct Node node;
    {
        int qt,num;
        float total;
        node *head;
        head=(node *)malloc(sizeof(node));
        strcpy(head->brand,"Samsung Fold 2 12/256") ;

        head->price=219900.00;
        printf("\n\n\n\t\t\t----------------------------------------------------------------------------------\n");
        printf("\t\t\tBrand name                        ---------------------------           Price\n");
        printf("\t\t\t----------------------------------------------------------------------------------\n");
        printf("\t\t\t1.%s           ---------------------------       BDT %.2f \n",head->brand,head->price);

        head->next=(node*)malloc(sizeof(node));
        strcpy( head->next->brand,"Iphone 12 mini 6/64");
        head->next->price=59999.00;
        printf("\t\t\t2.%s             ---------------------------       BDT %.2f\n",head->next->brand,head->next->price);

        head->next->next=(node*)malloc(sizeof(node));
        strcpy(head->next->next->brand,"Iphone 12 pro max 6/256");
        head->next->next->price=180000.00;
        printf("\t\t\t3.%s         ---------------------------       BDT %.2f\n",head->next->next->brand,head->next->next->price);

        head->next->next->next=(node*)malloc(sizeof(node));
        strcpy(head->next->next->next->brand,"POCO F2 pro 8/128");
        head->next->next->next->price=44900.00;
        printf("\t\t\t4.%s               ---------------------------       BDT %.2f\n",head->next->next->next->brand,head->next->next->next->price);


        head->next->next->next->next=(node*)malloc(sizeof(node));
        strcpy(head->next->next->next->next->brand,"One plus 8T 8/128");
        head->next->next->next->next->price=59999.00;
        printf("\t\t\t5.%s               ---------------------------       BDT %.2f\n",head->next->next->next->next->brand,head->next->next->next->next->price);


        head->next->next->next->next->next=(node*)malloc(sizeof(node));
        strcpy(head->next->next->next->next->next->brand,"GoPro HERO9 Black");
        head->next->next->next->next->next->price=43999.00;
        printf("\t\t\t6.%s               ---------------------------       BDT %.2f\n",head->next->next->next->next->next->brand,head->next->next->next->next->next->price);


        head->next->next->next->next->next->next=(node*)malloc(sizeof(node));
        strcpy( head->next->next->next->next->next->next->brand,"Galaxy Watch Active 2");
        head->next->next->next->next->next->next->price=24999.00;
        printf("\t\t\t7.%s           ---------------------------       BDT %.2f\n",head->next->next->next->next->next->next->brand,  head->next->next->next->next->next->next->price);

        head->next->next->next->next->next->next->next=NULL;
        printf("\n\n\t\t\t\t\tChoose the product you want to buy:-");
        scanf("%d",&num);
        switch(num)
        {
        case 1:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*219900.00;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
            tk();
            break;
        case 2:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*59999.00;;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
            tk();
            break;
        case 3:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*180000.00;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
            tk();
            break;
        case 4:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*44900.00;;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
           tk();
            break;
        case 5:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*59999.00;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
           tk();
            break;
        case 6:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*43999.00;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
            tk();
            break;
        case 7:

            printf("\n\t\t\t\t\tEnter the quantity you want to buy:-");
            scanf("%d",&qt);
            total=qt*24999.00;
            printf("\n\t\t\t\t\tYour total bill is BDT %.2f\n",total);
            tk();
            break;

            exit(0);
        }
    }
}
void tk()
{
    char rep[2];
    int num;
    char address[100];
    long unsigned int phone_no;
    printf("\n\t\t\t\t\t\t\t---------------");
    printf("\n\t\t\t\t\t\t\tPAYMENT METHODS");
    printf("\n\t\t\t\t\t\t\t---------------\n");
    printf("Type 1 for Cash on Delivery.");
    printf("Choose Payment Option:-");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        printf("\nGive us the shipping address of your where we deliver your product:-");
        scanf("%s",&address);
        printf("\n\t\t\t\t\tEnter your contact number:-");
        scanf("%ld",&phone_no);
        printf("\n\tThanks you sir! We will deliver your product in your hand in few days!\n");
        printf("\n\n\n\tSir, if you want more to buy y for yes or n for no?:-");
        scanf("%s",&rep);
        if(strcmp(rep,"y")==0)
        {
            return choice();
        }

        exit(1);
    }
    return 0;
}

