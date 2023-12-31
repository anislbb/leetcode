#include <stdio.h>
#include <string.h>

char * longestCommonPrefix(char ** strs, int strsSize){
     char* prefix = strs[0];

  for (int i = 1; i < strsSize; i++) {
    while (strncmp(strs[i], prefix, strlen(prefix)) != 0) {
      prefix[strlen(prefix) - 1] = '\0';

      if (strlen(prefix) == 0) {
        return "";
      }
    }
  }

  return prefix;
}