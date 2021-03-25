/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/400.c
 * Seed:      193218732
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_6 = 0xA5L;
static volatile uint8_t g_17 = 0xACL;/* VOLATILE GLOBAL g_17 */
static int32_t g_32[7][2] = {{3L,3L},{3L,3L},{3L,3L},{3L,3L},{3L,3L},{3L,3L},{3L,3L}};
static int32_t g_36 = 1L;
static int32_t * volatile g_35 = &g_36;/* VOLATILE GLOBAL g_35 */


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static int32_t  func_2(uint8_t  p_3, int64_t  p_4, uint8_t  p_5);
static const uint32_t  func_9(const uint16_t  p_10);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_17 g_32 g_35
 * writes: g_17 g_32 g_36
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_24 = 65531UL;
    int32_t *l_34 = &g_32[4][0];
    (*g_35) = ((*l_34) = func_2(g_6, ((((safe_mod_func_int32_t_s_s(0x16580849L, func_9(g_6))) , (safe_sub_func_int16_t_s_s(g_6, (safe_rshift_func_int16_t_s_s(func_9(g_6), 3))))) == 0UL) , 1L), l_24));
    return g_32[4][0];
}


/* ------------------------------------------ */
/* 
 * reads : g_32
 * writes: g_32
 */
static int32_t  func_2(uint8_t  p_3, int64_t  p_4, uint8_t  p_5)
{ /* block id: 4 */
    int64_t l_29 = 0L;
    int32_t l_33[6] = {0xDCC3592EL,(-7L),(-7L),0xDCC3592EL,(-7L),(-7L)};
    int i;
    for (p_5 = 0; (p_5 >= 20); ++p_5)
    { /* block id: 7 */
        int8_t l_30 = (-2L);
        int32_t *l_31 = &g_32[4][0];
        l_33[5] ^= (((*l_31) &= (l_30 |= (safe_mul_func_uint8_t_u_u(l_29, l_29)))) >= 0x23E24B13L);
    }
    return p_5;
}


/* ------------------------------------------ */
/* 
 * reads : g_17 g_6
 * writes: g_17
 */
static const uint32_t  func_9(const uint16_t  p_10)
{ /* block id: 1 */
    int32_t *l_11 = (void*)0;
    int32_t l_12 = 9L;
    int32_t l_13 = (-1L);
    int32_t *l_14 = &l_12;
    int32_t *l_15 = &l_12;
    int32_t *l_16[6];
    int i;
    for (i = 0; i < 6; i++)
        l_16[i] = (void*)0;
    g_17--;
    return g_6;
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
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_32[i][j], "g_32[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_36, "g_36", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 8
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

XXX max expression depth: 13
breakdown:
   depth: 1, occurrence: 7
   depth: 2, occurrence: 1
   depth: 5, occurrence: 1
   depth: 13, occurrence: 1

XXX total number of pointers: 7

XXX times a variable address is taken: 5
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 83

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 5
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 7
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 28.6
XXX average alias set size: 1

XXX times a non-volatile is read: 11
XXX times a non-volatile is write: 8
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 5
XXX percentage of non-volatile access: 90.5

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 6
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 27.6
XXX percentage an existing variable is used: 72.4
********************* end of statistics **********************/

