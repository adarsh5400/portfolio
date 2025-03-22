#include <stdio.h>

int main() {
   int decimalNum, binaryNum[20], onesComplement[20], twosComplement[20], i=0, j, sign=0;
   
   printf("Enter a decimal number: ");
   scanf("%d", &decimalNum);
   

   if(decimalNum < 0) {
      sign = 1;
      decimalNum = -decimalNum;
   }
   

   while(decimalNum > 0) {
      binaryNum[i] = decimalNum % 2;
      decimalNum /= 2;
      i++;
   }
   
   if(sign == 1) {

      for(j = 0; j < i; j++)
         binaryNum[j] = !binaryNum[j];
      

      int carry = 1;
      for(j = 0; j < i; j++) {
         twosComplement[j] = binaryNum[j] + carry;
         if(twosComplement[j] == 2)
            carry = 1;
         else
            carry = 0;
         twosComplement[j] %= 2;
      }
      
      printf("Binary number: ");
      for(j = i-1; j >= 0; j--)
         printf("%d", binaryNum[j]);
      
      printf("\n2's complement: -");
      for(j = i-1; j >= 0; j--)
         printf("%d", twosComplement[j]);
   }
   else {

      printf("Binary number: ");
      for(j = i-1; j >= 0; j--) {
         printf("%d", binaryNum[j]);
         onesComplement[j] = !binaryNum[j];
      }
      

      int carry = 1;
      for(j = 0; j < i; j++) {
         twosComplement[j] = onesComplement[j] + carry;
         if(twosComplement[j] == 2)
            carry = 1;
         else
            carry = 0;
         twosComplement[j] %= 2;
      }
      
      printf("\n1's complement: ");
      for(j = i-1; j >= 0; j--)
         printf("%d", onesComplement[j]);
      
      printf("\n2's complement: ");
      for(j = i-1; j >= 0; j--)
         printf("%d", twosComplement[j]);
   }
   
   return 0;
}
