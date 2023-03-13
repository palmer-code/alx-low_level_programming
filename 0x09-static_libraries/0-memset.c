#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_memset(char *s, char b, unsigned int n)
{
  for (unsigned int i = 0; i < n; i++) {
    s[i] = b;
  }
  return s;
}
