extern u8 D_030040EC[];
extern u16 D_080A64D0[];
extern u8 D_0201CFC0[];

void sub_080A0A68(void *dst, const void *src, s32 size);

u8 sub_08037754(u16 arg0) {
    u16 buf[8];
    u8 result = 0xFF;
    u8 i = 0;

    sub_080A0A68(buf, D_080A64D0, 0x10);

    if (*D_030040EC == 0) {
        if (arg0 == buf[0]) {
            result = 0;
        } else {
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
    u16 out_off = 0;
    u16 in_off = 0;

    if (out_off < arg1) {
        do {
            D_0201CFC0[out_off] = (arg0[in_off] & 0xF) + 0x10;
            D_0201CFC0[out_off + 1] = (arg0[in_off] >> 4) + 0x10;
            out_off += 2;
            in_off += 1;
        } while (out_off < arg1);
    }

    return (u32)D_0201CFC0;
}
