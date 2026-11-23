void sub_0807CF2C(void *);
void sub_0807D2E4(void *);
void sub_0807D3E4(void *);
void sub_0807CA34(void *);
extern u8 D_03004F30[];

void sub_0807D2AC(void *arg0) {
    u8 *p54 = (u8 *)arg0 + 0x54;
    u8 t = *p54 - 1;
    *p54 = t;
    if (t) {
        u8 *p3c = (u8 *)arg0 + 0x3C;
        if (*p3c == 0x32) {
            sub_0807D2E4(arg0);
        } else {
            sub_0807D3E4(arg0);
        }
    } else {
        sub_0807CF2C(arg0);
    }
}

void sub_0807D3A8(void *arg0) {
    Entity *e = arg0;
    Entity *parent = (Entity *)(u32)e->unk78;
    if (parent->unk4D == 0) {
        sub_0807CF2C(e);
    } else {
        u8 *p = (u8 *)e + 0x41;
        *p = parent->unk41;
        *(u8 *)(p - 0x15) = *(u8 *)((u8 *)parent + 0x2C) + 1;
        sub_0807D2E4(e);
    }
}

void sub_0807D260(void *arg0) {
    u8 *p54 = (u8 *)arg0 + 0x54;
    u8 t = *p54 - 1;
    *p54 = t;
    if (t) {
        if ((t & 1) && !(D_03004F30[9] & 0xA0) && !(*(u8 *)((u8 *)arg0 + 0xF1) & 0x80)) {
            sub_0807CA34(arg0);
        }
    } else {
        sub_0807CF2C(arg0);
    }
}

s32 sub_0807D148(void *arg0) {
    Entity *e = arg0;
    Entity *parent = (Entity *)(u32)e->unk78;
    u16 threshold = 0x15;
    u16 diff;
    if (*(u8 *)((u8 *)arg0 + 0x3C) == 0x13) {
        threshold = 0x18;
    }
    diff = parent->unk6 - e->unk6;
    if (parent->unk6 >= e->unk6) {
        // skip negation
    } else {
        diff = (u16)(~diff + 1);
    }
    if ((u16)diff >= threshold) {
        return 1;
    }
    return 0;
}
