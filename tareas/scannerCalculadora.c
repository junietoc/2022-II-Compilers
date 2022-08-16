#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <regex.h>

bool isNumber(char[] c){
  return isdigit(c);
}

bool isOperator(char ch){
  if (ch == '+' || ch == '-')
        return (true);
  return false;
}
bool isAgrupator(char ch){
  if (ch == '(' || ch == ')')
        return (true);
  return false;
}
int main(void) {
  char input[100];
  scanf("%s", input);
  
  for(int i = 0; i < strlen(input); i++){
    if(isOperator(input[i])){
      printf("%c is an OPERATOR\n",input[i]);
    }
    if(isNumber(input[i])){
      printf("%c is a NUMBER\n",input[i]);
    }
    if(isAgrupator(input[i])){
      printf("%c is an AGRUPATOR\n",input[i]);
    }
  }
}
