#ifndef PG_LINKED_LIST_STR
	#define PG_LINKED_LIST_STR
	typedef struct PG_LINKED_LIST_STRING {
		char* str;
		struct PG_LINKED_LIST_STRING * next;
		struct PG_LINKED_LIST_STRING * prev;
	} pgListString;
//TODO
#endif