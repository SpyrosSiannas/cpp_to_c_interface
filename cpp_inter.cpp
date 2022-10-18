#include "cppimpl.h"
#include "cpp_inter.h"
#include "stdlib.h"

struct test {
    void* obj;
};

testh create(int a) {
    testh handler;
    Test* cpphandler;


    handler = (testh)malloc(sizeof(test));
    cpphandler = new Test(5);

    handler->obj = cpphandler;
    return handler;
}

void destroy(testh p){
    if (p == NULL)
		return;
	delete static_cast<Test *>(p->obj);
	free(p);
}

int get_val(testh p){
    Test *obj;

	if (p == NULL)
		return 0;

	obj = static_cast<Test *>(p->obj);
	return obj->getVal();
}
