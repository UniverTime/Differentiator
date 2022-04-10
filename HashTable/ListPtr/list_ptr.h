
#ifndef LIST_

#define LIST_

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>

//===============================================

const size_t NAME_LENGTH = 40;

#define M_SCN_LENGTH "39"

//===============================================

typedef const char* type;

typedef struct List{

    char word[NAME_LENGTH];

    size_t frequency;

    List* next;

    List* prev;

    List** word_son = nullptr;

    size_t links_size = 0;

    size_t links_size_limit = 1;

    bool sentences_end = false;

    bool sentences_begin = false;

} List;

typedef struct Tree{

    List* lst           ;

    size_t capacity     ;

    size_t size         ;

} Tree;

//===============================================

void            list_init               (Tree*, size_t)             ;
bool            list_insert             (Tree*, size_t, type)       ;
bool            list_delete_after       (Tree*, size_t)             ;
List*           search_element          (Tree*, size_t)             ;
void            list_destructor         (Tree*)                     ;
void            list_dump               (Tree*)                     ;
void end_begin_detector(List* cell);

#endif
