/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/7251.c
 * Seed:      4231871186
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int32_t  f0;
   uint8_t  f1;
   volatile uint16_t  f2;
   unsigned f3 : 22;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_4 = 0x3B9DA4D0L;
static int32_t * const  volatile g_3[2][8] = {{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4}};
static volatile union U0 g_8[9][3] = {{{1L},{1L},{0L}},{{0x6F084217L},{0x6F084217L},{-1L}},{{1L},{1L},{0L}},{{0x6F084217L},{0x6F084217L},{-1L}},{{1L},{1L},{0L}},{{0x6F084217L},{0x6F084217L},{-1L}},{{1L},{1L},{0L}},{{0x6F084217L},{0x6F084217L},{-1L}},{{1L},{1L},{0L}}};
static int32_t * volatile g_9 = &g_4;/* VOLATILE GLOBAL g_9 */


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_8 g_4 g_9 g_8.f0
 * writes: g_4
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    const uint16_t l_2 = 0x5BA7L;
    int32_t l_5 = 0x759951EAL;
    l_5 = l_2;
    (*g_9) = (safe_mod_func_uint32_t_u_u((g_8[0][1] , 4294967295UL), g_4));
    return g_8[0][1].f0;
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
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_8[i][j].f0, "g_8[i][j].f0", print_hash_value);
            transparent_crc(g_8[i][j].f1, "g_8[i][j].f1", print_hash_value);
            transparent_crc(g_8[i][j].f2, "g_8[i][j].f2", print_hash_value);
            transparent_crc(g_8[i][j].f3, "g_8[i][j].f3", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
XXX total union variables: 1

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
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

XXX max expression depth: 3
breakdown:
   depth: 1, occurrence: 4
   depth: 3, occurrence: 1

XXX total number of pointers: 2

XXX times a variable address is taken: 7
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 50
XXX average alias set size: 1.5

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 2
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 57.1

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 60
XXX percentage an existing variable is used: 40
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

