#include <stdio.h>
char choice_1();
void starters();
void soup();
void vegetables();
void tandoori_roti();
void rice();
void dal();


int sum = 0;
int k, l, m, n;

int main()
{
    char ch;

start:

    printf("\n");
    printf("\t\t             +--------------------------------+        \n");
    printf("\t\t            ||  WELCOME TO GARDEN RESTAURANT  ||        \n");
    printf("\t\t             +--------------------------------+         \n\n");

    printf("\n\t 1. STARTERS \n\t 2. Soup \n\t 3. Vegetables  \n\t 4. Tandoori Roti \n\t 5. Rice \n\t 6. Dal \n");

    printf("\n\t Select Number: ");
    scanf(" %c", &ch);

    switch (ch)
    {
    case '1':
        printf("\n\n \t # STARTERS #\n \n");
        starters();
        break;

    case '2':
        printf("\n\n \t # SOUP #\n \n");
        soup();
        break;

    case '3':
        printf("\n\n \t # VEGETABLES #\n \n");
        vegetables();
        break;

    case '4':
        printf("\n\n \t # TANDOORI ROTI #\n \n");
        tandoori_roti();
        break;

    case '5':
        printf("\n\n \t # RICE #\n \n");
        rice();
        break;

    case '6':
        printf("\n\n \t # DAL #\n \n");
        dal();
        break;
    

    default:
        printf("\n\n\tPlease enter valid Food number \n\n");
        goto start;
        break;
    }

    return 0;
}


void bill(int total)
{
    printf("============================================");
    printf("\n\n");
    
    printf("\n------------------------------------------");
    printf("\n \t Food bill : %d ", total);
    printf("\n \t      GST  : %f",total*0.18);
    printf("\n------------------------------------------");
    printf("\n \tTotal bill : %f ", total+(total*0.18));

    printf("\n------------------------------------------\n\n");

    printf("\n\n\n\t  +------------------------- THANK YOU ------------------------- +          \n\n");
}

char choice_1()
{
    char ch;
    printf("Would you like anything else? ");
    printf("\n [1] Yes  , [2] No\n");
    printf("Enter your choice: ");
    scanf(" %c", &ch);

    return ch;
}

void starters()
{
    char ch,quantity,num;
    int total = 0, a, b;
    printf("\n\t \t       Name            Rs.  \n ");
    printf("\t \t  1. FINGER CHIPS   :   80  \n ");
    printf("\t \t  2. PANEER CHILLY  :   170 \n ");
    printf("\t \t  3. MANCHURIAN     :   120 \n ");
    printf("\t \t  4. CRISPY         :   170 \n ");
    printf("\t \t  5. CHEESE KABAB   :   150 \n ");
    printf("\t \t  6. PANEER SATAY   :   180 \n ");

    num:
    printf("\nSelect Number: ");
    scanf(" %c", &num);
    num = num-48;
    if(num>=49 || num<1 || num>6){
        printf("#please Enter valid Food Number#\n");
        goto num;
    }

    
    quantity:
    printf("enter quantity : ");
    scanf("%s", &quantity);
    quantity=quantity-48;
    if(quantity>=49 || quantity<1 || quantity>9){ 
        printf("\n please enter Valid quantity \n");
        goto quantity;
    }
    
    
    k = num;

    if (num == 1)
    {
        sum = sum + 80*quantity;
    }
    else if (num == 2)
    {
        sum = sum + 170*quantity;
    }
    else if (num == 3)
    {
        sum = sum + 120*quantity;
    }

    if (num == 4)
    {
        sum = sum + 170*quantity;
    }
    else if (num == 5)
    {
        sum = sum + 150*quantity;
    }
    else if (num == 6)
    {
        sum = sum + 180*quantity;
    }

    total = total + sum;

    ch = choice_1();
start:
    if (ch == '1')
    {
        starters();
    }
    else if (ch == '2')
    {
    choice2:
        printf("\nWould you like to place another order? ");
        printf("\n[1] Yes  , [2] No\n");
        printf("Enter your choice: ");
        scanf(" %c", &ch);
        if (ch == '1')
        {
            main();
        }
        else if (ch == '2')
        {
            bill(total);
        }
        else
        {
            printf("\nPlease enter your choice number\n\n");
            goto choice2;
        }
    }
    else
    {
        printf("\nPlease enter your choice number\n\n");
        ch = choice_1();
        goto start;
    }
}

void soup()
{
    char ch,quantity,num;
    int total = 0, a, b;

    printf("\n\t \t       Name             Rs.  \n ");
    printf("\t \t  1. Tomato Soup            :   90  \n ");
    printf("\t \t  2. Manchow Soup           :   120 \n ");
    printf("\t \t  3. Hot & sour Veg.Soup    :   110 \n ");
    printf("\t \t  4. Sweet Corn Veg.Soup    :   110 \n ");
    printf("\t \t  5. Lemon Coriander Soup   :   110 \n ");
    printf("\t \t  6. veg.Noodles Soup       :   120 \n ");

   num:
    printf("\nSelect Number: ");
    scanf(" %c", &num);
    num = num-48;
    if(num>=49 || num<1 || num>6){
        printf("#please Enter valid Food Number#\n");
        goto num;
    }

    quantity:
    printf("enter quantity : ");
    scanf("%s", &quantity);
    quantity=quantity-48;
    if(quantity>=49 || quantity<1 || quantity>9){ 
        printf("\n please enter Valid quantity \n");
        goto quantity;
    }
    

    if (num == 1)
    {
        sum = sum + 90*quantity;
    }
    else if (num == 2)
    {
        sum = sum + 120*quantity;
    }
    else if (num == 3)
    {
        sum = sum + 110*quantity;
    }
    else if (num == 4)
    {
        sum = sum + 110*quantity;
    }
    else if (num == 5)
    {
        sum = sum + 110*quantity;
    }
    else if (num == 6)
    {
        sum = sum + 120*quantity;
    }

    total = total + sum;

    ch = choice_1();
start:
    if (ch == '1')
    {
        soup();
    }
    else if (ch == '2')
    {
    choice2:
        printf("\nWould you like to place another order? ");
        printf("\n[1] Yes  , [2] No\n");
        printf("Enter your choice: ");
        scanf(" %c", &ch);
        if (ch == '1')
        {
            main();
        }
        else if (ch == '2')
        {
            bill(total);
        }
        else
        {
            printf("\nPlease enter your choice number\n\n");
            goto choice2;
        }
    }
    else
    {
        printf("\nPlease enter valid Food number\n\n");
        ch = choice_1();
        goto start;
    }
}

void vegetables()
{
    char ch,quantity,num;
    int total = 0, a, b;
    printf("\n\t \t       Name                 Rs.  \n ");
    printf("\t \t  1. Sp.Garden            :   240 \n ");
    printf("\t \t  2. Veg Kolhapuri        :   160 \n ");
    printf("\t \t  3. Veg Handi            :   150 \n ");
    printf("\t \t  4. Paneer Bhurji        :   180 \n ");
    printf("\t \t  5. Kaju Curry           :   220 \n ");
    printf("\t \t  6. Kaju Masala          :   220 \n ");
    printf("\t \t  7. Paneer Tawa Masala   :   210 \n ");
    printf("\t \t  8. Paneer Tikka Masala  :   180 \n ");
    printf("\t \t  9. Veg. Jaipuri Mix     :   180 \n ");

    num:
    printf("\nSelect Number: ");
    scanf(" %c", &num);
    num = num-48;
    if(num>=49 || num<1 || num>9){
        printf("#please Enter valid Food Number#\n");
        goto num;
    }

    quantity:
    printf("enter quantity : ");
    scanf("%s", &quantity);
    quantity=quantity-48;
    if(quantity>=49 || quantity<1 || quantity>9){ 
        printf("\n please enter Valid quantity \n");
        goto quantity;
    }
    
    if (num == 1)
    {
        sum = sum + 240*quantity;
    }
    else if (num == 2)
    {
        sum = sum + 160*quantity;
    }
    else if (num == 3)
    {
        sum = sum + 150*quantity;
    }
    else if (num == 4)
    {
        sum = sum + 180*quantity;
    }
    else if (num == 5)
    {
        sum = sum + 220*quantity;
    }
    else if (num == 6)
    {
        sum = sum + 220*quantity;
    }
    else if (num == 7)
    {
        sum = sum + 210*quantity;
    }
    else if (num == 8)
    {
        sum = sum + 180*quantity;
    }
    else if (num == 9)
    {
        sum = sum + 180*quantity;
    }

    total = total + sum;

    ch = choice_1();
start:

    if (ch == '1')
    {
        vegetables();
    }
    else if (ch == '2')
    {

    choice2:
        printf("\n\nWould you like to place another order? ");
        printf("\n[1] Yes  , [2] No\n");
        printf("Enter your choice: ");
        scanf(" %c", &ch);
        if (ch == '1')
        {
            main();
        }
        else if (ch == '2')
        {
            bill(total);
        }
        else
        {
            printf("\nPlease enter your choice number\n\n");
            goto choice2;
        }
    }
    else
    {
        printf("\nPlease enter valid Food number\n\n");
        ch = choice_1();
        goto start;
    }
}

void tandoori_roti()
{

    char ch,quantity,num;
    int total = 0, a, b;
    printf("\n\t \t      Name              Rs.  \n ");
    printf("\t \t  1.Phulka Roti       :   8 \n ");
    printf("\t \t  2. Tandoor Roti     :   10 \n ");
    printf("\t \t  3. Butter Roti      :   15 \n ");
    printf("\t \t  4. Plain Naan       :   20 \n ");
    printf("\t \t  5.   butter Naan    :   40 \n ");
    printf("\t \t  6.   Cheese Naan    :   60 \n ");
    printf("\t \t  7. Plain Kulcha     :   20 \n ");
    printf("\t \t  8. Butter Kulcha    :   30 \n ");
    printf("\t \t  9. Paneer Kulcha    :   40 \n ");

   num:
    printf("\nSelect Number: ");
    scanf(" %c", &num);
    num = num-48;
    if(num>=49 || num<1 || num>9){
        printf("#please Enter valid Food Number#\n");
        goto num;
    }

    quantity:
    printf("enter quantity : ");
    scanf("%s", &quantity);
    quantity=quantity-48;
    if(quantity>=49 || quantity<1 || quantity>9){ 
        printf("\n please enter Valid quantity \n");
        goto quantity;
    }
    
    if (num == 1)
    {
        sum = sum + 8*quantity;
    }
    else if (num == 2)
    {
        sum = sum + 10*quantity;
    }
    else if (num == 3)
    {
        sum = sum + 15*quantity;
    }
    else if (num == 4)
    {
        sum = sum + 20*quantity;
    }
    else if (num == 5)
    {
        sum = sum + 40*quantity;
    }
    else if (num == 6)
    {
        sum = sum + 60*quantity;
    }
    else if (num == 7)
    {
        sum = sum + 20*quantity;
    }
    else if (num == 8)
    {
        sum = sum + 30*quantity;
    }
    else if (num == 9)
    {
        sum = sum + 40*quantity;
    }

    total = total + sum;

    ch = choice_1();
start:
    if (ch == '1')
    {
        tandoori_roti();
    }
    else if (ch == '2')
    {

    choice2:
        printf("\n\nWould you like to place another order? ");
        printf("\n[1] Yes  , [2] No\n");
        printf("Enter your choice: ");
        scanf(" %c", &ch);
        if (ch == '1')
        {
            main();
        }
        else if (ch == '2')
        {
            bill(total);
        }
        else
        {
            printf("\nPlease enter your choice number\n\n");
            goto choice2;
        }
    }
    else
    {
        printf("\nPlease enter valid Food number\n\n");
        ch = choice_1();
        goto start;
    }
}


void rice()
{
    char ch,quantity,num;
    int total = 0;

    printf("\n\t \t       Name             Rs.  \n ");
    printf("\t \t  1. Plain Rice            :   50  \n ");
    printf("\t \t  2. Jeera Rice            :   70 \n ");
    printf("\t \t  3. Veg Pulao             :   100 \n ");
    printf("\t \t  4. schezwan rice         :   150 \n ");
    printf("\t \t  5. Garlic Fried rice     :   150 \n ");
    

    num:
    printf("\nSelect Number: ");
    scanf(" %c", &num);
    num = num-48;
    if(num>=49 || num<1 || num>5){
        printf("#please Enter valid Food Number#\n");
        goto num;
    }
    quantity:
    printf("enter quantity : ");
    scanf("%s", &quantity);
    quantity=quantity-48;
    if(quantity>=49 || quantity<1 || quantity>9){ 
        printf("\n please enter Valid quantity \n");
        goto quantity;
    }
    

    if (num == 1)
    {
        sum = sum + 50*quantity;
    }
    else if (num == 2)
    {
        sum = sum + 70*quantity;
    }
    else if (num == 3)
    {
        sum = sum + 100*quantity;
    }
    else if (num == 4)
    {
        sum = sum + 150*quantity;
    }
    else if (num == 5)
    {
        sum = sum + 150*quantity;
    }


    total = total + sum;

    ch = choice_1();
start:
    if (ch == '1')
    {
        rice();
    }
    else if (ch == '2')
    {
    choice2:
        printf("\nWould you like to place another order? ");
        printf("\n[1] Yes  , [2] No\n");
        printf("Enter your choice: ");
        scanf(" %c", &ch);
        if (ch == '1')
        {
            main();
        }
        else if (ch == '2')
        {
            bill(total);
        }
        else
        {
            printf("\nPlease enter your choice number\n\n");
            goto choice2;
        }
    }
    else
    {
        printf("\nPlease enter valid Food number\n\n");
        ch = choice_1();
        goto start;
    }
}

void dal()
{
    char ch,quantity,num;
    int total = 0;

    printf("\n\t \t       Name             Rs.  \n ");
    printf("\t \t  1. Dal Tadka             :   80  \n ");
    printf("\t \t  2. Dal Makhani           :   120 \n ");
    printf("\t \t  3. Dal Fry               :   90 \n ");

     num:
    printf("\nSelect Number: ");
    scanf(" %c", &num);
    num = num-48;
    if(num>=49 || num<1 || num>3){
        printf("#please Enter valid Food Number#\n");
        goto num;
    }

    quantity:
    printf("enter quantity : ");
    scanf("%s", &quantity);
    quantity=quantity-48;
    if(quantity>=49 || quantity<1 || quantity>9){ 
        printf("\n please enter Valid quantity \n");
        goto quantity;
    }
    


    if (num == 1)
    {
        sum = sum + 80*quantity;
    }
    else if (num == 2)
    {
        sum = sum + 120*quantity;
    }
    else if (num == 3)
    {
        sum = sum + 90*quantity;
    }

    total = total + sum;

    ch = choice_1();
start:
    if (ch == '1')
    {
        dal();
    }
    else if (ch == '2')
    {
    choice2:
        printf("\nWould you like to place another order? ");
        printf("\n[1] Yes  , [2] No\n");
        printf("Enter your choice: ");
        scanf(" %c", &ch);
        if (ch == '1')
        {
            main();
        }
        else if (ch == '2')
        {
            bill(total);
        }
        else
        {
            printf("\nPlease enter your choice number\n\n");
            goto choice2;
        }
    }
    else
    {
        printf("\nPlease enter valid Food number\n\n");
        ch = choice_1();
        goto start;
    }
}

