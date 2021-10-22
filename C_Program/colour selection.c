#include<stdio.h>
int main()
{
    char color;
    printf("\n enter any key from VIYGBOR for rainbow color ");
    scanf("%c",&color);
          switch(color)
     {
         case 'v':
         case 'V':
               printf("\n your fav color is voilet");
break;

         case 'i':
               printf("\n your fav color is indigo");
break;

        case 'y':
        printf("\n your fav color is yellow");
break;

        case 'b':
        printf("\n your fav color is blue");
break;

        case 'g':
        printf("\n your fav color is green");
break;

        case 'o':
        printf("\n your fav color is orange");
break;

        case 'r':
        printf("\n your fav color is red");
break;

       default:
       printf("\n your fav color is red");
}
 return 0; 
}

