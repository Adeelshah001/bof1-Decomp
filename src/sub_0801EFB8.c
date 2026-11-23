extern void sub_08004EA0(s32);
extern void sub_080017EC(s32);
extern void sub_0801270C(void);

typedef struct {
    u8 pad0[0x2A];
    u8 unk2A;
    s8 unk2B;
    u8 pad2C;
    s8 unk2D;
} ScriptState;

void sub_0801EFB8(void) {
    ((ScriptState *)D_03004830)->unk2D = 0x10;
    ((ScriptState *)D_03004830)->unk2B |= ~0x7F;
}

void sub_0801EF64(void) {
    u8 val = D_03004830[0x2C] - 1;
    D_03004830[0x2C] = val;
    if ((s8)val >= 0) {
        sub_080017EC(0xC9);
        sub_08004EA0(0x85B3);
        sub_0801270C();
    }
}
