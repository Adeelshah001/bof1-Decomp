void sub_080A0770(u32);
void sub_08005140(void);
void sub_0803D3B8(s32);

extern u32 D_080F6440[];
extern u32 D_080F6458[];
extern u32 D_080F6478[];

void sub_08010758(void) {
    u32 *table = D_080F6440;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801077C(void) {
    u32 *table = D_080F6458;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_080107A0(void) {
    u32 *table = D_080F6478;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801070C(Entity *arg0) {
    sub_08005140();
    sub_0803D3B8(6);
    D_03004830[0x2A] = 4;
    D_03004830[0x2B] = 0;
    D_03004830[0x2C] = 0x14;
    arg0->unk68 += 2;
}
