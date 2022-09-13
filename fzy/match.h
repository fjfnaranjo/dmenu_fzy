#ifndef MATCH_H
#define MATCH_H MATCH_H

#include <math.h>

typedef double score_t;
#define SCORE_MAX INFINITY
#define SCORE_MIN -INFINITY

#define SCORE_GAP_LEADING -0.005
#define SCORE_GAP_TRAILING -0.005
#define SCORE_GAP_INNER -0.01

int has_match(const char *needle, const char *haystack);
score_t match_positions(const char *needle, const char *haystack, size_t *positions);
score_t fzy_match(const char *needle, const char *haystack);

#endif
