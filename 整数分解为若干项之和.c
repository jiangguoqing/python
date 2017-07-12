#include <stdio.h>
#include <string.h>

#define MAXN 30
#define MAXString 64

int Count;
void Search(int Remainder,int start,char *Sterms);

int main()
{
    char STerms[MAXString] = "";
    int N;

    Count = 0;
    scanf("%d",&N);
    sprintf(STerms,"%d = ",N);
    Search(N,1,STrems);
    if(Count%4!=0)
        printf("\n")
    return 0;
}

void Search(int Remainder,int start,char *STerms)
{
    int i;
    char TmpS[MAXString];

    strcpy(TmpS,STerms);
    for(i=Start;i<=Remainder;i++)
        if(Remainder-i>=i){
            sprintf(TmpS+strlen(STerms),"%d+",i);
            Search(Remainder-i,i,TmpS);
        }
        else if(Remainder-i==0)
        {
            sprintf(TmpS+strlen(STerms),"%d",i)
            Count ++;
            if(Count%4!=1)printf(";");
            printf("%S",TmpS);
            if(Count % 4 == 0) printf("\n");
        }
}
