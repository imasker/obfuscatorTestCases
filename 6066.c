/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/6066.c
 * Seed:      4075498412
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint64_t g_6 = 1UL;/* VOLATILE GLOBAL g_6 */
static int32_t g_9 = (-9L);
static int32_t g_21 = 2L;
static uint32_t g_22[5] = {18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL};


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);
static uint64_t  func_13(uint32_t  p_14, int8_t  p_15, uint64_t  p_16);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_9 g_22
 * writes: g_22
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    const uint32_t l_10 = 0x662A2B3BL;
    int64_t l_19[2];
    int32_t l_25 = 0L;
    int i;
    for (i = 0; i < 2; i++)
        l_19[i] = 0xD5DE1FC657863718LL;
    l_25 = (((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((g_6 < (safe_add_func_uint8_t_u_u(g_9, l_10))) , l_10), g_9)), g_9)) , ((safe_add_func_int64_t_s_s((func_13((0xF67D50F82BAEF6E2LL == ((((safe_mul_func_int16_t_s_s(g_6, l_10)) <= 8UL) == l_10) <= g_9)), l_10, l_19[1]) == g_9), 0L)) && 0x1CL)) < 0x1E2CD8491F199E1FLL);
    return l_19[1];
}


/* ------------------------------------------ */
/* 
 * reads : g_22
 * writes: g_22
 */
static uint64_t  func_13(uint32_t  p_14, int8_t  p_15, uint64_t  p_16)
{ /* block id: 1 */
    int32_t *l_20[2];
    int i;
    for (i = 0; i < 2; i++)
        l_20[i] = &g_21;
    g_22[4]--;
    return p_15;
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
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_22[i], "g_22[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 6
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

XXX max expression depth: 19
breakdown:
   depth: 1, occurrence: 5
   depth: 19, occurrence: 1

XXX total number of pointers: 1

XXX times a variable address is taken: 1
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 68
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 13
XXX times a non-volatile is write: 2
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 3
XXX percentage of non-volatile access: 88.2

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 23.1
XXX percentage an existing variable is used: 76.9
********************* end of statistics **********************/

