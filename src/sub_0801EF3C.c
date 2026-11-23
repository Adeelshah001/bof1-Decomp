extern u8 D_03004584[];
extern void sub_08004EA0(s32);
extern void sub_080017EC(s32);
extern void sub_0801270C(void);
extern void sub_08072CC4(s32);

typedef struct {
    u8 pad0[0x2A];
    u8 unk2A;
    s8 unk2B;
    u8 unk2C;
    u8 pad3;
    s8 unk2D;
} ScriptState;

void sub_0801EFB8(void) {
    ScriptState *s = (ScriptState *)D_03004830;
    s->unk2D = 0x10;
    s->unk2B |= ~0x7F;
}

void sub_0801EF94(void) {
    ScriptState *s = (ScriptState *)D_03004830;
    sub_08004EA0(0x85B4);
    s->unk2B = 0;
    s->unk2A = 0;
}

void sub_0801EF64(void) {
    ScriptState *s = (ScriptState *)D_03004830;
    u8 temp = s->unk2C - 1;
    s->unk2C = temp;
    if ((temp << 24) == 0) {
        sub_080017EC(0xC9);
        sub_08004EA0(0x85B3);
        sub_0801270C();
    }
}

void sub_0801EF3C(void) {
    sub_08072CC4(0x5829);
    if (D_03004584[0] == 0) {
        ((ScriptState *)D_03004830)->unk2C = 0x10;
    }
}
