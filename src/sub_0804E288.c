/* identical to sub_080137E8 (matched), with its names changed by decompdecomp */
void sub_0804E090(void *arg0, s32 arg1);
void sub_0804E090(void *arg0, s32 arg1);
void sub_080075A4(u16 arg0);

typedef struct {
    u8 pad[0x68];
    s32 unk68;
} PlayerStruct;

void sub_080137DC(void *arg0) {
    sub_0804E090(arg0, 0);
}

void sub_0804E288(void *arg0) {
    sub_0804E090(arg0, 1);
}

void sub_080137C4(PlayerStruct *arg0, u16 arg1) {
    sub_080075A4(arg1);
    arg0->unk68 += 2;
}

void sub_080137F4(void *arg0) {
    sub_0804E090(arg0, 2);
}
