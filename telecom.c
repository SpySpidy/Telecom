#include<stdio.h>
#include<stdlib.h>

void menu();
void change();
void english();
void hindi();
void port();
void cc();
void bill();
void port_h();
void cc_h();
void bill_h();
void change_h();

void main()
{
    menu();
}

void menu()
{
    int ch;
    printf("\n 1.To continue in english press 1\n 2.Hindi mein jaankari ke liye 2 dabayein\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 0:
        break;
    case 1:
        english();
        break;
    case 2:
        hindi();
        break;
    default :
        printf("Enter Correct Choice");
        menu();
        break;
    }

}
void english()
{
    int ch;
    printf("\n 1.To know your bill press 1\n 2.For porting request press 2\n 3.To talk to our customer care executive press 3\n 4.To go back to previous menu press 9\n 5.To exit press 0\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 0:
        break;
    case 9:
        menu();
        break;
    case 1:
        bill();
        break;
    case 2:
        port();
        break;
    case 3:
        cc();
        break;
    default:
        printf("Enter Correct Choice");
        english();
        break;

    }

}

void hindi()
{
    int ch;
    printf("\n 1.Balance Prapti Hetu 1 Dabayein 1\n 2.Apna Number Port Krne k Liye 2 Dabayein\n 3.Customer Care se Baat Krne k liye 3 Dabayein\n 4.Peechle Menu me Wapas Jaane K Liye 9 Dabayein\n 5.Call Samapti k Liye 0 Dabayein\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 0:
        break;
    case 9:
        menu();
        break;
    case 1:
        bill_h();
        break;
    case 2:
        port_h();
        break;
    case 3:
        cc_h();
        break;
    default:
        printf("Enter Correct Choice");
        hindi();
        break;

    }

}

void bill()
{

    printf("\n   Your bill is 800 Rupees\n\n");
    change();
}
void port()
{
    printf("\n   Your porting request is under process\n\n");
    change();
}
void cc()
{
    printf("\n   All our executives are busy learning Java. Please try again later\n\n");
    change();
}
void bill_h()
{

    printf("\n   Aapki Bakaya Raashi Rs.800 Hai\n\n");
    change_h();
}
void port_h()
{
    printf("\n   Your porting request is under process\n\n");
    change_h();
}
void cc_h()
{
    printf("\n   All our executives are busy learning Java. Please try again later\n\n");
    change_h();
}
void change()
{
    int ch;
    printf("\n 1.To go back to previous menu press 9\n 2.To exit press 0\n");
    scanf("%d",&ch);
    switch(ch)
    {


    case 0:
        break;
    case 9:
        english();
        break;
    default:
        printf("Wrong Choice...");
        change();
        break;
    }
}
void change_h()
{
    int ch;
    printf("\n 1.To go back to previous menu press 9\n 2.To exit press 0\n");
    scanf("%d",&ch);
    switch(ch)
    {


    case 0:
        break;
    case 9:
        hindi();
        break;
    default:
        printf("Wrong Choice...");
        change_h();
        break;
    }
}
