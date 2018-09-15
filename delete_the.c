#include<stdio.h>
#include<string.h>
void main()
 {  char a[30];
     int i,n;
    printf("enter the number of alphabets you want to enter");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     scanf("%c",&a[i]);
     for(i=0;i<n;)
      {  if(a[i]=='t'&& a[i+1]=='h' && a[i+2]=='e')
          {  a[i]=' ';
            a[i+1]=' ';
            a[i+2]=' ';
            i=i+3;
         }  else
            {  i++;
              }
 }   for(i=0;i<=n;i++)
         printf("%c",a[i]);
         printf("\n");
}
