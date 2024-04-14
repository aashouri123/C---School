//Abdullah Ashouri
//Project 3
//04/14/2024

#include <stdio.h>

typedef struct node
{

    int ID;
    char grade;
    struct node* next;

} Student;

void printList(Student* head);
int countList(Student* head);
void fillNode(Student* node, Student* next);
int countAs(Student* head);

int main()
{

    printf("\nAbdullah Ashouri - Project 3 \n\n");

    srand(time(NULL));

    Student student1;
    Student* top;
    Student* ptrStudent= NULL;

    top = &student1;
    fillNode(top, NULL);

    //Dynamically create a node, fill its Data(ID, grade, and next)
    ptrStudent = (Student*)malloc(sizeof(Student));
    fillNode(ptrStudent,top);
    top = ptrStudent;

    //Another node, similar to lines 30-32
    ptrStudent = (Student*)malloc(sizeof(Student));
    fillNode(ptrStudent,top);
    top = ptrStudent;

    //Third node 
    ptrStudent = (Student*)malloc(sizeof(Student));
    fillNode(ptrStudent,top);
    top = ptrStudent;

    printList(top);

    int count = countList(top);
    printf("Number of nodes = %4d\n", count);

    int countOfAs = countAs(top);
    printf("Number of A's = %4d\n", countOfAs);
    
    printf("\nAbdullah Ashouri - Project 3 \n");

}

void printList(Student* head)
{
    while(head != NULL)
    {
        printf("ID = %5d, grade = %c\n", head -> ID, head -> grade);
        head = head -> next;
    }
}

int countList(Student* head)
{
    int temp = 0;
    
    while(head != NULL)
    {
        temp++;
        head = head -> next;

    }

    return temp;
}

void fillNode(Student* node, Student* next)
{
    node -> ID = rand() % 2000 + 1000;
    node -> grade = (char)(65 + rand() % 4);
    node -> next = next;
}

int countAs(Student* head)
{
    int numOfAs = 0;

    while(head != NULL){
        if(head ->grade == 'A'){
            numOfAs++;

        }
        head = head ->next;
    }
    return numOfAs;
    
}
