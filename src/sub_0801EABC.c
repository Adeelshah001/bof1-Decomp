extern u8 D_03002AB0[];
extern u8 D_03004584[];

typedef struct {
    u8 pad00[0x2B];
    s8 unk2B;
} ScriptState1F;

void sub_08023FD8(s32);
void sub_0801DCB0(void);
void sub_08004EA0(s32);
void sub_08072CC4(s32);
void sub_080030D4(void);

void sub_0801EABC(void) {
    sub_08023FD8(0x5C);
    ((ScriptState1F *)D_03004830)->unk2B |= ~0x7F;
}

void sub_0801EADC(void) {
    u8 *state = D_03004830;
    if (--state[0x2C] != 0) {
        sub_0801DCB0();
    } else {
        sub_08004EA0(0x85A6);
        state[0x2B]++;
    }
}

void sub_0801EB18(void) {
    sub_08072CC4(0x5731);
    if (D_03004584[0] != 0) {
        sub_080030D4();
    } else {
        D_03002AB0[0xB8] |= 4;
        sub_08004EA0(0x85A8);
        D_03004830[0x2B]++;
    }
}

void sub_0801EB64(void) {
    sub_08072CC4(0x6530);
    if (D_03004584[0] == 0) {
        D_03004830[0x2B]++;
    }
}
