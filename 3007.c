/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/3007.c
 * Seed:      751930338
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   int8_t  f0;
   volatile unsigned f1 : 28;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_3[10][2] = {{0xC58FB770L,0xC58FB770L},{0xC58FB770L,0xC58FB770L},{0xC58FB770L,0xC58FB770L},{0xC58FB770L,0xC58FB770L},{0xC58FB770L,0xC58FB770L},{0xC58FB770L,0xC58FB770L},{0xC58FB770L,0xC58FB770L},{0xC58FB770L,0xC58FB770L},{0xC58FB770L,0xC58FB770L},{0xC58FB770L,0xC58FB770L}};
static struct S0 g_14 = {1L,6030};/* VOLATILE GLOBAL g_14 */


/* --- FORWARD DECLARATIONS --- */
static struct S0  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_14
 * writes:
 */
static struct S0  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = &g_3[2][1];
    int32_t *l_4 = &g_3[2][1];
    int32_t *l_5 = &g_3[2][1];
    int32_t *l_6 = &g_3[3][0];
    int32_t *l_7 = &g_3[2][1];
    int32_t *l_8[6] = {&g_3[8][1],&g_3[8][1],&g_3[8][1],&g_3[8][1],&g_3[8][1],&g_3[8][1]};
    int64_t l_9 = 0L;
    int32_t l_10[10];
    uint8_t l_11 = 255UL;
    int i;
    for (i = 0; i < 10; i++)
        l_10[i] = (-1L);
    l_11--;
    return g_14;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    transparent_crc(g_14.f1, "g_14.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 1
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 3

XXX total number of pointers: 6

XXX times a variable address is taken: 7
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 108
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 6
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 23.5
XXX percentage an existing variable is used: 76.5
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

