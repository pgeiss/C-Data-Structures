#ifndef PG_LINKED_LIST_STR
	#define PG_LINKED_LIST_STR
	typedef struct PG_LINKED_LIST_STRING {
		char* str;
		PG_LINKED_LIST_STRING * next;
		PG_LINKED_LIST_STRING * prev;
	} pgListString;
//TODO
#endif