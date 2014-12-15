#ifndef PG_LINKED_LIST_INTEGER
	#define PG_LINKED_LIST_INTEGER
	typedef struct PG_LINKED_LIST_INT {
		int32_t num;
		struct PG_LINKED_LIST_INT * next;
		struct PG_LINKED_LIST_INT * prev;
	} pgListInt;

	void pgListAddFrontInt(pgListInt* head) {
		//TODO
	}

	void pgListAddLastInt(pgListInt* head) {
		//TODO
	}

	pgListInt* pgListSearchInt(pgListInt* head, int32_t toFind) {
		//TODO
		return (void *) 0;
	}

	void pgListInsertIndexInt(pgListInt* head, int32_t index, int32_t toAdd) {
		//TODO
	}

#endif