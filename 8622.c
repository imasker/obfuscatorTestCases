/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/8622.c
 * Seed:      3260091498
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_3 = (-4L);
static volatile int32_t g_4[6] = {0L,0x7F759609L,0L,0L,0x7F759609L,0L};
static volatile uint8_t g_5[5][6][2] = {{{0x2DL,249UL},{0UL,255UL},{249UL,0x2DL},{0xFBL,249UL},{0xCDL,0x2DL},{0xCDL,249UL}},{{0xFBL,0x2DL},{249UL,255UL},{0UL,249UL},{0x2DL,0xCDL},{0xCDL,250UL},{0UL,0x2DL}},{{250UL,0x2DL},{0UL,250UL},{0xCDL,0xCDL},{0x2DL,249UL},{0UL,255UL},{249UL,0x2DL}},{{0xFBL,249UL},{0xCDL,0x2DL},{250UL,0xFBL},{0UL,0x2DL},{0xFBL,0xADL},{0x37L,0xFBL}},{{0xD0L,250UL},{250UL,0xA7L},{0x37L,0x2DL},{0xA7L,0x2DL},{0x37L,0xA7L},{250UL,250UL}}};


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5
 * writes: g_5
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_2[5] = {&g_3,&g_3,&g_3,&g_3,&g_3};
    int i;
    g_5[3][0][0]--;
    return g_5[3][3][0];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_5[i][j][k], "g_5[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 0
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 0
breakdown:
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 3

XXX total number of pointers: 1

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 21
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 0
XXX times a non-volatile is write: 0
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 0

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 22.2
XXX percentage an existing variable is used: 77.8
********************* end of statistics **********************/
