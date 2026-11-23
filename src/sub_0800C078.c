extern u16 D_03001680;
extern u8 D_03004830[];
extern u8 D_03002AB0[];
extern u8 D_03004154[];

void sub_080379D4(s32 arg0);
void sub_08004EA0(s32 arg0);
void sub_0800C718(void);
void *sub_0803ED98(void);

/* sub_0800C130 - best attempt with inline casts */
void sub_0800C130(void) {
    D_03001680 += 2;
    if (--((struct { u8 pad[0x2D]; s8 unk2D; u8 unk2B; s8 unk2C; } *)D_03004830)->unk2D == 0) {
        ((struct { u8 pad[0x2B]; u8 unk2B; } *)D_03004830)->unk2B++;
    } else {
        ((struct { u8 pad[0x2B]; u8 unk2B; } *)D_03004830)->unk2B--;
        ((struct { u8 pad[0x2C]; s8 unk2C; } *)D_03004830)->unk2C = 0x40;
    }
}

/* sub_0800C078 - use s32 for sign-extended value kept in callee-saved reg */
void sub_0800C078(void) {
    s32 temp = --((struct { u8 pad[0x2C]; s8 unk2C; u8 unk2A; } *)D_03004830)->unk2C;
    if (temp == 0) {
        D_03002AB0[0x185] = 2;
        D_03002AB0[0x2A9] = 2;
        D_03002AB0[0xB8] &= 0xFB;
        sub_080379D4(0xF1);
        ((struct { u8 pad[0x2A]; u8 unk2A; } *)D_03004830)->unk2A = temp;
    }
}

/* sub_0800C024 */
void sub_0800C024(void) {
    u8 *base = D_03002AB0;
    s8 val = ((struct { u8 pad[0x2B]; u8 unk2B; } *)D_03004830)->unk2B;
    if (val == 1) {
        sub_0800C718();
        return;
    }
    if (val == 2) {
        sub_0800C078();
        return;
    }
    ((struct { u8 pad[0x2C]; s8 unk2C; } *)D_03004830)->unk2C = 0x1E;
    ((struct { u8 pad[0x2B]; u8 unk2B; } *)D_03004830)->unk2B = val + 1;
    base[0xB8] |= 4;
    sub_08004EA0(0x8190);
    sub_0800C718();
}

/* sub_0800BFDC */
void sub_0800BFDC(u16 arg0) {
    u16 r4 = arg0;
    void *ptr = sub_0803ED98();
    *(void **)D_03004154 = ptr;
    ((u8 *)ptr)[0x3A] = 1;
    ((u8 *)ptr)[0x54] = 1;
    ((u16 *)ptr)[1] = 0xF90;
    ((u16 *)ptr)[3] = r4;
    ((u16 *)ptr)[0x16] = r4;
    ((u8 *)ptr)[0x3C] = 0xE;
    ((u8 *)ptr)[0x61] = 0x10;
    ((u8 *)ptr)[0x41] = 0xE;
}
