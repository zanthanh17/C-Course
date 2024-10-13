#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    struct node *next; //link
};

typedef struct node node;

//them node
node* MakeNode(int x){
    //Cap phat dong 1 node
    node *NewNode = (node*)malloc(sizeof(node));
    NewNode->data = x;
    NewNode->next = NULL;
    return NewNode;
}

//them node vao dau dslk
void pushFront(node **head, int x){
    node *NewNode = MakeNode(x);
    NewNode->next = (*head); //toan tu giai tham chieu
    (*head) = NewNode;
}

//them node vao cuoi dslk
void pushBack(node **head, int x){
    node *NewNode = MakeNode(x);
    if (*head == NULL)
    {
        *head = NewNode; return;
    }
    node *tmp = *head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = NewNode;
}

//chen node vao giua
void insert(node **head,int k, int x){
    int n = size(*head);
    if(k < 1 || k > n + 1) return;
    if(k == 1){
        pushFront(head,x);
    }
    else if(k == n + 1){
        pushBack(head,x);
    }
    else{
        node *temp = (*head);
        for (int i = 0; i < k - 1; i++)
        {
            temp = temp->next;
        }
        node *NewNode = MakeNode(x);
        //B1: phan next cua NewNode luu dia chi cua node thu k
        NewNode->next = temp->next;
        //B2: phan next cuar node thu k - 1luu dia chi cua NewNode
        temp->next = NewNode;
    }
}

// Duyet DSLK
void duyet(node *head){
    while (head != NULL)
    {
        printf("%d ", head -> data);
        head = head->next;
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

//Dem so node co trong DSLK
int size(node *head){
    int cnt  = 0;
    while (head != NULL)
    {
        ++cnt;
        head = head->next;
    }
    return cnt;
}

int main(){
    node *head= NULL;
    while(1){
        printf("____________________________\n");
        printf("1.Them vao dau\n");
        printf("2.Them vao cuoi\n");
        printf("3.Chen vao giua\n");
        printf("4.Duyet DSLK\n");
        printf("5.Sap xep DSLK\n");
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
        else if(lc == 4){
            duyet(&head);
        }
        else if(lc == 5){
            sort(&head);
        }
        else if(lc == 0){
            break;
        }
    }

}