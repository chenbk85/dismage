#ifndef RESULT_H
#define RESULT_H

#include "dismage.h"

typedef struct {
    PyObject_HEAD
    PyObject *columns;
    PyObject *rows;
} ResultObject;

extern PyTypeObject ResultObjectType;

PyObject* create_start_result(PyObject *clientObj);

#endif
