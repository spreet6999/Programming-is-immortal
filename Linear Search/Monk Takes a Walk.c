#include <stdio.h>

void main(){
	int len,i,j,count=0;
	scanf("%d", &len);              			// Reading input from STDIN
    char a[len][100];
    for(i=0;i<len;i++)
    {

    scanf("%s",&a[i][100]);

    }
    for(i=0;i<=len;i++)
    {
     while(j!='\0')
     {
         switch(a[i][j])
         {
             case 'a': case 'A':
             {
                 count++;
             break;
             }
             case 'e': case 'E':
             {
                 count++;
                 break;
             }
             case 'i': case 'I':
             {
                 count++;
                 break;
             }
             case 'o': case 'O':
             {
                 count++;
                 break;
             }
             case 'u': case 'U':
             {
                 count++;
                 break;
             }
             default :
             break
             }
     }
    printf("%d\n",count);
    }

}
