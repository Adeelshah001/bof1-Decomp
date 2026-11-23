typedef struct {
    u8 pad00[2];
    u16 unk2;
    u8 pad04[0x40];
    u32 unk44;
    u8 pad48[0x1AC - 0x48];
    u32 unk1AC;
} Big2AB0;

extern Big2AB0 D_03002AB0;
extern u8 D_030033F0[];
extern u8 D_03004154[];

void sub_08040A74(s32);
void sub_08017DB8(s32, s32);
void sub_0803ADA8(s32);
s32 Entity_FindFreeSlot(void);

void sub_0801C118(void) {
    sub_08040A74(6);
    D_030033F0[0] = 1;
    D_03004830[0x2B]++;
}

void sub_0801C13C(void) {
    u8 *state;
    s32 slot = Entity_FindFreeSlot();

    *(s32 *)D_03004154 = slot;
    if (slot != 0) {
        sub_08017DB8(0x6E8, 0xFFFFCD94);
        sub_0803ADA8(0x17);
        state = D_03004830;
        state[0x2C] = 0x8C;
        state[0x2B]++;
    }
}

void sub_0801C0D4(void) {
    D_03002AB0.unk2 = 0x738;
    D_03002AB0.unk44 = (D_03002AB0.unk44 & 0xFF000000) | 0x73800;
    D_03004830[0x2B]++;
}

void sub_0801C17C(void) {
    D_03002AB0.unk1AC++;
    D_03004830[0x2B]++;
}
