#include <stdio.h>
#include <ctype.h>

char *nonwhite(char *string);

char *nonwhite(char *string){ // Func 

int i;
for(i=0;i<sizeof(string);i++){ //  loop 
  if (string[i] != ' '){ 
    return &string[i];
  }
}
 return &string[i];
}

int main(){
char string[] = " Practicing Strings";
printf("first character: %c\n",*nonwhite(string)); // output

return 0;
}
