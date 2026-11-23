typedef struct {
    u8 pad00[2];
    u8 unk02;
    u8 pad03[3];
    u16 unk06;
    u8 pad08[10];
    u8 unk12;
    u8 pad13[3];
    u16 unk16;
    u8 pad18[0x94];
    u16 unkAC;
    u16 unkAE;
} DE04Entity;

extern u8 D_020291C0[];
extern void sub_0804DE7C(void *);

void sub_0804DE04(void *arg0) {
    DE04Entity *e = (DE04Entity *)arg0;
    u16 temp;
    u16 ae_off;
    u16 ac_off;
    u16 sum;
    s16 diff;
    u8 val;

    temp = (u16)(e->unk16 + e->unk06);
    if (temp <= 0x9F) {
        ae_off = (u16)(temp + e->unkAE);
        ac_off = (u16)(temp + e->unkAC);

        sum = e->unk02 + e->unk12;
        if (sum > 0xFF) sum = 0xFF;
        D_020291C0[ae_off + 0x100] = (u8)sum;

        diff = (s16)(e->unk02 - e->unk12);
        val = diff < 0 ? 0 : (u8)diff;
        D_020291C0[ac_off + 0x100] = val;
    }
    sub_0804DE7C(arg0);
}
