extern u16 D_03002508;
void sub_08072CC4(s32);

typedef struct {
    u8 pad00[0x2B];
    u8 unk2B;
    u8 unk2C;
    s8 unk2D;
} ScriptState215;

void sub_080215F8(void) {
    ScriptState215 *s = (ScriptState215 *)D_03004830;
    if (s->unk2D & 1) {
        D_03002508 = 0;
        sub_08072CC4(0x46);
        D_03002508 = 1;
        s->unk2D |= 2;
        s->unk2B++;
    }
}
