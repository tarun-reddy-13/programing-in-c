//number shifting game---proj 1
//Tarun Reddy Thota
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void  create_mat(int arr[4][4])
{
    int n=15;
    int num[n],i,j;
    for(i=0;i<15;i++)
        num[i]=i+1;

    srand(time(NULL));

    int lastIndex=n-1,index;

    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
        {
            if(lastIndex>=0)
            {
                index=rand()%(lastIndex+1);
                arr[i][j]= num[index];
                num[index]=num[lastIndex--];
            }
        }
        arr[i-1][j-1]=0;
}

void show_mat(int arr[][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        printf("|  ");
        for(j=0;j<4;j++)
        {
            if(arr[i][j]!=0)
                printf("%2d | ",arr[i][j]);
            else
                printf("   | ");
        }
        printf("\n");
    }
}
int winner(int arr[][4])
{
    int i,j,k=1;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++,k++)
            if(arr[i][j]!=k && k!=16)
                break;
        if(j<4)
            break;
    }
    if(j<4)
        return 0;
    return 1;
}

void swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
int read_key()
{
    char c;
    c=getch();
    return c;
}

int up_shift(int arr[][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            if(arr[i][j]==0)
            break;
        if(j<4)
        break;
    }
    if(i==3)
        return 0;
    swap(&arr[i][j],&arr[i+1][j]);
    return 1;
}

int down_shift(int arr[][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            if(arr[i][j]==0)
                break;
        if(j<4)
            break;
    }
    if(i==0)
        return 0;
    swap(&arr[i][j],&arr[i-1][j]);
    return 1;
}

int right_shift(int arr[][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            if(arr[i][j]==0)
            break;
        if(j<4)
        break;
    }
    if(j==0)
        return 0;
    swap(&arr[i][j],&arr[i][j-1]);
    return 1;
}

int left_shift(int arr[][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            if(arr[i][j]==0)
            break;
        if(j<4)
        break;
    }
    if(j==3)
        return 0;
    swap(&arr[i][j],&arr[i][j+1]);
    return 1;
}

void rule(int arr[][4])
{
    system("cls");
    int x;
    int i,j;
    printf("RULE OF THIS GAME\n");
    printf("\n1.You can move only 1 step at a time by arrow key ");
    printf("\nMove Up   : by Up arrow key ");
    printf("\nMove Down : by Down arrow key");
    printf("\nMove Left : by Left arrow key");
    printf("\nMove Right: by Right arrow key");
    printf("\n2.You can move number at empty position only\n");
    printf("\n3.For each valid move : your total number of move will decreased by 1 \n");
    printf("4.Wining situation : number in a 4*4 matrix should be in order from 1 to 15 ");
    printf("\n\nwinning situation:\n");
    for(i=0;i<4;i++)
    {
        printf("|  ");
        for(j=0;j<4;j++)
        {
            if(arr[i][j]!=0)
                printf("%2d | ",4*i+j+1);
            else
                printf("   | ");
        }
        printf("\n");
    }

    printf("\n5.You can exit the game at any time by pressing 'E' or 'e' ");
    printf("\nSo Try to win in minimum no of move \n");
    printf("\n         Happy gaming , Good Luck\n");
    printf("\nEnter any key to start.....");
    x=read_key();
}
int main()
{
    int arr[4][4];
    char name[20];
    system("cls");
    printf("Player Name : ");
    fgets(name,20,stdin);
    while(1)
    {
        int moves=30;
        create_mat(arr);
        rule(arr);
        while(!winner(arr))
        {
            system("cls");
            if(!moves)
                break;
            printf("Player Name : %s , Move remaining : %d\n\n",name,moves);
            show_mat(arr);
            int key=read_key();
            switch(key)
            {
            case 69:                  
            case 101:             
                    printf("\n     Thanks for Playing ! \n");
                    printf("\nHit 'Enter' to exit the game \n");
                    key=read_key();
                	break;
            case 72:        
                    if(up_shift(arr))
                        moves--;
                    break;
            case 80:        
                    if(down_shift(arr))
                        moves--;
                    break;
            case 77:           
                    if(right_shift(arr))
                        moves--;
                    break;
            case 75:           
                    if(left_shift(arr))
                        moves--;
                    break;
            default:
                printf("\n\nNot Allowed");
        }

    }
    if(!moves)
        printf("\nYOU LOSE !\n");
    else
    {
        printf("\n************Congratualization***********\n");
        printf("               You have Won       ");
    }
    char check;
    printf("\nWant to play again ? \n");
    printf("Enter 'y' to play again:  ");
    scanf("%c",&check);
    if(check!='y' && check!='Y')
        break;
    }
    return 0;
}