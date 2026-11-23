extern u8 D_030040EC[];
extern u16 D_080A64D0[];
extern u8 D_0201CFC0[];
extern u8 D_030023E0[];
extern u8 D_030033D8[];

void sub_080A0A68(void *dst, const void *src, s32 size);
s32 sub_0802C248(s32 arg0, u16 arg1);
s32 sub_0800312C(s32 arg0, s32 arg1);
s32 sub_08001F80(s32 arg0, void (*func)(void), u8 *data);
void sub_08028400(void);

u8 sub_08037754(u16 arg0) {
    u16 buf[8];
    u8 result = 0xFF;
    u8 i;

    sub_080A0A68(buf, D_080A64D0, 0x10);

    if (*D_030040EC == 0) {
        if (arg0 == buf[0]) {
            result = 0;
        } else {
            i = 0;
            do {
                i++;
                if (i > 3) break;
                if (arg0 == buf[i * 2]) {
                    result = i;
                    break;
                }
            } while (1);
        }
    }

    return result;
}

u32 sub_080377A8(u8 *arg0, u16 arg1) {
    u8 *src = arg0;
    u8 *dst = (u8 *)D_0201CFC0;
    u16 count = arg1;
    u16 out_off = 0;
    u16 in_off = 0;

    if (out_off < count) {
        do {
            dst[out_off] = (src[in_off] & 0xF) + 0x10;
            dst[out_off + 1] = (src[in_off] >> 4) + 0x10;
            out_off += 2;
            in_off += 1;
        } while (out_off < count);
    }

    return (u32)D_0201CFC0;
}

s32 sub_08037468(void) {
    u8 *base;
    u16 val;

    *D_030033D8 = 0;
    base = D_030023E0;
    sub_0802C248(1, *(u16 *)(base + 0xA4));
    val = *(u16 *)(base + 0xA8);
    if (val == 0x56 || val == 0x7F) {
        sub_0800312C(0x10, 0x28);
    } else {
        sub_0800312C(0x10, 0);
    }
    sub_08001F80(1, sub_08028400, D_030023E0);
    return 1;
}

s32 sub_08037410(void) {
    u8 *base;
    u16 val;

    *D_030033D8 = 0;
    base = D_030023E0;
    sub_0802C248(0, *(u16 *)(base + 0xA4));
    val = *(u16 *)(base + 0xA8);
    if (val == 0x56 || val == 0x7F) {
        sub_0800312C(0x10, 0x28);
    } else {
        sub_0800312C(0x10, 0);
    }
    sub_08001F80(1, sub_08028400, D_030023E0);
    return 1;
}
