/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/6512.c
 * Seed:      3915191530
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   const int32_t  f0;
   volatile int32_t  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int64_t  f0;
   volatile int32_t  f1;
   volatile int32_t  f2;
   const volatile int64_t  f3;
   int64_t  f4;
   int64_t  f5;
   uint32_t  f6;
   struct S0  f7;
   int64_t  f8;
   int32_t  f9;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   volatile signed f0 : 4;
   unsigned f1 : 7;
   uint32_t  f2;
   uint32_t  f3;
   unsigned f4 : 9;
   unsigned f5 : 3;
   signed f6 : 7;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static volatile struct S3 g_2 = {2,3,0x8ED40A16L,1UL,2,1,-1};/* VOLATILE GLOBAL g_2 */
static struct S1 g_4[7] = {{8L,-1L,0xCF3E4C99L,0xE1580EB60F9AA2AALL,-6L,0x2B0402AD9236F914LL,0x12652969L,{-8L,-1L},0x5B4D633C66883CE7LL,3L},{0xF84255EBDA18461ELL,1L,0x658A6001L,2L,0xA9733147F59EC134LL,0L,18446744073709551615UL,{0L,0x090AE735L},-10L,-5L},{8L,-1L,0xCF3E4C99L,0xE1580EB60F9AA2AALL,-6L,0x2B0402AD9236F914LL,0x12652969L,{-8L,-1L},0x5B4D633C66883CE7LL,3L},{8L,-1L,0xCF3E4C99L,0xE1580EB60F9AA2AALL,-6L,0x2B0402AD9236F914LL,0x12652969L,{-8L,-1L},0x5B4D633C66883CE7LL,3L},{0xF84255EBDA18461ELL,1L,0x658A6001L,2L,0xA9733147F59EC134LL,0L,18446744073709551615UL,{0L,0x090AE735L},-10L,-5L},{8L,-1L,0xCF3E4C99L,0xE1580EB60F9AA2AALL,-6L,0x2B0402AD9236F914LL,0x12652969L,{-8L,-1L},0x5B4D633C66883CE7LL,3L},{8L,-1L,0xCF3E4C99L,0xE1580EB60F9AA2AALL,-6L,0x2B0402AD9236F914LL,0x12652969L,{-8L,-1L},0x5B4D633C66883CE7LL,3L}};


/* --- FORWARD DECLARATIONS --- */
static struct S1  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_4
 * writes: g_2
 */
static struct S1  func_1(void)
{ /* block id: 0 */
    volatile struct S3 *l_3 = &g_2;
    (*l_3) = g_2;
    return g_4[4];
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
    transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
    transparent_crc(g_2.f1, "g_2.f1", print_hash_value);
    transparent_crc(g_2.f2, "g_2.f2", print_hash_value);
    transparent_crc(g_2.f3, "g_2.f3", print_hash_value);
    transparent_crc(g_2.f4, "g_2.f4", print_hash_value);
    transparent_crc(g_2.f5, "g_2.f5", print_hash_value);
    transparent_crc(g_2.f6, "g_2.f6", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_4[i].f0, "g_4[i].f0", print_hash_value);
        transparent_crc(g_4[i].f1, "g_4[i].f1", print_hash_value);
        transparent_crc(g_4[i].f2, "g_4[i].f2", print_hash_value);
        transparent_crc(g_4[i].f3, "g_4[i].f3", print_hash_value);
        transparent_crc(g_4[i].f4, "g_4[i].f4", print_hash_value);
        transparent_crc(g_4[i].f5, "g_4[i].f5", print_hash_value);
        transparent_crc(g_4[i].f6, "g_4[i].f6", print_hash_value);
        transparent_crc(g_4[i].f7.f0, "g_4[i].f7.f0", print_hash_value);
        transparent_crc(g_4[i].f7.f1, "g_4[i].f7.f1", print_hash_value);
        transparent_crc(g_4[i].f8, "g_4[i].f8", print_hash_value);
        transparent_crc(g_4[i].f9, "g_4[i].f9", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 2
breakdown:
   depth: 0, occurrence: 0
   depth: 1, occurrence: 1
   depth: 2, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 5
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 1
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 1
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 3

XXX total number of pointers: 1

XXX times a variable address is taken: 1
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
XXX number of pointers point to scalars: 0
XXX number of pointers point to structs: 1
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 1
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 50

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

