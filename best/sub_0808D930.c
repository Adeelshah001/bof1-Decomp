extern u8 D_03004F30[];
extern u8 D_03004F50[];
u16 sub_0807B2BC(void *);
void sub_08037FC4(void *, s32);
void sub_0808DBE8(void *);
s32 sub_0807CE30(void *);
void sub_0807CB08(void);
void sub_0807C484(void *);
s32 sub_08083300(void *, s32);

void sub_0808DD50(void *arg0) {
    u8 *p;
    u8 v;

    if (*(u8 *)((u8 *)arg0 + 0xE0) == 0xA) {
        v = 0x1D;
        p = (u8 *)arg0 + 0xE1;
        *p = v;
        if (sub_0807CE30(arg0) == 0) {
            sub_0807CB08();
            p = (u8 *)arg0 + 0x54;
            v = 0x3C;
            *p = v;
            v = 8;
            p -= 7;
            *p = v;
            return;
        }
    }
    sub_0807C484(arg0);
    sub_08083300(arg0, 0x44);
    *(u32 *)(*(u32 *)((u8 *)arg0 + 0x74) + 0x78) = *(u32 *)((u8 *)arg0 + 0x78);
    v = 4;
    p = (u8 *)arg0 + 0x4D;
    *p = v;
}

void sub_0808D930(void *arg0) {
    *(u8 *)((u8 *)arg0 + 0x40) = 0;
    *(u8 *)((u8 *)arg0 + 0x54) = 0;
    *(u8 *)((u8 *)arg0 + 0x55) = 0;
    *(u16 *)((u8 *)arg0 + 2) = 0xF40;
    *(u16 *)((u8 *)arg0 + 0xE4) = 0xF40;
    *(u16 *)((u8 *)arg0 + 6) = 0x2F38;
    *(u16 *)((u8 *)arg0 + 0x2C) = 0x2F38;
    *(u16 *)((u8 *)arg0 + 0xE6) = 0x2F38;
    *(u16 *)((u8 *)arg0 + 0x106) = 0xDC;
    sub_08037FC4(arg0, 0xA);
    *(u8 *)((u8 *)arg0 + 0x4C) = 2;
}

void sub_0808D8DC(void *arg0) {
    u16 r;
    D_03004F50[0x10] = 0x7F;
    r = sub_0807B2BC(arg0);
    if (r == 0) {
        D_03004F50[0x5F] = 0x11;
        D_03004F50[0x10] = (u8)r;
        D_03004F30[0xC] &= 0xFE;
        *(u8 *)((u8 *)arg0 + 0x4C) = 0;
        *(u8 *)((u8 *)arg0 + 0x4D) = 0;
        *(u8 *)((u8 *)arg0 + 0x50) = 0;
        *(u8 *)((u8 *)arg0 + 0x51) = 0;
        *(u8 *)((u8 *)arg0 + 0x54) = 0;
        *(u8 *)((u8 *)arg0 + 0x55) = 0;
    }
}

void sub_0808D7A0(void *arg0) {
    D_03004F50[0x10] = 0x7F;
    if (((u32)sub_0807B2BC(arg0) << 16) == 0) {
        D_03004F50[0x10] = 0x0F;
        sub_08037FC4(arg0, 0x12);
        if (*(u8 *)((u8 *)arg0 + 0x55) != 0) {
            D_03004F50[0x5F] |= 0x40;
        }
        D_03004F30[0xC] &= 0xFE;
        *(u8 *)((u8 *)arg0 + 0x4D) += 1;
        sub_0808DBE8(arg0);
    }
}
