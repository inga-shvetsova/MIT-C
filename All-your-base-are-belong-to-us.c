/* All-your-base-are-belong-to-us.c - I am sorry, Paul
  Created by Inga Shvetsova, 10/05/2024 */

#include <stdio.h>
#define MSG1 "All your base are belong to us!" /* Preprocessor macro */

int main(void) {

  const char msg[] = MSG1;
  puts(msg);

  rerurn 0;

}

/* $ gcc -Wall file-name.c -o object-code-name.o
   $ gdb object-code-name.o */
