#include<stdio.h>
void towerofhanoi(int,char,char,char);
int main(){
    int n;
    printf("entr the number of disk\n");
    scanf("%d",&n);

    towerofhanoi(n,'a','c','b');
    return 0;

}
void towerofhanoi(int n,char from,char to,char aux)
{
    if(n==1)
    {
        printf("move the 1 disk from %c to %c\n",from,to);
        return;
    }
    else{
        towerofhanoi(n-1,from,aux,to);
        printf("move the disk %d from %c to %c\n",n,from,to);
        towerofhanoi(n-1,aux,to,from);
    }
}


