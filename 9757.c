/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/9757.c
 * Seed:      2441074026
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   int8_t  f1;
   int64_t  f2;
   uint32_t  f3;
   const uint32_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

union U1 {
   int8_t  f0;
   signed f1 : 7;
   volatile int32_t  f2;
   int8_t  f3;
   volatile struct S0  f4;
};

/* --- GLOBAL VARIABLES --- */
static volatile uint16_t g_2 = 3UL;/* VOLATILE GLOBAL g_2 */
static int16_t g_3 = 0x525DL;
static int32_t g_5[3] = {0x9CD49FCFL,0x9CD49FCFL,0x9CD49FCFL};
static int32_t *g_7 = &g_5[2];
static int32_t ** const  volatile g_6[6] = {&g_7,&g_7,&g_7,&g_7,&g_7,&g_7};
static int32_t ** volatile g_8 = &g_7;/* VOLATILE GLOBAL g_8 */
static union U1 g_9 = {-1L};/* VOLATILE GLOBAL g_9 */


/* --- FORWARD DECLARATIONS --- */
static union U1  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3 g_8 g_9
 * writes: g_3 g_7
 */
static union U1  func_1(void)
{ /* block id: 0 */
    int32_t *l_4 = &g_5[2];
    g_3 &= g_2;
    (*g_8) = l_4;
    return g_9;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
    transparent_crc(g_9.f3, "g_9.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 4
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 5

XXX total number of pointers: 4

XXX times a variable address is taken: 6
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 1

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 2
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 2
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 66.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

