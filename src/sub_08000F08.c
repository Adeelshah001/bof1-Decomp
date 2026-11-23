/* sub_080002EC */
typedef struct {
    u8 unk0;
    u8 unk1;
    u8 unk2[6];
    u16 unk8[5];
    u32 unk10[5];
} Struct_080002EC;

extern void sub_0800033C(void *);
extern void sub_08000D08(void);
extern void sub_080A0774(u8 *, u32);

void sub_080002EC(Struct_080002EC *arg0) {
    while (1) {
        arg0->unk1 = 0;
        do {
            u32 idx = arg0->unk1 * 12;
            u8 *ptr = (u8 *)arg0 + idx + 8;
            u8 val = *ptr;
            if (val == 3) {
                *ptr = 4;
            } else if (val == 4) {
                sub_080A0774(ptr, arg0->unk10[idx / 12]);
            }
            arg0->unk1++;
        } while (arg0->unk1 <= 4);
        sub_08000D08();
        sub_0800033C(arg0);
    }
}

/* sub_080008B8 */
extern u8 D_0300169C[];
extern u8 D_03004830[];
extern u8 D_03004E94[];
extern u32 D_020127A0;

void sub_080008B8(void) {
    u8 flag = D_0300169C[0];
    if (flag == 0) {
        s8 state = (s8)D_03004830[0x2A];
        if (state != 0x20 && state != 0x17 && state != 0x1D) {
            D_03004E94[0] = flag;
        }
        if (D_03004E94[1] != 0) {
            vu32 *dma3 = (vu32 *)0x040000D4;
            dma3[0] = D_020127A0;
            dma3[1] = D_020127A0 + 0xFFFFF600;
            dma3[2] = 0x08000500;
            *(vu16 *)0x04000200 = 0x2003;
            *(vu16 *)0x04000004 = 0x18;
            D_03004E94[0] = D_03004E94[1];
            D_03004E94[1] = 0;
        }
    }
}

/* sub_08000D1C */
extern u32 D_03001730;
extern u32 D_0300176C;
extern u32 D_080F3F00[];
extern void sub_08000F08(void);
extern void sub_08000F40(void);

void sub_08000D1C(u8 arg0) {
    u32 val = D_080F3F00[arg0];
    D_0300176C = val;
    if (arg0 == 0) {
        D_03001730 = (u32)sub_08000F08 | 1;
    } else {
        D_03001730 = (u32)sub_08000F40 | 1;
    }
}

/* sub_08000F08 */
extern u16 D_03007FF8;
extern u16 D_03001778;
extern u8 D_030045B0[];
extern void sub_08000FB8(void);
extern void sub_0809E6BC(void);
extern void sub_0809ED90(void);

void sub_08000F08(void) {
    D_03007FF8 |= 1;
    sub_08000FB8();
    D_03001778 = 0;
    sub_0809E6BC();
    sub_0809ED90();
    D_030045B0[0x5B]++;
}
