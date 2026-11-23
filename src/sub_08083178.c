extern s32 sub_08083014(void *);

extern u16 D_03001864[];
extern u16 D_03001780[];
extern u8 D_0300178C[];
extern u8 D_03003410[];

s32 sub_08083178(Entity *arg0) {
    s32 ret;
    u8 *p = (u8 *)arg0 + 0x61;
    s32 zero = 0;

    *p = (u8)zero;
    p -= 0x0d;
    *p = (u8)zero;
    p += 1;
    *p = (u8)zero;

    ret = sub_08083014(arg0);

    if (ret != 0) {
        *D_03001864 = 0x17;
        *D_03001780 = (u16)zero;
        *D_0300178C = 0;
        *D_03003410 = 0;
    }

    return ret;
}
