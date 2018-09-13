#ifndef MARRAY_H
#define MARRAY_H
#define Bool int
#define True  1
#define False 0

struct mArray{
   int * pbase;
   int len;
   int cnt;
};

void init_arr(struct mArray *pArr, int length);
Bool append_arr(struct mArray *pArr, int value);
Bool insert_arr(struct mArray *pArr, int pos, int value);
Bool delete_arr(struct mArray *pArr, int pos, int *pval);
int get();
Bool is_empty(struct mArray *pArr);
Bool is_full(struct mArray *pArr);
void sort_arr(struct mArray * pArr);
void show_arr(struct mArray *pArr);
void inversion_arr(struct mArray *pArr);

#endif
