typedef struct {
    u8 pad00[0xB1];
    u8 unkB1;
} Struct4620;

extern Struct4620 D_03004620;
extern u16 D_030016A8;

u8 sub_0804ECA0(void *arg0) {
    u8 ret = 0;
    u32 cnt = D_03004620.unkB1 + 1;
    D_03004620.unkB1 = cnt;
    if (cnt & 1) {
        u32 lo = D_030016A8 & 0x1F;
        u8 hi = (D_030016A8 >> 8) & 0x1F;
        if (lo <= 0xF) {
            lo++;
        }
        if (hi != 0) {
            hi--;
        } else {
            ret = 1;
        }
        D_030016A8 = (hi << 8) | lo;
    }
    return ret;
}

u8 sub_0804ECF0(void *arg0) {
    u8 ret = 0;
    u32 cnt = D_03004620.unkB1 + 1;
    D_03004620.unkB1 = cnt;
    if (cnt & 1) {
        u8 lo = D_030016A8 & 0x1F;
        u32 hi = (D_030016A8 >> 8) & 0x1F;
        if (hi <= 0xF) {
            hi++;
        }
        if (lo != 0) {
            lo--;
        } else {
            ret = 1;
        }
        D_030016A8 = (hi << 8) | lo;
    }
    return ret;
}
