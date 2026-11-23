/* sub_08048040 */
int sub_08048040(void *entity, void *arg1, u16 *arg2) {
    u8 *e = entity;
    u16 *a = arg1;
    u8 val;

    val = e[4] - 1;
    e[4] = val;
    if (val != 0) {
        if (a[1] != a[5]) {
            *arg2 = 1;
            return 1;
        }
        if (a[3] != a[7]) {
            *arg2 = 0;
            return 1;
        }
        return 0;
    }
    e[4] = e[5];
    *arg2 = 2;
    return 1;
}

/* sub_080480FC */
extern u16 D_080FC8C4[];
extern void sub_0804AA70(void);
extern void sub_08048284(void *, s32, s32, s32);
extern void sub_08037FC4(void *, s32);

void sub_080480FC(void *entity) {
    u8 *e = entity;
    u16 *e16 = (u16 *)entity;
    u16 temp;

    e[0x3C] = e[0x3B];
    e16[1] = D_080FC8C4[e[0x3B] * 2];
    temp = D_080FC8C4[e[0x3B] * 2 + 1];
    e16[3] = temp;
    e16[0x16] = temp;
    *(u32 *)(e + 0x64) = (u32)&sub_0804AA70;
    e16[0x15] = 0xA0;
    sub_08048284(entity, 4, 0x3E, 1);
    sub_08037FC4(entity, 0);
}

/* sub_080481D8 */
extern void sub_0804AAF4(void);

void sub_080481D8(void *entity) {
    u8 *e = entity;
    u16 *e16 = (u16 *)entity;

    *(u32 *)(e + 0x64) = (u32)&sub_0804AAF4;
    e16[0x15] = 0x22C;
    sub_08048284(entity, 0x10, 0x3C, 1);
    sub_08037FC4(entity, 2);
    e16[1] = 0x980;
    e16[3] = 0xBA50;
    e16[0x16] = 0xBA50;
    e16[0x1C] = 0;
    e16[0x2A] = 0x40;
    e[0x61] = 2;
}

/* sub_08048228 */
extern u8 gEntityPool[];

void sub_08048228(void) {
    u8 *entity = gEntityPool;
    u8 *ptr = entity + 0x22;
    s32 count = 0xC;

    do {
        ptr[0x18] = 0;
        *(u16 *)(ptr + 0x2A) = 0;
        *(u16 *)(ptr + 0x2E) = 0;
        *(u16 *)ptr = 0;
        ptr[0x1E] = 0;
        *(u32 *)(entity + 0x64) = 0;
        ptr += 0xE0;
        entity += 0xE0;
        count--;
    } while (count >= 0);
}
