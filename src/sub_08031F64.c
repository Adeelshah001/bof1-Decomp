void sub_08037FC4(void *arg0, s32 arg1);
void sub_080379D4(s32 arg0);
s32 sub_08037C98(void *arg0, s32 arg1);
void sub_0805561C(u8 arg0);
void sub_0802CCEC(void *arg0);
void sub_080325DC(void);

typedef struct {
    u8 pad0[0xA4];
    u16 unkA4;
} Unk_030023E0;

extern u8 D_030023E0[];

void sub_08031FD0(void *arg0) {
    ((u8 *)arg0)[0x61] = 2;
    ((u8 *)arg0)[0x40] = 0;
    sub_08037FC4(arg0, 0x1A);
    sub_080379D4(0x0B);
    ((u8 *)arg0)[0x50] = 2;
}

void sub_08031F90(void *arg0) {
    u8 *p54;
    u8 v;
    u8 r5;
    void *ptr;

    sub_08037C98(arg0, 0);
    p54 = (u8 *)arg0 + 0x54;
    v = *p54 - 1;
    *p54 = v;
    r5 = v;
    if (r5 == 0) {
        ptr = *(void **)((u8 *)arg0 + 0xA4);
        if (ptr != NULL) {
            sub_0805561C(*(u8 *)((u8 *)ptr + 0x5C));
        }
        *(u8 *)((u8 *)arg0 + 0x4D) = r5;
        *(u16 *)((u8 *)arg0 + 0x50) = (u16)r5;
    }
}

void sub_08031F64(void *arg0) {
    if ((sub_08037C98(arg0, 1) << 0x10) == 0) {
        *(u8 *)((u8 *)arg0 + 0x54) = 0x28;
        *(u8 *)((u8 *)arg0 + 0x50) = 4;
        sub_0802CCEC(arg0);
    }
}

void sub_08031F2C(void *arg0) {
    Unk_030023E0 *s;
    u16 v;

    sub_080325DC();
    s = (Unk_030023E0 *)D_030023E0;
    v = s->unkA4;
    if (v != 0x169 && v != 0x1A8) {
        sub_080379D4(0x2C);
    }
    *(u8 *)((u8 *)arg0 + 0x50) = 2;
}
