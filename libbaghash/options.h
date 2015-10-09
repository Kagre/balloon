#ifndef __OPTIONS_H__
#define __OPTIONS_H__

#include <baghash.h>

int options_validate (struct baghash_options *opt);

size_t options_n_blocks (const struct baghash_options *opts);

size_t options_block_size (const struct baghash_options *opts);

unsigned int options_n_neighbors (const struct baghash_options *opts);
#endif
