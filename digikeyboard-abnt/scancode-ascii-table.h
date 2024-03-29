#include <avr/pgmspace.h>
// Lookup table to convert ascii characters in to keyboard scan codes
// Format: most signifficant bit indicates if scan code should be sent with shift modifier
// remaining 7 bits are to be used as scan code number.


const unsigned char ascii_to_scan_code_table[] PROGMEM = {
  // /* ASCII:   0 */ 0,
  // /* ASCII:   1 */ 0,
  // /* ASCII:   2 */ 0,
  // /* ASCII:   3 */ 0,
  // /* ASCII:   4 */ 0,
  // /* ASCII:   5 */ 0,
  // /* ASCII:   6 */ 0,
  // /* ASCII:   7 */ 0,
  /* ASCII:   8 */ 42,
  /* ASCII:   9 */ 43,
  /* ASCII:  10 */ 40,
  /* ASCII:  11 */ 0,
  /* ASCII:  12 */ 0,
  /* ASCII:  13 */ 0,
  /* ASCII:  14 */ 0,
  /* ASCII:  15 */ 0,
  /* ASCII:  16 */ 0,
  /* ASCII:  17 */ 0,
  /* ASCII:  18 */ 0,
  /* ASCII:  19 */ 0,
  /* ASCII:  20 */ 0,
  /* ASCII:  21 */ 0,
  /* ASCII:  22 */ 0,
  /* ASCII:  23 */ 0,
  /* ASCII:  24 */ 0,
  /* ASCII:  25 */ 0,
  /* ASCII:  26 */ 0,
  /* ASCII:  27 */ 41,
  /* ASCII:  28 */ 0,
  /* ASCII:  29 */ 0,
  /* ASCII:  30 */ 0,
  /* ASCII:  31 */ 0,
  /* ASCII:  32 */ 44,
  /* ASCII:  33 */ 128|30,
  /* ASCII:  34 */ 128|53,
  /* ASCII:  35 */ 128|32,
  /* ASCII:  36 */ 128|33,
  /* ASCII:  37 */ 128|34,
  /* ASCII:  38 */ 128|36,
  /* ASCII:  39 */ 53,
  /* ASCII:  40 */ 128|38,
  /* ASCII:  41 */ 128|39,
  /* ASCII:  42 */ 128|37,
  /* ASCII:  43 */ 128|46,
  /* ASCII:  44 */ 54,
  /* ASCII:  45 */ 45,
  /* ASCII:  46 */ 55,
  /* ASCII:  47 */ 84,
  /* ASCII:  48 */ 39,
  /* ASCII:  49 */ 30,
  /* ASCII:  50 */ 31,
  /* ASCII:  51 */ 32,
  /* ASCII:  52 */ 33,
  /* ASCII:  53 */ 34,
  /* ASCII:  54 */ 35,
  /* ASCII:  55 */ 36,
  /* ASCII:  56 */ 37,
  /* ASCII:  57 */ 38,
  /* ASCII:  58 */ 128|56,
  /* ASCII:  59 */ 56,
  /* ASCII:  60 */ 128|54,
  /* ASCII:  61 */ 46,
  /* ASCII:  62 */ 128|55,
  /* ASCII:  63 */ 128|50,
  /* ASCII:  64 */ 128|31,
  /* ASCII:  65 */ 128|4,
  /* ASCII:  66 */ 128|5,
  /* ASCII:  67 */ 128|6,
  /* ASCII:  68 */ 128|7,
  /* ASCII:  69 */ 128|8,
  /* ASCII:  70 */ 128|9,
  /* ASCII:  71 */ 128|10,
  /* ASCII:  72 */ 128|11,
  /* ASCII:  73 */ 128|12,
  /* ASCII:  74 */ 128|13,
  /* ASCII:  75 */ 128|14,
  /* ASCII:  76 */ 128|15,
  /* ASCII:  77 */ 128|16,
  /* ASCII:  78 */ 128|17,
  /* ASCII:  79 */ 128|18,
  /* ASCII:  80 */ 128|19,
  /* ASCII:  81 */ 128|20,
  /* ASCII:  82 */ 128|21,
  /* ASCII:  83 */ 128|22,
  /* ASCII:  84 */ 128|23,
  /* ASCII:  85 */ 128|24,
  /* ASCII:  86 */ 128|25,
  /* ASCII:  87 */ 128|26,
  /* ASCII:  88 */ 128|27,
  /* ASCII:  89 */ 128|28,
  /* ASCII:  90 */ 128|29,
  /* ASCII:  91 */ 48,
  /* ASCII:  92 */ 100,
  /* ASCII:  93 */ 49,
  /* ASCII:  94 */ 128|52,
  /* ASCII:  95 */ 128|45,
  /* ASCII:  96 */ 128|47,
  /* ASCII:  97 */ 4,
  /* ASCII:  98 */ 5,
  /* ASCII:  99 */ 6,
  /* ASCII: 100 */ 7,
  /* ASCII: 101 */ 8,
  /* ASCII: 102 */ 9,
  /* ASCII: 103 */ 10,
  /* ASCII: 104 */ 11,
  /* ASCII: 105 */ 12,
  /* ASCII: 106 */ 13,
  /* ASCII: 107 */ 14,
  /* ASCII: 108 */ 15,
  /* ASCII: 109 */ 16,
  /* ASCII: 110 */ 17,
  /* ASCII: 111 */ 18,
  /* ASCII: 112 */ 19,
  /* ASCII: 113 */ 20,
  /* ASCII: 114 */ 21,
  /* ASCII: 115 */ 22,
  /* ASCII: 116 */ 23,
  /* ASCII: 117 */ 24,
  /* ASCII: 118 */ 25,
  /* ASCII: 119 */ 26,
  /* ASCII: 120 */ 27,
  /* ASCII: 121 */ 28,
  /* ASCII: 122 */ 29,
  /* ASCII: 123 */ 128|48,
  /* ASCII: 124 */ 128|100,
  /* ASCII: 125 */ 128|49,
  /* ASCII: 126 */ 52
};