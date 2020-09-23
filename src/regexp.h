#ifndef _REGEXP_H
#define _REGEXP_H

#if defined(HAVE_PCREPOSIX)
#include <pcreposix.h>
#else
#include <regex.h>
#endif

extern regex_t *regex_compile(const char *str);
extern int regex_check(regex_t *regex, const char *buf);
extern void regex_free(regex_t **regex);

#endif
