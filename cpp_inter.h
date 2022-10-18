#ifdef __cplusplus
extern "C" {
#endif

struct test;
typedef struct test test_t;
typedef test_t* testh;

testh create(int a);
void destroy(testh p);
int get_val(testh p);

#ifdef __cplusplus
}
#endif
