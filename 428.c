/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/428.c
 * Seed:      2150647374
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U2 {
   int64_t  f0;
   const volatile uint64_t  f1;
   volatile uint32_t  f2;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_4 = (-1L);
static volatile uint64_t g_5 = 0x33F23E93D0B5486BLL;/* VOLATILE GLOBAL g_5 */
static union U2 g_10 = {0x7341720348F4A8FELL};/* VOLATILE GLOBAL g_10 */


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_10.f2
 * writes: g_5
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = (void*)0;
    int32_t *l_3[2];
    union U2 *l_9 = &g_10;
    union U2 **l_8 = &l_9;
    int i;
    for (i = 0; i < 2; i++)
        l_3[i] = &g_4;
    ++g_5;
    (*l_8) = (void*)0;
    return g_10.f2;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
    transparent_crc(g_10.f1, "g_10.f1", print_hash_value);
    transparent_crc(g_10.f2, "g_10.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
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
   depth: 1, occurrence: 5

XXX total number of pointers: 4

XXX times a variable address is taken: 3
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 34

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 50
XXX average alias set size: 1.25

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 2
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 60

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 25
XXX percentage an existing variable is used: 75
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/
