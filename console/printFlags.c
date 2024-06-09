#include "console.h"

#include <stdio.h>

#include "../include/mySimpleComputer.h"

void
printFlags (void)
{
  const char flag_symbols[] = { 'P', '0', 'M', 'T', 'E' };

  for (size_t i = 0; i < FLAGS_AMOUNT; ++i)
    {
      int current_flag;

      sc_regGet (i, &current_flag);

      printf ("%c ", current_flag ? flag_symbols[i] : '_');
    }
}
