extern u8 D_030023DC;
extern u8 D_03002AB0[];

void sub_08004EA0(s32);
u8 sub_0801DD60(s32, s32, s32);
void sub_080017EC(s32);
void sub_0801270C(void);
void sub_080A0770(s32);

typedef struct {
    u8 pad00[0x2B];
    s8 unk2B;
    u8 unk2C;
    u8 unk2D;
} ScriptState;

void func_0801E028(void) {
    u32 *table = (u32 *)0x080F7F6C;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801E38C(void) {
    if (D_030023DC != 1) {
        sub_08004EA0(0x852E);
        D_03004830[0x2B]++;
    }
}

void sub_0801E3B8(void) {
    ((ScriptState *)D_03004830)->unk2B |= ~0x7F;
    if (sub_0801DD60(0x163, 0x8530, 0x852F) == 0) {
        D_03002AB0[0xB8] &= 0xFB;
    } else {
        sub_080017EC(0xD9);
        sub_0801270C();
    }
}

void sub_0801E40C(void) {
    ScriptState *s = (ScriptState *)D_03004830;
    s->unk2D = 0;
    sub_08004EA0(0x851F);
    s->unk2B |= ~0x7F;
}
