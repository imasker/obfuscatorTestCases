/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/9925.c
 * Seed:      297543854
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   const unsigned f0 : 5;
   unsigned f1 : 6;
};

struct S4 {
   volatile uint32_t  f0;
   int8_t  f1;
   volatile uint64_t  f2;
   volatile struct S0  f3;
};

/* --- GLOBAL VARIABLES --- */
static const volatile struct S4 g_2 = {0xB5486B6FL,0xB9L,1UL,{3,0}};/* VOLATILE GLOBAL g_2 */
static volatile int32_t g_4 = 0xFA85F88EL;/* VOLATILE GLOBAL g_4 */
static volatile int32_t *g_3 = &g_4;


/* --- FORWARD DECLARATIONS --- */
static int64_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes: g_3
 */
static int64_t  func_1(void)
{ /* block id: 0 */
    g_3 = (g_2 , (void*)0);
    return g_2.f3.f0;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
    transparent_crc(g_2.f1, "g_2.f1", print_hash_value);
    transparent_crc(g_2.f2, "g_2.f2", print_hash_value);
    transparent_crc(g_2.f3.f0, "g_2.f3.f0", print_hash_value);
    transparent_crc(g_2.f3.f1, "g_2.f3.f1", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
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

XXX non-zero bitfields defined in structs: 0
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
XXX times a single bitfield on RHS: 1

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX total number of pointers: 1

XXX times a variable address is taken: 1
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 100
XXX average alias set size: 1

XXX times a non-volatile is read: 0
XXX times a non-volatile is write: 1
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 33.3

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

