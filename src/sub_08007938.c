void sub_080A0770(u32);

extern u32 D_080F5C1C[];
extern u32 D_080F5C6C[];
extern u32 D_080F5C7C[];

void sub_08007914(void) {
    u32 *table = D_080F5C1C;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_08007938(void) {
    u32 *table = D_080F5C6C;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0800795C(void) {
    u32 *table = D_080F5C7C;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

extern u8 D_03002AB0[];
void sub_080587D8(void);

void sub_08007980(void) {
    u8 *base = D_03004830;
    s8 *state = (s8 *)(base + 0x2C);

    if (*state == 0) {
        u8 *p2AB0;
        (*(base + 0x2B))++;
        p2AB0 = D_03002AB0;
        *(s32 *)(p2AB0 + 0x94) = 0x8000;
        D_030023D0[0] = 2;
        *state = 0x40;
    } else if (*state == 0x7E) {
        sub_080587D8();
    }
}
