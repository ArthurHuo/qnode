/*
 * See Copyright Notice in qnode.h
 */

#ifndef __QSTRING_H__
#define __QSTRING_H__

#include <stdarg.h>
#include <stdio.h>

typedef struct qstring_t {
  size_t len;
  size_t size;
  char *data;
} qstring_t;

void qstring_init(qstring_t *string);

void qstring_destroy(qstring_t *string);

int  qstring_assign(qstring_t *string, const char *str);
int  qstring_append(qstring_t *string, const char *str);

int  qstring_format(qstring_t *string, char *fmt, ...);

#endif  /* __QSTRING_H__ */
