/* identical to sub_08087030 (matched), with its names changed by decompdecomp */
void sub_0807B27C(Entity *arg0);
s32 sub_08003104(void);
void sub_08084C9C(void);
void sub_0808709C(u8 *arg0);
void sub_080870A8(u8 *arg0);
void sub_0807B248(u8 *arg0);
void sub_08086FE0(u8 *arg0);
void sub_08086FEC(u8 *arg0);
void sub_08087004(u8 *arg0, s32 arg1);
extern u8 D_03004F50[];
extern u8 D_08152998[];

void sub_08087E0C(Entity *arg0, s8 arg1) {
    arg0->unk41 = arg1;
    sub_0807B27C(arg0);
}
void sub_0808704C(u8 *arg0) {
    u8 flags;
    if (arg0[0xE0] == 8) {
        flags = arg0[0xE3];
        if (!(flags & 0x80) && (flags & 0x7F) != 0x2B &&
            (u32)(sub_08003104() & 7) <= 3) {
            sub_080870A8(arg0);
            return;
        }
    }
    sub_08084C9C();
    arg0[0x4C] = 0xC;
    sub_0808709C(arg0);
}
void sub_080870A8(u8 *arg0) {
    u8 *state = D_03004F50;
    u16 index;
    *(u16 *)(state + 0x40) = 0;
    index = 0;
    while (D_08152998[index] != arg0[2])
        index += 2;
    arg0[0x55] = index;
    arg0[0x4C] = 0xE;
    arg0[0x54] = 0x18;
    sub_0807B248(arg0);
}
void sub_08086FA4(u8 *arg0) {
    arg0[0xE0] = 6;
    switch (arg0[0xE1]) {
    case 1:
        sub_08086FE0(arg0);
        break;
    case 2:
        sub_08086FEC(arg0);
        break;
    default:
        arg0[0xE0] = 8;
        sub_08087004(arg0, 1);
        break;
    }
}
