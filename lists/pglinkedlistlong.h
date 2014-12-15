#ifndef PG_LINKED_LIST_LONG
	#define PG_LINKED_LIST_LONG
	typedef struct PG_LINKED_LIST_LONG {
		int64_t num;
		PG_LINKED_LIST_LONG * next;
		PG_LINKED_LIST_LONG * prev;
	} pgListLong;
//TODO
#endif