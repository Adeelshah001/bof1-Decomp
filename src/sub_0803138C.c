void sub_080327BC(u8 *arg0, u8 arg1);
void sub_0802CCEC(void *arg0);
void sub_080379D4(s32 arg0);
void sub_08030BB0(void *arg0, s32 arg1);

void sub_080313C8(u8 *arg0, u8 arg1) {
    arg0[0x61] = (arg1 >> 4) & 3;
    sub_080327BC(arg0, arg1);
}

void sub_080313E4(u8 *arg0, u8 arg1) {
    u8 *base = arg0;
    u32 t = arg1 << 24;
    u32 f;

    base[0xC3] = *((u8 *)*(u32 *)(base + 0x88) + 1);
    *(u32 *)(base + 0x88) = *(u32 *)(base + 0x88) + 2;
    f = (t & 0x0F000000) >> 24;
    if (f == 0) {
        *(u16 *)(base + 0x22) = f;
        sub_0802CCEC(base);
    }
    base[0x4D] = 4;
}

void sub_0803138C(u8 *arg0) {
    u8 *p = arg0;
    u8 *t = p + 0x54;
    u32 tmp;

    if (*t == 0) {
        *t = 3;
        sub_080379D4(0xF);
        tmp = p[0x55];
        tmp--;
        p[0x55] = tmp;
        if ((tmp << 24) == 0) {
            sub_08030BB0(p, 0x4E);
        }
    } else {
        (*t)--;
    }
}

void sub_08031420(u8 *arg0, u8 arg1) {
    u8 *p = arg0;
    u32 t = arg1 << 24;
    u8 v;
    u32 f;

    *(u32 *)(p + 0x88) += 1;
    v = p[0xBA] & 0x3F;
    p[0xBA] = v;
    f = (t & 0x0F000000) >> 24;
    if (f != 0) {
        if (f & 1) {
            p[0xBA] = v | 0x80;
        } else {
            p[0xBA] = v | 0x40;
        }
    }
}
