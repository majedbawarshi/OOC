//
// Created by Majd Bawarshi on 11.04.2022.
//
#include <stdio.h>


struct Class {
    size_t size;
    void * (* ctor) (void * self, va_list * app);
    void * (* dtor) (void * self);
    void * (* clone) (const void * self);
    int (* differ) (const void * self, const void * b);
};

