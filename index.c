// Q1--------
// #include <stdio.h>

// int main()
// {
//     char str1[100];
//     printf("First Name ");
//     scanf("%s",&str1);
//     char str2[100];
//      printf("Second Name ");
//     scanf("%s",&str2);
    
//     int id=strcmp(str1,str2);
//     if(id==0){
//         printf("Both Are Equal");
//     }
//     else{
//         printf("Not Equal");
//     }  

//     return 0;
// }

// Q2-------
// #include <stdio.h>

// int main()
// {
//     char str1[6]="zabcxy";
//     for(int i=5; i>=0; i--){
//         printf("%c ",str1[i]);
//     }
//     return 0;
// }

// Q3-------
// #include <stdio.h>

// int main()
// {
//     char str1[100]="nick";
//     char str2[100]="tej";
//     printf("%s",strcat(str1,str2));
//     return 0;
// }

// Q4-------
#include <stdio.h>

int main()
{
     char str1[100];
    printf("Enter Your Name ");
    scanf("%s",&str1);
    for(int i=0; str1[i]>0; i++){
        printf("%c\n",str1[i]);
    }
    return 0;
}