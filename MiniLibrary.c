#include <stdio.h>
#include <string.h>

char usercheck(int id , int password){
    if(no match)
    return no
    else if(borrower)
    return borrow
    else 
    return officer
}

char borrowersearch(char author[])
{
    char choice;
    print("Result");
    printf("Enter choice");
    scanf("%c", choice);
    while (choice != 't' && choice != 'b')
    {
        printf("Enter choice");
        scanf("%c", choice);
    }
    return choice;
}

int borrowercheck(char title[])
{
    if (has)
        printf("Result");
        return 0;
    else
        return 1;
}

void borrowermenu(){
    char command;

    printf("Begin! print interface...");
    printf("Enter Command");
    scanf("%c", command);

    switch (command)
    {
    case 'q':
        char author[100] = {};
        printf("Ask for author");
        scanf("%s", author);
        char choice = borrowersearch(author);
        while(choice == 't'){
            printf("Ask for author");
            scanf("%s", author);
            choice = borrowersearch(author);
        };
        //return to menu
        break;

    case 's':
        char title[100] = {};
        printf("Ask for title");
        scanf("%s", title);
        int x = 0;
        while (x == 0 ){
            x = borrowercheck(title);}
        
    }
}






int main(int argc, char const *argv[])
{
    char userid[100] , password[100];
   printf("User name");
    scanf("%s" , userid);
    printf("Password");
    scanf("%s", password);

    char status = usercheck(userid , password);

    return 0;
}