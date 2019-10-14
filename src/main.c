#include <stdio.h>
#include "file.h"
#include "str.h"
#include "debug.h"
#include "linked_list.h"
#include "sorting.h"
#include "bitman.h"
char pattern[] = "Hello kunal";
int array_to_sort[5] = {5, 1, 2, 4, 3};

int main(int argc, char const *argv[])
{
    int a = 2;
    int b = 5;
    printf(" a : %d , b : %d \n", a,b);
    swap_int(&a,&b);
    printf(" a : %d , b : %d \n", a,b);
    //sort_insertion(array_to_sort,5);
    //sort_selection(array_to_sort, 5);
    //selectionSort(array_to_sort,5);
    //sort_quick(array_to_sort,5);
    //sort_merge(array_to_sort,5);
    sort_bubble(array_to_sort,5);
    print_intarray(array_to_sort, 5);
    
    int num = 64;
    print_binary(num);
    count_1s(num);
    count_0s(num);

    printDebug(count_1s(num));
    printDebug(count_0s(num));

    if(is_power_of_two(num))
    {
        printf("Is power of two\n");
    }

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