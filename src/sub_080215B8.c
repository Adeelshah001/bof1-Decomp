extern u8 D_03002AB0[];
extern u8 D_0824B768[];
extern u8 D_06003000[];
extern vu32 D_040000D4[];
extern u16 D_03001670;
extern u8 D_03002430[];

void sub_0800518C(s16, s16, s16);

typedef struct {
    u8 pad00[0x3C];
    u8 unk3C;
} Struct2AB0_15B8;

typedef struct {
    u8 pad00[0x06];
    u16 unk6;
} Struct2430;

void sub_080215B8(void)
{
    u8 zero;
    u8 *state;

    ((Struct2AB0_15B8 *)D_03002AB0)->unk3C = 1;
    zero = 0;
    sub_0800518C(0x36, 0x1B58, 0x437C);
    state = D_03004830;
    state[0x2C] = zero;
    state[0x2D] = zero;
    state[0x2B]++;
}

void sub_08021AAC(s32 arg0)
{
    u32 src = (u32)(D_0824B768 + arg0 * 0x5000);
    u32 parity = arg0 & 1;
    u32 dst = (u32)(D_06003000 + (parity << 15));
    vu32 *dma = D_040000D4;

    dma[0] = src;
    dma[1] = dst;
    dma[2] = 0x80002800;
    dma[2];
    if (parity != 0) {
        D_03001670 = 0x1200;
    } else {
        D_03001670 = 0x1100;
    }
}

void sub_08021C98(void)
{
    u8 *state = D_03004830;
    u8 *timer = state + 0x41;
    u32 val = *timer;

    if (val != 0) {
        val--;
        *timer = val;
        if (val & 1) {
            ((Struct2430 *)D_03002430)->unk6--;
        } else {
            ((Struct2430 *)D_03002430)->unk6++;
        }
    } else {
        state[0x40]++;
        *timer = val;
    }
}
