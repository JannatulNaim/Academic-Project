#include <mysql.h>
#include<stdio.h>
#include<string.h>

///Function We Use
void Menu(void);
void welcome(void);
void choice(void);
void add(void);
void deletebooks(void);
void editbooks(void);
void closeapplication(void);


void finish_with_error(MYSQL *con)
{
    fprintf(stderr, "%s\n", mysql_error(con));
    mysql_close(con);
    exit(1);
}


///Password Part
void Password(void)
{
    char password[10]= {"CHAMPION"};
    char input[50];

    printf("\n\n\n\n\t\t\t  \xB2\xDB\xB2\xDB\xB2 PASSWORD  PROTECTED \xB2\xDB\xB2\xDB\n\n");
    printf("\t\t\t (Type 'CHAMPION' for Password) \n\n\n\n");
    printf(" \t\t Enter Password : ");

    gets(input);
    if(strcmp(password,input)==0)
    {
        printf("\n\t\tPassword Match\n");
        printf("\n\t\tPress Any key to continue...");
        getch();
    }
    else
    {
        printf("\n\n\n\n\a\t\tWarning!! Incorrect Password\n");
        printf("\n\t\tPress Any key to Re-Enter your password...");
        getch();
        system("cls");
        Password();
    }
}

///Welcome Part
void welcome(void)
{
    printf("\n\n\n\n\t\t  Welcome to Library Management System     Time: %s\n",__TIME__);
    printf("\t\t\t\t\t\t\t   Date: %s\n\n",__DATE__);

    printf("\t\t  *          **       **    ********    \n");
    printf("\t\t  *          * *     * *   *       *    \n");
    printf("\t\t  *          *  *   *  *   *            \n");
    printf("\t\t  *          *   ***   *    ********    \n");
    printf("\t\t  *          *         *            *   \n");
    printf("\t\t  *      *   *         *    *       *   \n");
    printf("\t\t  ********   *         *    ********   ...... \n");

    printf("\n\n\n\n\t\t\t\t\t\t      Developed by\n\n");
    printf("\t\t\t\t\t\tJannatul Naim - 161311028\n");
    printf("\t\t\t\t\t   Sad Bin Sadian Mridha - 161311025\n");
    printf("\t\t\t\t\t Dept. Of C.S.E, Varendra University\n");
    printf("\n\n\t\tPress Any key to Continue...");
    getch();
}


///Main Menu
void Menu(void)
{
    printf("\n\n\n\n\n");
    printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU");
    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");

    printf("\t\t\t\xDB\xDB\xDB\xDB\xB2 1. Add Books   \n\n");

    printf("\t\t\t\xDB\xDB\xDB\xDB\xB2 2. Delete Books\n\n");

    printf("\t\t\t\xDB\xDB\xDB\xDB\xB2 3. Update Book's Record\n\n");

    printf("\t\t\t\xDB\xDB\xDB\xDB\xB2 4. Close Application\n\n");

    printf("\t\t\t----------------------------------------\n");

    printf("\t\t\tEnter your choice:\n\n");

}

///Main Function
int main(int argc, char **argv)
{
    int A,B,C,j;


   ///MYSQL Connection With Server
    char *server = "localhost";
    char *user = "root";
    char *password = "";
    char *database = "Library Management System";

    MYSQL *conn = mysql_init(NULL);

    if (conn == NULL)
    {
        fprintf(stderr, "%s\n", mysql_error(conn));
        exit(1);
    }

    if (!mysql_real_connect(conn, server,
                            user, password, database, 0, NULL, 0))
    {
        fprintf(stderr, "%s\n", mysql_error(conn));
        mysql_close(conn);
        exit(1);
    }


    Password();
    system("cls");
    welcome();
    system("cls");
L3:
    Menu();

    scanf("%d",&A);
    system("cls");
    switch(A)
    {
///Data Insert
    case 1:
        printf("\n\n\n\t\t\t\t 1. Create A Table\n");
        printf("\t\t\t\t\t or\n");
        printf("\t\t\t\t 2. Already Created \n\n");
        printf("\t\t\t\t Enter your Choice : ");
        scanf("%d",&B);

        if(B==1)
        {

            if (mysql_query(conn, "CREATE TABLE BookInfo (ID INT(10), BookName VARCHAR(255),AuthorsName VARCHAR(255),Quantity INT(30),Rack INT(20), Price INT(10))"))

                fprintf(stderr, "%s\n", mysql_error(conn));
            printf("\n\n\t\t\t Table Created SuccessFully\n");
L2:
            goto L1;

        }
        else if(B==2)
        {

L1:
            printf("\n\n\t\t Please Wait Your Inserted Data in Progress....\n");

            for(j=0; j<20; j++)
            {
                printf("\t\t\t\t........\n");
            }

            if (mysql_query(conn, "INSERT INTO BookInfo VALUES(1,'Teach Yourself','Ashraful Islam',5,3,120)"));
            {
                fprintf(stderr, "%s\n", mysql_error(conn));

            }
            if (mysql_query(conn, "INSERT INTO BookInfo VALUES(2,'Easy Programming','Sad Bin Sadian Mridha',6,4,95)"));
            {
                fprintf(stderr, "%s\n", mysql_error(conn));

            }
            if (mysql_query(conn, "INSERT INTO BookInfo VALUES(3,'C++ Book ','Naim Noyon',9,6,125)"));
            {
                fprintf(stderr, "%s\n", mysql_error(conn));

            }
            if (mysql_query(conn, "INSERT INTO BookInfo VALUES(4,'C# for Beginner','Sahrier Subin',7,2,165)"));
            {
                fprintf(stderr, "%s\n", mysql_error(conn));

            }
            if (mysql_query(conn, "INSERT INTO BookInfo VALUES(5,'Learn Java','Herbart Sheld',5,3,120)"));
            {
                fprintf(stderr, "%s\n", mysql_error(conn));

            }
            printf("\n\t\t   Your Data Inserted SuccessFully\n\n\n");
        }
        printf("\n\t\t   Do you want to Insert Again-Yes(1),No(2)\n");
        printf("\n\t\t   Enter your Choice : ");
        scanf("%d",&C);
        if(C==1)
        {
            system("cls");
            goto L2;
        }
        else if (C==2)
        {
            system("cls");
            goto L3;
        }
///Data Delete
    case 2:
        if (mysql_query(conn, "DELETE FROM BookInfo WHERE ID=1"));
        {
L4:
            printf("\n\n\t\t Please Wait Your Deleted Data in Progress....\n");

            for(j=0; j<20; j++)
            {
                printf("\t\t\t\t........\n");
            }
            fprintf(stderr, "%s\n", mysql_error(conn));
            printf("\n\t\t   Your Data Deleted SuccessFully\n\n\n");

        }
        printf("\n\t\t   Do you want to Delete Again-Yes(1),No(2)\n");
        printf("\n\t\t   Enter your Choice : ");
        scanf("%d",&C);
        if(C==1)
        {
            system("cls");
            goto L4;
        }
        else if (C==2)
        {
            system("cls");
            goto L3;
        }

///Data Update
    case 3:
        if (mysql_query(conn, "UPDATE  BookInfo SET ID=6 WHERE ID=5"));
        {
L5:
            printf("\n\n\t\t Please Wait Your Updated Data in Progress....\n");

            for(j=0; j<20; j++)
            {
                printf("\t\t\t\t........\n");
            }
            fprintf(stderr, "%s\n", mysql_error(conn));
            printf("\n\t\t   Your Data Updated SuccessFully\n\n\n");

        }
        printf("\n\t\t   Do you want to Update Again-Yes(1),No(2)\n");
        printf("\n\t\t   Enter your Choice : ");
        scanf("%d",&C);
        if(C==1)
        {
            system("cls");
            goto L5;
        }
        else if (C==2)
        {
            system("cls");
            goto L3;
        }

///Closing Application
    case 4:
        system("cls");
        printf("\n\n\n\t\t\t Thanks for using the Program..\n\n\n\n");
        break;
    }

    mysql_close(conn);
    exit(0);


    return 0;
}
