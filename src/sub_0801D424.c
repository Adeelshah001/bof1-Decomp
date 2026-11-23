extern void sub_0801D9C0(s32, s32, s32);
extern void sub_0800F820(void);
void *sub_0803ED98(void);
extern void sub_0802FEE0(void);
extern void sub_0800518C(s32, s32, s32);
extern void sub_080A0770(u32);

void sub_0801D424(void) {
    u8 *p = D_03004830;
    u8 *ptr = p + 0x2C;
    if (--(*ptr) == 0) {
        sub_0801D9C0(0x400, 0, -1);
        sub_0801D9C0(0x700, 0, -1);
        *ptr = 0x50;
        p[0x2B]++;
    }
}

void sub_0801D46C(void) {
    u8 *p = D_03004830;
    s8 idx = p[0x2B];
    if (idx < 0) {
        if (p[0x2D] != 0) {
            p[0x2B] = (idx & 0x7F) + 1;
        }
    } else {
        u32 *table = (u32 *)0x080F8038;
        sub_080A0770(table[idx]);
    }
}

void sub_0801D4B8(void) {
    void *ent;
    sub_0800F820();
    ent = sub_0803ED98();
    *(void **)0x03004154 = ent;
    if (ent != NULL) {
        ((u8 *)ent)[0x3A] = 1;
        ((u8 *)ent)[0x3C] = 0xC;
        ((u8 *)ent)[0x3B] = 0x30;
        D_03004830[0x2B]++;
    }
}

void sub_0801D560(void) {
    u8 *p = D_03004830;
    u8 *ptr = p + 0x2C;
    if (--(*ptr) == 0) {
        sub_0802FEE0();
        *(u8 *)(0x03002AB0 + 0xB8) |= 4;
        *(u8 *)0x03003418 |= 0x40;
        sub_0800518C(0x66, 0xF88, 0x2F7C);
        p[0x2B]++;
    }
}
