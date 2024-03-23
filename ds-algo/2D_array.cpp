#include<stdio.h>
int main()
{
  int row,column ;
  printf("Enter the row number: ");
  scanf("%d",&row);
  printf("Enter the column number: ");
  scanf("%d",&column);
  int array[row][column];//make a array with size row*column
  int sum_of_row=0 ;
  int sum_of_column=0 ;
  for(int i=0;i<row ;i++)
  {
  for(int j=0;j<column;j++)
  {
  scanf("%d",&array[i][j]);
  }
  }

for(int i=0;i<row ;i++)
  {
  for(int j=0;j<column;j++)
  {
  sum_of_row+=array[i][j] ;
  sum_of_column+=array[j][i];

  }
  printf("sum of row     %d : %d\n",i+1,sum_of_row);
  printf("sum of column  %d : %d\n",i+1,sum_of_column);

  sum_of_column=0;
  sum_of_row=0 ;


  }







}
