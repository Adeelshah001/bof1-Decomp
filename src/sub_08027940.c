typedef struct {
    u16 unk0;
    u16 unk2;
    void (*unk4)(void);
} Struct_08027830;

extern u16 D_03002484;

void sub_08027830(Struct_08027830 *arg0) {
    while (arg0->unk0 != 0x8000) {
        if (arg0->unk0 == D_03002484) {
            arg0->unk4();
            break;
        }
        arg0++;
    }
}

extern u16 D_03004E08;
extern u16 D_03004E0C;
extern u16 D_03004E18;
void sub_0803D510(void);
void sub_080275F4(void);

void sub_08027860(void) {
    u8 *state = D_03004830;
    s32 zero = 0;

    state[0x41] = 0x10;
    D_03004E18 = zero;
    D_03004E08 = 0x7F01;
    D_03004E0C = 0x68A5;
    sub_0803D510();
    state[0x42] = zero;
    state[0x40]++;
    sub_080275F4();
}

typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0xB8 - 0x08];
    u8 unkB8;
} Struct_03002AB0;

extern u8 D_03002AB0[];
extern u16 D_03004114;

u16 sub_080278E0(Struct_08027830 *arg0) {
    D_03004114 = 0;
    while (!(arg0->unk0 & 0x8000)) {
        if (arg0->unk0 == ((Struct_03002AB0 *)D_03002AB0)->unk2 &&
            arg0->unk2 == ((Struct_03002AB0 *)D_03002AB0)->unk6) {
            arg0->unk4();
            return D_03004114;
        }
        arg0++;
    }
    return 0;
}

u8 *sub_0803ED98(void);

void sub_08027940(s32 arg0) {
    u8 *object = sub_0803ED98();
    if (object != NULL) {
        object[0x3A] = 1;
        object[0x3C] = 0x15;
        object[0x3B] = 9;
        *(s32 *)(object + 0xD4) = arg0;
        ((Struct_03002AB0 *)D_03002AB0)->unkB8 |= 4;
    }
}
