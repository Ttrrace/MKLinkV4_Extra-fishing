#ifndef FISH_SAVE_STORAGE_H
#define FISH_SAVE_STORAGE_H
#include <stddef.h>
#include <stdint.h>
/* Storage owns async worker buffers. Boot reads run before the scene starts.
 * Slots0/1 V16;2/3 V15;4/5 V14;6/7 V13;8/9 V12;10/11 V11;12/13 V10;
 * 14/15 V9;16/17 V8;18/19 V7;20/21 V6;22/23 V5;24/25 V1-V4 are read-only.
 * Only0/1 are written; all older-version files stay untouched.
 * read: 0 exact file, -2 absent, -3 wrong size, -1 IO error.
 * begin: 0 accepted; poll: 0 pending, 1 durable+readback verified, -1 failed.
 * begin must not modify the currently active slot. */
int fish_storage_init(uint8_t key[32]);
int fish_storage_read(unsigned slot,uint8_t *file,size_t len);
int fish_storage_begin(unsigned slot,const uint8_t *file,size_t len);
int fish_storage_poll(void);
/* Optional port detail: high byte is stage, low byte is filesystem result. */
unsigned fish_storage_diagnostic(void);
unsigned fish_storage_write_diagnostic(void);
#endif
