#include <stdio.h>
#include <stdlib.h>

typedef struct Node *NodePtr;
struct Node{
    int Val;
    NodePtr Next;
};

int main()
{
    int N,M;
    int i;
    NodePtr Head,Rear,Pre,Tmp;

    Head = Rear = (Node)malloc(sizeof(struct Node));

    Head->Next = Null;

    scanf("%d %d",&N,&M);
    for(i=0;i<n;i++)
    {
        Pre = (NodePtr)malloc(sizeof(struct Node));
        Pre->Next = NULL;
        scanf("%d",&Pre->Val);
        Rear->Next = Pre;
    }
    Pre = Head;
    while(Pre->Next != NUll && Pre->Val<m)
        Pre = Pre->Next;
    Tmp = (NodePtr)malloc(sizeof(struct Node));
    Tmp->Val = M;
    Tmp ->Next =Pre ->Next;
    Pre ->Next = Tmp;
    if(Pre == Rear)
        Rear = Tmp;
    Tmp = Head->Next;
    printf("%d",Tmp->Val);
    for(Tmp=Tmp->Next;Tmp!=NULL;Tmp=Tmp->Next)
        printf("%d",Tmp->Val);
    printf("\n");
    return 0;
}
