/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/2156.c
 * Seed:      1959843252
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   const unsigned f0 : 8;
};

struct S1 {
   int16_t  f0;
   volatile unsigned f1 : 4;
   volatile int32_t  f2;
   uint32_t  f3;
   volatile uint32_t  f4;
   volatile uint32_t  f5;
   volatile uint64_t  f6;
   volatile struct S0  f7;
   volatile uint32_t  f8;
};

/* --- GLOBAL VARIABLES --- */
static const volatile uint16_t g_2 = 4UL;/* VOLATILE GLOBAL g_2 */
static volatile int32_t g_4[1][2] = {{0x63AB1943L,0x63AB1943L}};
static volatile int32_t * volatile g_3[7] = {&g_4[0][1],&g_4[0][0],&g_4[0][0],&g_4[0][1],&g_4[0][0],&g_4[0][0],&g_4[0][1]};
static volatile int32_t * volatile g_5 = (void*)0;/* VOLATILE GLOBAL g_5 */
static volatile int32_t * volatile g_6 = (void*)0;/* VOLATILE GLOBAL g_6 */
static volatile int32_t * volatile g_7[10] = {&g_4[0][1],&g_4[0][1],&g_4[0][1],&g_4[0][1],&g_4[0][1],&g_4[0][1],&g_4[0][1],&g_4[0][1],&g_4[0][1],&g_4[0][1]};
static struct S1 g_9[1] = {{-7L,2,0L,0x5A3D7F19L,0x2530A9BCL,4294967289UL,0xCF1C946B43D2717FLL,{4},0x39EE491BL}};


/* --- FORWARD DECLARATIONS --- */
static struct S1  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_9
 * writes: g_4
 */
static struct S1  func_1(void)
{ /* block id: 0 */
    volatile int32_t *l_8 = &g_4[0][1];
    (*l_8) = g_2;
    return g_9[0];
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
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_9[i].f0, "g_9[i].f0", print_hash_value);
        transparent_crc(g_9[i].f1, "g_9[i].f1", print_hash_value);
        transparent_crc(g_9[i].f2, "g_9[i].f2", print_hash_value);
        transparent_crc(g_9[i].f3, "g_9[i].f3", print_hash_value);
        transparent_crc(g_9[i].f4, "g_9[i].f4", print_hash_value);
        transparent_crc(g_9[i].f5, "g_9[i].f5", print_hash_value);
        transparent_crc(g_9[i].f6, "g_9[i].f6", print_hash_value);
        transparent_crc(g_9[i].f7.f0, "g_9[i].f7.f0", print_hash_value);
        transparent_crc(g_9[i].f8, "g_9[i].f8", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 2
breakdown:
   depth: 0, occurrence: 1
   depth: 1, occurrence: 0
   depth: 2, occurrence: 1
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

XXX total number of pointers: 5

XXX times a variable address is taken: 5
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
XXX number of pointers point to scalars: 5
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 80
XXX average alias set size: 1.4

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 1
XXX times a volatile is available for access: 5
XXX percentage of non-volatile access: 50

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

