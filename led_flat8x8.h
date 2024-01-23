//    WORD CLOCK - for ESP32 adjusted  to 8x8 matrix

#define NUM_LEDS     64 // 8x8 LEDs
#define ALLLED_BRIGHTNESS 80 // Adjust to less than 2000mA when all LEDs are on

/* 10x10 matrix word clock (Flat Layout)
*
*      0   1   2   3   4   5   6   7   8   9

*      |10|    |32|    |54|    |76|    |98|
* 00   9  11  31  33  53  55  75  77  97  99
* 10   8  12  30  34  52  56  74  78  96  100
* 20   7  13  29  35  51  57  73  79  95  101
* 30   6  14  28  36  50  58  72  80  94  102
* 40   5  15  27  37  49  59  71  81  93  103
* 50   4  16  26  38  48  60  70  82  92  104
* 60   3  17  25  39  47  61  69  83  91  105
* 70   2  18  24  40  46  62  68  84  90  106
* 80   1  19  23  41  45  63  67  85  89  107
* 90   0  20  22  42  44  64  66  86  88  108
*     |||  |21|    |43|    |65|    |87|
*     |||
*     |||
*     ESP32
*/
//new 8x8 matrix sanakello 

uint8_t LED[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 
  15, 14, 13, 12, 11, 10, 9, 8, 
  16, 17, 18, 19, 20, 21, 22, 23,
  31, 30, 29, 28, 27, 26, 25, 24,
  32, 33, 34, 35, 36, 37, 38, 39,
  47, 46, 45, 44, 43, 42, 41, 40,
  48, 49, 50, 51, 52, 53, 54, 55,
  63, 62, 61, 60, 59, 58, 57, 56
};


/* 8x8 matrix word clock
 *
 *     0 1 2 3 4 5 6 7 
 * 00  A T W E N T Y D 
 *     Q U A R T E R Y 8
 * 16  F I V E H A L F 
 *     D P A S T O R O 24
 * 32  F I V E I G H T 
 *     S I X T H R E E 40
 * 48  T W E L E V E N 
 *     F O U R N I N E 56
  */

uint8_t word_ITIS[]=    {88,88,88,88};
uint8_t word_AM[]=      {6,7}; 
uint8_t word_PM[]=      {8,9}; 
uint8_t word_OCLOCK[]=  {9,5,6,7,8,11};

uint8_t word_TO[]=      {28,29};
uint8_t word_PAST[]=    {25,26,27,28};
uint8_t word_AQUARTER[]={0,8,9,10,11,12,13,14};
uint8_t word_HALF[]=    {20,21,22,23};

uint8_t word_ONE[]=     {31,55,63};
uint8_t word_TWO[]=     {48,49,57};
uint8_t word_THREE[]=   {43,44,45,46,47};
uint8_t word_FOUR[]=    {56,57,58,59};
uint8_t word_FIVE1[]=   {16,17,18,19};
uint8_t word_FIVE2[]=   {32,33,34,35};
uint8_t word_SIX[]=     {40,41,42};
uint8_t word_SEVEN[]=   {40,52,53,54,55};
uint8_t word_EIGHT[]=   {35,36,37,38,39};
uint8_t word_NINE[]=    {60,61,62,63};
uint8_t word_TEN1[]=    {1,3,4};
uint8_t word_TEN2[]=    {39,47,55};
uint8_t word_ELEVEN[]=  {50,51,52,53,54,55};
uint8_t word_TWELVE[]=  {48,49,50,51,53,54};
uint8_t word_TWENTY[]=  {1,2,3,4,5,6};

uint8_t word_MIN1[]=    {6};
uint8_t word_MIN2[]=    {7};
uint8_t word_MIN3[]=    {8};
uint8_t word_MIN4[]=    {9};
uint8_t word_SECONDS[]= {5};

uint8_t word_WIFI[]=    {16,17,18,19};
uint8_t word_ERR[]=     {35,36,37};

uint8_t word_WORD[]=    {1,2,3,4};
uint8_t word_CLOCK[]=   {5,6,7,8,9};
