typedef struct {
    u8 pad00[0xF6];
    u16 unkF6;
} State03002AB0;

extern State03002AB0 D_03002AB0;
extern const u8 D_08221D40[];
extern u8 D_0202DDD4[];

void sub_0803E774(u16 *);
void sub_0803F880(u16 *);
s32 sub_0803EC10(void *, u16);

s32 sub_0803F6B0(u16 *arg0) {
    (*arg0)++;
    if (D_03002AB0.unkF6 == 0) {
        sub_0803E774(arg0);
    } else {
        sub_0803F880(arg0);
    }
    return 0;
}

s32 sub_0803F668(u16 *arg0) {
    u8 val;
    (*arg0)++;
    val = D_08221D40[*arg0];
    (*arg0)++;
    if ((u8)sub_0803EC10(D_0202DDD4, val | 0x2100) != 0) {
        sub_0803E774(arg0);
    } else {
        sub_0803F880(arg0);
    }
    return 0;
}

s32 sub_0803F620(u16 *arg0) {
    u8 val;
    (*arg0)++;
    val = D_08221D40[*arg0];
    (*arg0)++;
    if ((u8)sub_0803EC10(D_0202DDD4, val | 0x1100) == 0) {
        sub_0803E774(arg0);
    } else {
        sub_0803F880(arg0);
    }
    return 0;
}
