/* sub_080002EC */
typedef struct {
    u8 unk0;
    u8 unk1;
    u8 pad2[6];
    u8 entry_byte[5];
    u8 pad_entry[5][7];
    u32 entry_word[5];
} Struct_080002EC;

extern void sub_0800033C(void *);
extern void sub_08000D08(void);
extern void sub_080A0774(u8 *, u32);

void sub_080002EC(Struct_080002EC *arg0) {
    while (1) {
        arg0->unk1 = 0;
        do {
            u8 *byte_ptr = &arg0->entry_byte[arg0->unk1];
            u8 val = *byte_ptr;
            if (val == 3) {
                *byte_ptr = 4;
            } else if (val == 4) {
                sub_080A0774(byte_ptr, arg0->entry_word[arg0->unk1]);
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

void sub_080008B8(void) {
    u8 flag;
    s8 state;
    u8 val;
    vu32 *dma3;
    u32 src;

    flag = D_0300169C[0];
    if (flag == 0) {
        state = (s8)D_03004830[0x2A];
        if (state != 0x20 && state != 0x17 && state != 0x1D) {
            D_03004E94[0] = 0;
        }
        if (D_03004E94[1] != 0) {
            dma3 = (vu32 *)0x040000D4;
            src = 0x020127A0;
            dma3[0] = src;
            dma3[1] = src + 0xFFFFF600;
            dma3[2] = 0x08000500;
            *(vu16 *)0x04000200 = 0x2003;
            *(vu16 *)0x04000004 = 0x18;
            val = D_03004E94[1];
            D_03004E94[0] = val;
            D_03004E94[1] = 0;
        }
    }
}

/* sub_08000D1C */
extern void sub_08000F08(void);
extern void sub_08000F40(void);

void sub_08000D1C(u8 arg0) {
    u32 val = *(u32 *)(0x080F3F00 + arg0 * 4);
    *(u32 *)0x0300176C = val;
    if (arg0 == 0) {
        *(u32 *)0x03001730 = (u32)sub_08000F08;
    } else {
        *(u32 *)0x03001730 = (u32)sub_08000F40;
    }
}

/* sub_0800224C */
u8 sub_080021E4(s32);

u8 sub_0800224C(void) {
    u8 result = sub_080021E4(4);
    if ((result & 2) == 0) return result;
    if ((result & 1) == 0) return result;
    result = sub_080021E4(1);
    if ((result & 2) == 0) return result;
    if ((result & 1) == 0) return result;
    result = sub_080021E4(3);
    return result;
}
