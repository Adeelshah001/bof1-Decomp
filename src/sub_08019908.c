typedef struct {
    u8 pad00[2];
    u16 unk2;
    u8 pad04[2];
    u16 unk6;
    u8 pad08[0x3A - 0x08];
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
    u8 pad3D[0x41 - 0x3D];
    u8 unk41;
} Entity9758;

extern Entity9758 *D_03004154;
extern s16 D_03004114;

Entity9758 *sub_0803ED98(void);
s8 sub_080100B8(s32, s32);
void sub_080017EC(s32);

void sub_080196D8(Entity *arg0) {
    u8 *pc = (u8 *)arg0->unk68;
    if (pc[2] == D_03004830[0x42]) {
        arg0->unk68 = (u32)(pc + 3);
    }
}

void sub_080196A4(Entity *arg0) {
    u8 *pc = (u8 *)arg0->unk68;
    if (pc[2] == (s8)D_03004830[0x2D]) {
        arg0->unk68 = (u32)(pc + 3);
    }
}

s32 sub_08019758(u8 arg0, u16 arg1, u16 arg2) {
    s32 ret;
    D_03004154 = sub_0803ED98();
    if (D_03004154 != NULL) {
        D_03004154->unk3A = 1;
        D_03004154->unk3B = 0;
        D_03004154->unk3C = 0x17;
        D_03004154->unk41 = arg0;
        D_03004154->unk2 = arg1;
        D_03004154->unk6 = arg2;
        ret = 0;
    } else {
        ret = 1;
    }
    return ret;
}

void sub_08019908(void) {
    s8 val = sub_080100B8(0x16C, 0x40A);
    if (val == 0) {
        D_03004114 = val;
    } else {
        sub_080017EC(0xBE);
        D_03004114 = 0;
    }
}
