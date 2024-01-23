/*                                 ADVANTAGE 360 KEY MATRIX / LAYOUT MAPPING
 ╭────────────────────────────┬────────────────────────────╮ ╭─────────────────────────────┬─────────────────────────────╮
 │  0   1   2   3   4   5   6 │  7   8   9  10  11  12  13 │ │ LN6 LN5 LN4 LN3 LN2 LN1 LN0 │ RN0 RN1 RN2 RN3 RN4 RN5 RN6 │
 │ 14  15  16  17  18  19  20 │ 21  22  23  24  25  26  27 │ │ LT6 LT5 LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 RT5 RT6 │
 │ 28  29  30  31  32  33  34 │ 39  40  41  42  43  44  45 │ │ LM6 LM5 LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 RM5 RT6 │
 │ 46  47  48  49  50  51 ╭───┴───╮ 54  55  56  57  58  59 │ │ LB5 LB4 LB3 LB2 LB1 LB0 ╭───┴───╮ RB0 RB1 RB2 RB3 RB4 RB5 │
 │ 60  61  62  63  64╭────╯       ╰────╮71  72  73  74  75 │ │ LS4 LS4 LS2 LS1 LS0╭────╯       ╰────╮RS0 RS1 RS2 RS3 RS4 │
 ╰───────────────────┼────────┬────────┼───────────────────╯ ╰────────────────────┼────────┬────────┼────────────────────╯
                 ╭───╯ 35  36 │ 37  38 ╰───╮                                  ╭───╯LH1 LH0 │ RH0 RH1╰───╮
                 │         52 │ 53         │                                  │        LH2 │ RH2        │
                 │ 65  66  67 │ 68  69  70 │                                  │LH5 LH4 LH3 │ RH4 RH4 RH5│
                 ╰────────────┴────────────╯                                  ╰────────────┴────────────╯
*/

#pragma once

#define LN0  6  // left-number row
#define LN1  5
#define LN2  4
#define LN3  3
#define LN4  2
#define LN5  1
#define LN6  0

#define RN0  7  // right-number row
#define RN1  8
#define RN2  9
#define RN3 10
#define RN4 11
#define RN5 12
#define RN5 13

#define LT0 20  // left-top row
#define LT1 19
#define LT2 18
#define LT3 17
#define LT4 16
#define LT5 15
#define LT6 14

#define RT0 21  // right-top row
#define RT1 22
#define RT2 23
#define RT3 24
#define RT4 25
#define RT5 26
#define RT6 27

#define LM0 34  // left-middle row
#define LM1 33
#define LM2 32
#define LM3 31
#define LM4 30
#define LM5 29
#define LM6 28

#define RM0 39  // right-middle row
#define RM1 40
#define RM2 41
#define RM3 42
#define RM4 43
#define RM5 44
#define RM6 45

#define LB0 51  // left-bottom row
#define LB1 50
#define LB2 49
#define LB3 48
#define LB4 47
#define LB5 46

#define RB0 54  // right-bottom row
#define RB1 55
#define RB2 56
#define RB3 57
#define RB4 58
#define RB5 59


#define LS0 64 // left-symbols row
#define LS1 63
#define LS2 62
#define LS3 61
#define LS4 60

#define RS0 71 // right-symbols row
#define RS1 72
#define RS2 73
#define RS3 74
#define RS4 75

#define LH0 36  // left thumb keys
#define LH1 35
#define LH2 52
#define LH3 67
#define LH4 66
#define LH5 65

#define RH0 37  // right thumb keys
#define RH1 38
#define RH2 53
#define RH3 68
#define RH4 69
#define RH5 70

#define KEYS_L LN0 LN1 LN2 LN3 LN4 LN5 LN6 LT0 LT1 LT2 LT3 LT4 LT5 LT6 LM0 LM1 LM2 LM3 LM4 LM5 LM6 LB0 LB1 LB2 LB3 LB4 LB5 LS0 LS1 LS2 LS3 LS4
#define KEYS_R RN0 RN1 RN2 RN3 RN4 RN5 RN5 RT0 RT1 RT2 RT3 RT4 RT5 RT6 RM0 RM1 RM2 RM3 RM4 RM5 RM6 RB0 RB1 RB2 RB3 RB4 RB5 RS0 RS1 RS2 RS3 RS4
#define THUMBS LH0 LH1 LH2 LH3 LH4 LH5 RH0 RH1 RH2 RH3 RH4 RH5