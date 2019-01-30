typedef struct  voter_information
{

    char id[10];
    char name[20];
    char birth_date[15];
    char father_name[20];
    char mother_name[20];
    struct  voter_information *next;
    
}node;

node *head;


int cunt1=0, cunt2=0, cunt3=0, cunt4=0, cunt5=0;
void main_loges();
void voter_insert(); 
void voting();
void admin();
void show();
void stop();
void exi();
void not_again();
void winner();
