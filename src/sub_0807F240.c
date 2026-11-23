extern const u8 D_080A6870[];
void sub_08037FC4(void *, u8);
void sub_080A0A68(void *, const void *, u32);
void sub_080A0AC8(void *, s32, u32);
void sub_080017EC(s32);

typedef struct {
    u8 pad00[2];
    u16 unk02;
    u8 pad04[2];
    u16 unk06;
    u8 pad08[0x40 - 0x08];
    u8 unk40;
} Unk03003420;

static inline void init_helper(Unk03003420 *ptr, u8 idx) {
    u8 states[4];
    u8 directions[4];
    u8 *initial = states;
    sub_080A0AC8(states, 0, 4);
    initial[1] = 1;
    sub_080A0A68(directions, D_080A6870, 4);
    ptr->unk40 = states[idx];
    sub_08037FC4(ptr, directions[idx]);
}

void sub_0807F240(void) {
    Unk03003420 *ptr = (Unk03003420 *)D_03003420;
    ptr->unk02 = 0x11B8;
    ptr->unk06 = 0x4C2C;
    init_helper(ptr, 3);
}

void sub_0807F1E0(void) {
    Unk03003420 *ptr = (Unk03003420 *)D_03003420;
    ptr->unk02 = 0x988;
    ptr->unk06 = 0x525C;
    init_helper(ptr, 2);
    sub_080017EC(0x28);
}
