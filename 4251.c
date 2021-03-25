/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/4251.c
 * Seed:      1900819094
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   const uint32_t  f1;
   const unsigned f2 : 17;
   volatile int32_t  f3;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2[7] = {0xFA72C25FL,0xFA72C25FL,0xFA72C25FL,0xFA72C25FL,0xFA72C25FL,0xFA72C25FL,0xFA72C25FL};
static int32_t g_3 = (-1L);
static struct S0 g_6[3][4] = {{{-6L,0x8C38EC32L,134,-1L},{-4L,0x2D714F98L,86,4L},{-6L,0x8C38EC32L,134,-1L},{-4L,0x2D714F98L,86,4L}},{{-6L,0x8C38EC32L,134,-1L},{-4L,0x2D714F98L,86,4L},{-6L,0x8C38EC32L,134,-1L},{-4L,0x2D714F98L,86,4L}},{{-6L,0x8C38EC32L,134,-1L},{-4L,0x2D714F98L,86,4L},{-6L,0x8C38EC32L,134,-1L},{-4L,0x2D714F98L,86,4L}}};


/* --- FORWARD DECLARATIONS --- */
static struct S0  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_6
 * writes: g_3
 */
static struct S0  func_1(void)
{ /* block id: 0 */
    for (g_3 = 15; (g_3 == 29); g_3++)
    { /* block id: 3 */
        return g_6[0][2];
    }
    return g_6[0][2];
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
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_6[i][j].f0, "g_6[i][j].f0", print_hash_value);
            transparent_crc(g_6[i][j].f1, "g_6[i][j].f1", print_hash_value);
            transparent_crc(g_6[i][j].f2, "g_6[i][j].f2", print_hash_value);
            transparent_crc(g_6[i][j].f3, "g_6[i][j].f3", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 0
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 1
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 2
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

