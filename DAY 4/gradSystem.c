#include <stdio.h>

int main() {
   int marks;

   printf("Enter your marks (out of 100): ");
   scanf("%d", &marks);

   switch(marks/10) {
      case 10:
      case 9:
         printf("Your grade is A\n");
         break;
      case 8:
         printf("Your grade is B\n");
         break;
      case 7:
         printf("Your grade is C\n");
         break;
      case 6:
         printf("Your grade is D\n");
         break;
      default:
         printf("Your grade is F\n");
   }

   return 0;
}
