/* sub_080A4970 */
void *sub_080A353C(void *arg0, s32 arg1);
void *sub_080A0AC8(void *arg0, s32 arg1);

void *sub_080A4970(void *arg0, s32 arg1, s32 arg2) {
    void *ptr;
    u32 val;
    u8 *p;

    ptr = sub_080A353C(arg0, arg1 * arg2);
    if (ptr == NULL) {
        return NULL;
    }
    val = *(u32 *)((u8 *)ptr - 8 + 4);
    val = (val & ~3) - 4;
    if (val <= 0x24) {
        p = (u8 *)ptr;
        if (val > 0x13) {
            *(u32 *)p = 0;
            *(u32 *)((u8 *)ptr + 4) = 0;
            p += 8;
            if (val > 0x1B) {
                *(u32 *)p = 0;
                *(u32 *)(p + 4) = 0;
                p += 8;
                if (val > 0x23) {
                    *(u32 *)p = 0;
                    *(u32 *)(p + 4) = 0;
                    p += 8;
                }
            }
        }
        *(u32 *)p = 0;
        *(u32 *)(p + 4) = 0;
        *(u32 *)(p + 8) = 0;
    } else {
        sub_080A0AC8(ptr, 0);
    }
    return ptr;
}

/* sub_080A4804 */
void sub_080A4764(s32 arg0, s32 arg1);
void sub_080A45E0(void);

void sub_080A4804(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    sub_080A4764(arg0, arg1);
    sub_080A45E0();
}
