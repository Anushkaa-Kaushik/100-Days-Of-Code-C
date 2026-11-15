
   /*Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>

int main()
{
   int n,i;
   printf("Enter n: ");
   scanf("%d",&n);
   
    int content[n];
   printf("Enter content[]");
   for(i=0;i<n;i++){
   scanf(" %d",&content[i]);
   }
   
    
   char file_name[100];
   printf("Enter file_name : ");
  scanf("%s",file_name);
   
   FILE *fp;
   fp=fopen(file_name,"w");
   for(i=0;i<n;i++){
   fprintf(fp," %d",content[i]);
  
   }
    fclose(fp);
    
  int num,sum=0,average;
    fp=fopen(file_name,"r");
    fscanf(fp,"%d",&num);
    sum=sum+num;
    average=sum/n;
    fclose(fp);
    printf("sum = %d",sum);
    printf("average = %d",average);
    return 0;
    
}
