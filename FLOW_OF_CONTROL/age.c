/* If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program 
to determine the youngest of the three. */
#include <stdio.h>

int main(){
    
    int age_ram , age_shyam, age_ajay ;
    
    printf("Enter the age of Ram: ");
    scanf("%d",&age_ram);
    printf("Enter the age of Shyam: ");
    scanf("%d",&age_shyam);
    printf("Enter the age of Ajay: ");
    scanf("%d",&age_ajay);
    
     if (age_ram<age_shyam && age_ram<age_ajay) {
      printf("Ram is the youngest.");
   }
   
   else if (age_shyam<age_ram && age_shyam<age_ajay) {
      printf("Shyam is the youngest.");
   }
   
  /* else if (age_ajay<age_ram && age_ajay<age_shyam) {
      printf("Ajay is the youngest.");
   }*/
   
   else {
      printf("Ajay is the youngest.");
   }

   return 0;
}
