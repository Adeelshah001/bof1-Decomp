void *sub_080A353C(void *arg0, s32 arg1);
void *sub_080A0AC8(void *arg0, s32 arg1);

void *sub_080A4970(void *arg0, s32 arg1, s32 arg2) {
    void *ptr;
    u32 val;
    u32 *p;
    u8 *tmp;

    ptr = sub_080A353C(arg0, arg1 * arg2);
    if (ptr == NULL) {
        return NULL;
    }
    tmp = (u8 *)ptr - 8;
    val = *(u32 *)(tmp + 4);
    val = (val & ~3) - 4;
    if (val <= 0x24) {
        p = (u32 *)ptr;
        if (val > 0x13) {
            *p++ = 0;
            ((u32 *)ptr)[1] = 0;
            p++;
            if (val > 0x1B) {
                *p++ = 0;
                *p++ = 0;
                if (val > 0x23) {
                    *p++ = 0;
                    *p++ = 0;
                }
            }
        }
        *p++ = 0;
        *p++ = 0;
        *p = 0;
    } else {
        sub_080A0AC8(ptr, 0);
    }
    return ptr;
}
