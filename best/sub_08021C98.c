extern u8 D_0824B768[];
extern u8 D_06003000[];
extern vu32 D_040000D4[];
extern u16 D_03001670;
extern u8 D_03002430[];

typedef struct {
    u8 pad00[0x06];
    u16 unk6;
} Struct2430;

void sub_08021AAC(s32 arg0)
{
    vu32 *dma;
    u32 parity;

    D_040000D4[0] = (u32)(D_0824B768 + arg0 * 0x5000);
    parity = arg0 & 1;
    D_040000D4[1] = (u32)(D_06003000 + (parity << 15));
    dma = D_040000D4;
    dma[2] = 0x80002800;
    dma[2];
    if (parity) {
        D_03001670 = 0x1200;
        return;
    }
    D_03001670 = 0x1100;
}

void sub_08021C98(void)
{
    u8 *state = D_03004830;
    u8 *timer = state + 0x41;
    u8 val = *timer;

    if (val != 0) {
        u32 dec = val - 1;
        *timer = dec;
        if (dec & 1) {
            ((Struct2430 *)D_03002430)->unk6--;
        } else {
            ((Struct2430 *)D_03002430)->unk6++;
        }
    } else {
        state[0x40]++;
        *timer = val;
    }
}
