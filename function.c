

// List of functions used in this project

void main_loges()
{
system("clear");

printf("          \t\t\t\t1.     FOR VOTE ENTRY      -----------|||\n");
sleep(1);

printf("          \t\t\t\t2      FOR ADMIN PANEL    ----------|||\n");
sleep(1);

printf("          \t\t\t\t3      FOR WINNER         ----------|||\n");
sleep(1);

printf("          \t\t\t\t4      FOR EXIT         ----------|||\n\n\n\n\n");
sleep(1);

printf("       \t----------------------So Please Enter (1) ----------------------\n\n\n");

int T;
scanf("%d",&T);

if(T==1)
{

    voter_insert();
}

if(T==2)
{

    admin();
}

if(T==3)
{

    winner();
}
if(T==4)
{

    exi();
}
}

// Declearation of variables
int cunt=0, count=0, R=3, voteId1=0, voteId2=0, voteId3=0, voteId4=0, voteId5=0;
char a[1000];

void voter_insert()
{
    node *temp;

    char name[25],birth_date[15],f_name[25],m_name[25],id[10];
    system("clear");

    printf("\n\n\n\n");
    printf("\tIF NATIONAL ID,YOUR NAME,BIRTH DATE,YOUR FATHER NAME AND MOTHER NAME MATCH YOU CAN GIVE VOTE OTHERWISE NOT\n\n");
    sleep(1);

    printf("\t\t\t IF YOU DO WRONG %d  TIMES , THE PROGRAM WILL BE STOP AUTOMATICALLY \n\n\n",R);
    sleep(1);

    printf("\t\tPLEASE ----,\n");
    sleep(1);

    printf("\t\t\t\t ENTER YOUR NATIONAL ID NUMBER  ");
    scanf("%s",id);
    printf("\t\t\t\tENTER YOUR NAME                 ");
    scanf("%s",name);

    printf("\t\t\t\tENTER YOUR BIRTH DATE           ");
    scanf("%s",birth_date);

    printf("\t\t\t\tENTER YOUR FATHER NAME          ");
    scanf("%s",f_name);

    printf("\t\t\t\tENTER YOUR MOTHER NAME          ");
    scanf("%s",m_name);

    temp =(node *)malloc (sizeof(node));
    strcpy(temp->id,id);
    strcpy(temp->name,name);
    strcpy(temp->birth_date,birth_date);
    strcpy(temp->father_name,f_name);
    strcpy(temp->mother_name,m_name);
    temp->next=NULL;
    head=temp;
    while(temp!=NULL)
    {

        cunt=0;

        if(strcmp(temp->id,"10000001")==0 && strcmp(temp->name,"ramesh")==0 && strcmp(temp->birth_date,"19-06-1993")==0 && strcmp(temp->father_name,"suresh")==0 && strcmp(temp->mother_name,"vyomkesh")==0)
            {

            if(voteId1>0)
            {
                not_again();
                break;
            }

            ++voteId1;
            voting();

            }
            else if(strcmp(temp->id,"10000002")==0 && strcmp(temp->name,"maninder")==0 && strcmp(temp->birth_date,"19-05-1993")==0 && strcmp(temp->father_name,"mahesh")==0 && strcmp(temp->mother_name,"belari")==0)
            {

                if(voteId2>0)
                {
                    not_again();
                    break;
                }

            voteId2++;
            voting();

            }

            else if(strcmp(temp->id,"10000003")==0 && strcmp(temp->name,"nitesh")==0 && strcmp(temp->birth_date,"19-04-1993")==0 && strcmp(temp->father_name,"kamlesh")==0 && strcmp(temp->mother_name,"aradhana")==0)
            {

                if(voteId3>0)
                {
                    not_again();
                    break;
                }

            voteId3++;
            voting();

            }

            else if(strcmp(temp->id,"10000004")==0 && strcmp(temp->name,"abhishek")==0 && strcmp(temp->birth_date,"19-03-1993")==0 && strcmp(temp->father_name,"mihir")==0 && strcmp(temp->mother_name,"moksha")==0)
            {

                if(voteId4>0)
                {
                    not_again();
                    break;
                }

            voteId4++;
            voting();

            }

            else if(strcmp(temp->id,"10000005")==0 && strcmp(temp->name,"vivek")==0 && strcmp(temp->birth_date,"19-02-1993")==0 && strcmp(temp->father_name,"gautam")==0 && strcmp(temp->mother_name,"shanu")==0)
            {

                if(voteId5>0)
                {
                    not_again();
                    break;
                }

            voteId5++;
            voting();

            }

            else
            {

            R--;
            count++;

            }
            if(count==3)
            {
                stop();
                break;

            }

            printf("\n\n\n\n");
            printf("\t\tYour voter ID or NAME or DATE OF BIRTH or FATHER'S  NAME is wrong \n\n");
            sleep(300);

            printf("\t\t\t\t\t Please Re Enter \n\n");
            sleep(300);

            system("pause");
            main_loges();

        }

        temp=temp->next;

    }


    void voting()
    {
        system("clear");
        printf("\n\n\n\n\n");
        printf("\t\t             * * * * * *  List of the Candidates * * * * * *   \n\n\n");
        sleep(1);

        printf("\t\t\t Name - - - - - -- - - - - - - SYMBOL \n\n");
        sleep(1);

        printf ("\t\t\t  1. BJP              1. Boat\n");
        sleep(1);

        printf("\t\t\t   2. RJD              2.paddy\n");
        sleep(1);

        printf("\t\t\t  3. BBD              3.cycle\n");
        sleep(1);

        printf("\t\t\t  2. SSD              4.lamp\n");
        sleep(1);

        printf("\t\t\t  2. CPM              5. broom \n");
        sleep(1);

        int B,j;

        printf("\t\t\t Please--, \n");
        printf("\t\t\t\t Enter your choice   ");

        for(j=1;j<=1;j++)
        {
            scanf("%d",&B);

            if(B==1)
            {

                cunt1++;
            }

            if(B==2)
            {

                cunt2++;
            }

            if(B==3)
            {

                cunt3++;
            }
            if(B==4)
            {
                cunt4++;

            }

            if(B==5)
            {

                cunt5++;
            }

            if(B!=1 && B!=2 && B!=3 && B!=4 && B!=5)
            {

                printf("\t\t\t Your vote is invalid \n");
                main_loges();
            }

        }

        int R;
        system("clear");

        printf("\n\n\n\n");
        printf("\t\t\t If you want to see present winner enter one(1) or \n\n\n \t\t\t\t\tZero(0) For Main Loges \n\n\n");
        scanf("%d",&R);

        if(R==1)
        {
            winner();

        }

        if(R!=1)
        {

            main_loges();
        }


    }

    void admin()
    {

        int B;
        printf("\n\n\n\n");

        printf("\t\t\t ENter password to unlock Admin panel\n\n");

        scanf("%d",&B);
        if(B==10715)
        {
            show();

        }

        else
        {

        printf("Wrong password\n");
        }

    }


    void show()
    {
        system("clear");
        printf("\n\n\n");
        printf("\t\t\t How many votes who get \n\n\n");
        sleep(5);

        printf(" BJP got  %d votes \n ",cunt1);
        sleep(5);

        printf(" RJD got  %d votes \n ",cunt2);
        sleep(5);

         printf(" BBD  got  %d votes \n ",cunt3);
        sleep(5);

         printf(" SSD got  %d votes \n ",cunt4);
        sleep(5);

         printf(" CPM got  %d votes \n ",cunt5);
        sleep(5);

        int R;
        printf("\t\t\t Enter One(1) For Main Loges Or \n\n\n \t\t\t");

        scanf("%d",&R);

        if(R==1)
        {

            main_loges();
        }
        else{
            exi();
        }



    }

    void winner()
    {

        system("clear");
        printf("\n\n\n\n");

        if(cunt2<cunt1 && cunt3<cunt1 && cunt4<cunt1 && cunt5<cunt1)
            printf("\t\t\t The present winner is BJP and he got %d votes\n\n\n\n",cunt1);

        if(cunt1<cunt2 && cunt3<cunt2 && cunt4<cunt2 && cunt5<cunt2)
            printf("\t\t\t The present winner is RJD and he got %d votes\n\n\n\n",cunt2);

        if(cunt1<cunt3 && cunt2<cunt3 && cunt4<cunt3 && cunt5<cunt3)
            printf("\t\t\t The present winner is BBD and he got %d votes\n\n\n\n",cunt3);

        if(cunt1<cunt4 && cunt2<cunt4 && cunt3<cunt4 && cunt5<cunt4)
            printf("\t\t\t The present winner is SSD and he got %d votes\n\n\n\n",cunt4);

        if(cunt1<cunt5 && cunt2<cunt5 && cunt3<cunt5 && cunt4<cunt5)
            printf("\t\t\t The present winner is  and he got %d votes\n\n\n\n",cunt5);

	    if(cunt1==cunt2|| cunt1==cunt3|| cunt1==cunt4|| cunt1==cunt5|| cunt2==cunt3|| cunt2== cunt4|| cunt2== cunt5|| cunt3==cunt4||cunt3==cunt5||cunt4==cunt5)
	        printf("\n\n\n....................*******The election is draw***********.........................");

        int T;
        printf("\t\t\t\t Enter One(1) For Main Loges OR \n\n\t\t\t\t\t Zero(0) For Exists\n");
        scanf("%d",&T);

        if(T==1)
        {

            main_loges();
        }

        if(T!=1)
        {

            exi();
        }

    }

    void stop()
    {

        system("clear");

        printf("\n\n\n\n");
        printf("\t-----------------------(:- SORRY YOU CAN NOT GIVE YOUR VOTE FOR YOUR WRONG ENTRY THREE(3) TIMES :-)-------------\n\n\n");
        sleep(5);
        printf("\t\t\t * * * * ~~~~~~ PLEASE TRY AGAIN AFTER A FEW MOMENT ~~~~~~~ * * * * \n\n\n");
        sleep(5);
        printf("\t\t\t\t * * * * * ~~~~~~~~~~~ THANKYOU ~~~~~~~~~~~~~* * * * * *\n\n\n\n");
        sleep(5);

    }

    void exi()
    {

        system("clear");
        printf("\n\n\n");
        printf("\t\t -------------- @ YOU HAVE GIVE YOUR VOTE SUCCESSFULLY @ ----------------\n\n\n ");
        sleep(5);
        printf("\t\t\t\t\t\t  * * * * * ~~~~~ THANK YOU ~~~~~~  * * * * *\n\n\n\n");
        sleep(5);
    }


    void not_again()
    {

        system("clear");
        printf("\n\n\n");
        printf("\t\t\t ---------------------------YOU HAVE GIVE YOUR VOTE SUCCESSFULLY --------------\n\n");
        sleep(3);
        printf("           \t\t-------------SO YOU CANNOT GIVE YOUR VOTE MORE THAN ONE(1) TIME ------------\n\n\n");
        sleep(3);
        printf("\t\t\t  IF you want to see present winner Enter one (1)  OR \n\t\t\t\t\t\tTwo(2) For Main Loges\n");
        sleep(3);

        printf("\t\t\t\t\t Zero(0)  For Exists \n\n");
        scanf("%d",&R);
        if(R==1)
        {
            winner();

        }

        if(R==2)
        {

            main_loges();
        }
        if((R!=1) || (R!=2))
        {

            exi();
        }


    }
