extern const u16 D_082D5C64[];
extern u16 D_06011280[];

static inline void copy_rect(const u16 *src, u16 *dst, s32 rows, s32 cols) {
    s32 i = rows - 1;
    do {
        u16 *row = dst;
        s32 j = 0;
        u16 *next = row + 0x200;
        while (j < cols) {
            s32 k;
            for (k = 0; k < 16; k++) {
                *row++ = *src++;
            }
            j++;
        }
        dst = next;
        i--;
    } while (i != -1);
}

void sub_08073A60(void) {
    copy_rect(D_082D5C64, D_06011280, 1, 10);
}
