#include <stdio.h>
#include "file.h"
#include "str.h"
#include "debug.h"
#include "linked_list.h"

char pattern[] = "nal";

int main(int argc, char const *argv[])
{
    printf("Hello World\n");
    use_slinkedlist_apis();
    return 0;
}


// main(int argc, char * argv[])
// {
//     int ex = 0, num = 0, found = 0;
//     int c;
//     int line_number = 0;
//     char line[MAXLINE];
//     while(--argc > 0 && (*++argv)[0] == '-')
//     {
//         while(c = *++argv[0])
//         {
//             switch(c)
//             {
//                 case 'x':
//                     ex = 1;
//                     break;
//                 case 'n':
//                     num = 1;
//                     break;
//                 default :
//                     argc = 0;
//                     found = -1;
//                     break;
//             }
//         }
//     }
//     if(argc != 1)
//     {
//         // illegal
//     }
//     else
//     {
//         while (get_line(line, MAXLINE) > 0)
//         {
//             line_number++;
//             if((str_index(line, *argv) != -1 ) != ex)
//             {
//                 if(num)
//                 {
//                     printDebug(line_number);
//                 }
//                 printf("%s",line);
//                 found++;
//             }
//         }
        
//     }

//     printf("\n");
//     return found;
// }

// int main()
// {
//     char * days[] = {" Zero ", " Monday ", " Tuesday ", " Wednesday ", " Thursay ", " Friday ", " Saturday ", " Sunday "}; 
//     int i = 0;
//     char ** currDay;
//     currDay = days;
//     char c;
//     while(i++ < 7)
//     {
//         if((*++currDay)[] == 'T')
//         {
//             while(c = *++currDay[0])
//             {
//                 printf("%c", c);
//             }
//         }
// //            printf("%s ", *currDay);
//     }
//     printf("\n");
//     // char line[MAXLINE];
//     // printf("Hello Main : Enter Line \n");
//     // get_line(line,MAXLINE);

//     // printf("\n %s \n", line);
//     // printf(" Double : %f \n", string_to_float(line));

//     // int len = str_len(line);
//     // printDebug(len);

//     return 0;
// }