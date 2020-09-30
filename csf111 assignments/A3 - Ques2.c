#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isVowel(char ch){
  return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int vowelCount(char str[]){
  int count = 0;
  for (int i=0; i<strlen(str); i++){
    if (isVowel(str[i]) == true){
      count += 1;
    }
  }
  return count;
}

void solve(char str[]){
  while (vowelCount(str) > 0){
    char c; int flag;
    strrev(str);
    for (int i=0; i<strlen(str); i++){
      if (isVowel(str[i]) == true){
        c = str[i];
        flag = i;
        break;
      }
    }
    for (int i=flag+1; i<strlen(str); i++){
        if (isVowel(str[i]) == true){
          str[i] += 1;
          break;
        }
        else {
          if (str[i] == 'z'){
            str[i] = 'z';
          }
          else {
            str[i] += 1;
          }
        }
    }
    if (str[flag] == 'z'){
      str[flag] = 'z';
    }
    else {
      str[flag] += 1;
    }
    strrev(str);
  }
  printf("%s", str);
}

int main(){
  char str[20], c;
  scanf("%[^\n]%*c", str);
  solve(str);

  return 0;
}
