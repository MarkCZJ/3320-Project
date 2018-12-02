#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct user {
    int userID;
    char firstName[100];
    char LastName[100];
    int acctNum;
    char password[100];
    char class;
}
struct book {
    int bookID;
    char title[100];
    char author[100];
    struct user *user;
    int borrowDate[3];
    int returnDate[3];
}


char usercheck(int id , char password, struct user users, int length){
    int i = 0;
    for (;i<length;i++) {
        
        if(users[i].userID==id)
            if (!strcmp(password,user[i].password)
                return class;
    }
    return '\0';            

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
        while (x == 0){
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
    x= usercheck(userid , password);
    while(x =0){
        printf("User name");
        scanf("%s", userid);
        printf("Password");
        scanf("%s", password);
        x = usercheck(userid, password);
    }
    
    if( x == 1){
        borrowermenu();
    }

    else 
        librarianmenu();

    return 0;
}
