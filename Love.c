#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    char a[20][20];  //2D array declaration
    printf("Enter only i or I - ");
    scanf("%c",&ch);
    printf("\n\n\n");
    int i,j,k;
    switch(ch)
    {
        case 'i':
        case 'I':
                for(i=0;i<8;i++)
                {
                    if(i==0 || i==7)
                    {
                        for(j=0;j<11;j++)
                        printf("\x03");
                        printf("\n");
                    }
                    else
                    {
                        printf("     \x03\n");
                    }
                }
                printf("\n\n\n");
        case 'L':
                for(i=0;i<10;i++)
                {
                    for(j=0;j<12;j++)
                    {
                        a[i][j]='\x03';
                    }
                }
                for(i=0;i<2;i++)
                a[i][5]=' ';
                for(i=2;i<10;i++)
                {
                    for(j=0;j<i-1;j++)
                    a[i][j]=' ';
                }
                for(i=2;i<10;i++)
                {
                    for(j=10;j>11-i;j--)
                    a[i][j]=' ';
                }
                for(i=0;i<10;i++)
                {
                    for(j=0;j<11;j++)
                    printf("%c",a[i][j]);
                    printf("\n");
                }
    case 'U': for(i=0;i<8;i++)
    {
        if(i!=7)
             printf("\x03         \x03");
            else
            {
                for(j=0;j<11;j++)
                printf("\x03");
            }
            printf("\n");
    }
    }
    return 0;
}