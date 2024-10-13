#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


struct node
{
    int data;
    struct node *next; //node truoc
    struct node *prev; // node sau
};

typedef struct node node;

//tao node moi
node* makeNode(int x){
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

//duyet dslk
void duyet(node *head){
    while (head != NULL)
    {
        printf("%d ", head -> data);
        head = head -> next;
    }   
}

//dem so node trong dslk
int size(node *head){
    int cnt = 0;
    while (head != NULL)
    {
        ++cnt;
        head = head -> next;
    }
    return cnt;
}

void pushFront(node **head, int x){
    node *newNode = makeNode(x);
    newNode->next = (*head);
    if (*head != NULL)
    {
        (*head)->prev = newNode;
    }
    (*head) = newNode;
}

void pushBack(node **head, int x){
    node* newNode = makeNode(x);
    if (*head == NULL)
    {
        *head = newNode; return;
    }
    node *temp =*head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void insert(node **head, int x, int k){
    int n = size(*head);
    if (k < 1 || k > n + 1) return;
    if(k == 1) pushFront(head, x);
    else if (k == n + 1) pushBack(head,x);
    else{
        node *temp = (*head);
        for (int i = 1; i < k - 1; i++)
        {
            temp = temp->next;
        }
        node *newNode = makeNode(x);
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }     
}

void popFront(node **head){
    if (*head == NULL) return;
    node *tmp = *head;
    *head = tmp->next;
    if(*head != NULL){
        (*head)->prev = NULL;
    }
    free(tmp); 
}

void popBack(node **head){
    if (*head == NULL) return;
    node *tmp = *head;
    if (tmp->next == NULL)
    {
        *head = NULL; free(tmp);
        return;
    }
    while (tmp->next != NULL)
    {
        tmp =tmp->next;
    }
    tmp->prev->next = NULL;
    free(tmp);  
}

void erase(node **head, int k){
    int n = size(*head);
    if(k < 1 || k > n) return;
    if(k == 1) popFront(head);
    else{
        node *temp = *head;
        for (int i = 0; i <= k - 1; i++)
        {
            temp = temp->next;
        }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
    }
}

void duyetnguoc(node *head){
    if (head == NULL) return;
    while (head->next != NULL)
    {
        head = head -> next;
    }
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head -> prev;
    }   
}

void sort(node **head){
    for (node *i = (*head); i != NULL; i = i->next)
    {
        node *min=i;
        for (node *j =i ->next; j != NULL; j = j -> next)
        {
            if (min->data > j ->data)
            {
                min = j;
            }  
        }
        int tmp = min->data;
        min ->data = i->data;
        i->data = tmp;
    } 
}


int main(){
    node *head= NULL;
    while(1){
        printf("____________________________\n");
        printf("1.Them vao dau\n");
        printf("2.Them vao cuoi\n");
        printf("3.Chen vao giua\n");
        printf("4.Xoa dau\n");
        printf("5.Xoa cuoi\n");
        printf("6.Xoa vi tri K\n");
        printf("7.Sap xep DSLK\n");
        printf("8.DUyet DSLK Nguoc\n");
        printf("9.Duyet DSLK\n");
        printf("0.thoat!\n");
        printf("_____________________________\n");
        printf("Nhap lua chon :");
        int lc; scanf("%d", &lc);
        if(lc == 1){
            printf("Nhap gia tri can them: ");
            int x; scanf("%d", &x);
            pushFront(&head, x);
        }
        else if(lc == 2){
            printf("Nhap gia tri can them: ");
            int x; scanf("%d", &x);
            pushBack(&head, x);
        }
        else if(lc == 3){
            printf("Nhap vi tri chen: ");
            int k; scanf("%d", &k);
            printf("Nhap gia tri can them: ");
            int x; scanf("%d", &x);
           insert(&head,k, x);
        }    
        else if (lc == 4)
        {
            popFront(&head);
        }
        else if (lc == 5)
        {
            popBack(&head);
        }
        else if (lc == 6)
        {
            printf("Nhap vi tri can xoa: ");
            int k; scanf("%d", &k);
            erase(&head,k);
        }
        else if(lc == 7){
            sort(&head);
        }
        else if(lc == 8){
            duyetnguoc(head);
        }
        else if(lc == 9){
            duyet(head);
        }
        
        else if(lc == 0){
            break;
        }
    }

}
