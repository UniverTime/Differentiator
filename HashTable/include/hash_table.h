
#ifndef HASHT_

#define HASHT_

#include <ctime>
#include "../ListPtr/list_ptr.h"

const size_t NULL_HASH      = 0xdd233d4;
const size_t TABLE_SIZE     = 1000;
const size_t MAX_LIST_SIZE  = 1000;

void text_generate(FILE* out_txt, Tree* tree_union, size_t fras_size);
void tree_union_destructor(Tree* tree_union);
Tree*   do_hash_table    (const char* = nullptr, const char* = nullptr);
void processing_data    (const char* inp_file, Tree* tree_union);
void add_new_word       (const char* word, const char* next_word, Tree* tree_union);
void   all_list_init    (Tree*              );
void   all_list_destr   (Tree*              );
void get_info(Tree* tree_union, const char* name_inf_file);
size_t DragonHash       (const char*        );

#endif
