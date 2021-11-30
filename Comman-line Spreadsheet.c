//Command-Line Spreadsheet
#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
    printf("\t\t\t\t\tWelcome to Command-line Spreadsheet\n");
    int i,j,x,z,n,sum=0,l,mu=1,c=0;
    double avg;
    char a[100][100][100];
    char q[10];
    char t[30];
    char y[30];
    char b,m;
    //User Input
    printf("Enter the Row numbers:");
    scanf("%d",&x);
    l=x-1;//L is used for finding average
    printf("Enter the Column numbers:");
    scanf("%d",&z);
    //sample output
    for(i=0;i<x;i++)
    {
        for(j=0;j<=z;j++)
        {
            printf("|\t");
        }
        printf("\n");
    }
    //Choice of which column will contain witch type data
    printf("Enter The Each Column type if Character then press 'c' or if Integer press 'd'\n");
    for(i=1;i<=z;i++)
    {
        printf("[1][%d]=",i);
        fflush(stdin);
        scanf("%c",&q[i]);
    }
    //Data Type of each column
     for(i=1;i<=z;i++)
    {
        printf("\t\tThe %d no. column is %c type\n",i,q[i]);
    }

//User input Section in spreadsheet
    printf("Enter Numbers or Characters in Row-Column wise\n");
    for(i=1;i<=z;i++)
    {
        for(j=1;j<=x;j++)
        {
            if(j==1)
            {
                printf("a[%d][%d]=",j,i);
                scanf("%s",t);
                strcpy(a[j][i],t);
            }
             else if(q[i]=='d'&&j!=1)
            {
                printf("a[%d][%d]=",j,i);
                scanf("%d",&a[j][i][0]);
            }
            else if(q[i]=='c'&&j!=1)
            {
                printf("a[%d][%d]=",j,i);
                scanf("%s",t);
                strcpy(a[j][i],t);
            }

        }
    }
// Basic Output Section
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=z;j++)
        {
            if(i==1)
          {
              printf("|%s\t",a[i][j]);
          }
          else if(q[j]=='c'&&i!=1)
          {
              printf("|%s\t",a[i][j]);
          }
          else if(q[j]=='d'&&i!=1)
          {
              printf("|%d\t",a[i][j][0]);
          }

        }
        printf("\n");
    }
//Different Functions Uses
          fflush(stdin);
          for(i=0; ;i++)
            {
               fflush(stdin);
               printf("\nFor finding sum press 's'\nFor finding average press 'a'\nFor finding multiplication press 'm'\nFor finding count press 'c'\nTo Quit the program press 'q'\n");
               scanf("%c",&b);

               if(b=='s')//Sum finding Function
                {
                    printf("\nEnter the column number= ");
                    scanf("%d",&n);
                    if(q[n]=='c')
                    {
                        printf("\nInvalid column\n");
                        continue;
                    }
                    for(i=2;i<=x;i++)
                      {
                        sum=sum+a[i][n][0];
                      }
                    for(i=1;i<=x+1;i++)//printing whole spreadsheet then sum of particular column
                      {
                        for(j=1;j<=z;j++)
                        {
                          if(i==x+1)
                          continue;
                          if(i==1)
                            {
                              printf("|%s\t",a[i][j]);
                            }
                          else if(q[j]=='c'&&i!=1)
                            {
                              printf("|%s\t",a[i][j]);
                            }
                          else if(q[j]=='d'&&i!=1)
                            {
                              printf("|%d\t",a[i][j][0]);
                            }
                         }
                              printf("\n");
                          if(i==x+1)
                            {
                              printf("\nSum of %d No. column=%d\n",n,sum);
                              printf("\n");
                            }
                        }
                    }
                 else if(b=='a')//Average finding function
                    {
                      printf("\nEnter the column number= ");
                      scanf("%d",&n);
                      if(q[n]=='c')
                    {
                        printf("\nInvalid column\n");
                        continue;
                    }
                      for(i=2;i<=x;i++)
                       {
                          sum=sum+a[i][n][0];
                       }

                      for(i=1;i<=x+1;i++)
                       {
                          for(j=1;j<=z;j++)
                           {
                              if(i==x+1)
                              continue;
                              if(i==1)
                                {
                                  printf("|%s\t",a[i][j]);
                                }
                              else if(q[j]=='c'&&i!=1)
                                {
                                  printf("|%s\t",a[i][j]);
                                }
                              else if(q[j]=='d'&&i!=1)
                                {
                                  printf("|%d\t",a[i][j][0]);
                                }
                            }
                                  printf("\n");
                              if(i==x+1)
                                {
                                   double avg=(double)sum/l;
                                   printf("\nAverage Of %d No. Column=%.2lf\n",n,avg);
                                }
                        }
                     }
                 else if(b=='m')//Multiplication finding Function
                    {
                        printf("\nEnter the column number= ");
                        scanf("%d",&n);
                        if(q[n]=='c')
                    {
                        printf("\nInvalid column\n");
                        continue;
                    }
                        for(i=2;i<=x;i++)
                            {
                                mu=mu*a[i][n][0];
                            }
                        for(i=1;i<=x+1;i++)
                            {
                                for(j=1;j<=z;j++)
                                    {
                                        if(i==x+1)
                                        continue;
                                        if(i==1)
                                            {
                                               printf("|%s\t",a[i][j]);
                                            }
                                        else if(q[j]=='c'&&i!=1)
                                            {
                                                printf("|%s\t",a[i][j]);
                                            }
                                        else if(q[j]=='d'&&i!=1)
                                            {
                                                printf("|%d\t",a[i][j][0]);
                                            }
                                    }
                                                printf("\n");
                                            if(i==x+1)
                                                {
                                                  printf("\nMultiplication of %d No. Column=%d\n",n,mu);
                                                }

                                      }
                                    }
                 else if(b=='c')//Count function
                    {
                      printf("\nEnter the column number= ");
                      scanf("%d",&n);
                      for(i=2;i<=x;i++)
                         {
                           c=c+1;
                         }
                      for(i=1;i<=x+1;i++)
                         {
                           for(j=1;j<=z;j++)
                            {
                               if(i==x+1)
                               continue;
                               if(i==1)
                                 {
                                   printf("|%s\t",a[i][j]);
                                 }
                               else if(q[j]=='c'&&i!=1)
                                 {
                                   printf("|%s\t",a[i][j]);
                                 }
                               else if(q[j]=='d'&&i!=1)
                                 {
                                   printf("|%d\t",a[i][j][0]);
                                 }
                             }
                                   printf("\n");
                                   if(i==x+1)
                                     {
                                       printf("\n%d No.Column has %d numbers of entry\n",n,c);
                                     }

                            }
                    }
                    else if(b=='q')
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid input\n");
                    }

   }
}







