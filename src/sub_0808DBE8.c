extern u8 D_03004F50[];
void sub_0808DC14(s32);
void sub_0808DC20(s32);
void sub_080379D4(s32);
void sub_08037FC4(void *, s32);
void sub_0803815C(void *, void *);
void sub_08038278(void *);
void sub_0807C600(void *, s32);
void sub_08083BB4(void *);
void sub_0807C484(void *);
s32 sub_0807CE30(void *);
void sub_0807CB08(void);
s32 sub_08083300(void *, s32);

void sub_0808DBE8(s32 arg0) {
    if (D_03004F50[0x5F] & 0x40) {
        sub_0808DC20(arg0);
    } else {
        sub_0808DC14(arg0);
    }
}

void sub_0808DC94(void *arg0) {
    u8 *p;
    u8 *q;
    u8 v;

    p = (u8 *)arg0 + 0x54;
    v = *p - 1;
    *p = v;
    if (v == 0) {
        sub_080379D4(0x18);
        sub_08037FC4(arg0, 0x10);
        q = (u8 *)arg0 + 0x4D;
        *q = *q + 1;
    }
}

void sub_0808DB08(void *arg0) {
    void *unk78;
    u16 v;

    unk78 = *(void **)((u8 *)arg0 + 0x78);
    sub_0803815C(arg0, unk78);
    sub_08038278(arg0);
    *(u16 *)((u8 *)arg0 + 0x2C) = *(u16 *)((u8 *)arg0 + 6);
    if ((u8)((u8 *)unk78)[2] - 4 < (u8)*(u8 *)((u8 *)arg0 + 2)) {
        sub_08083BB4(arg0);
        v = *(u16 *)((u8 *)arg0 + 0xE4);
        *(u16 *)((u8 *)arg0 + 2) = v;
        v = *(u16 *)((u8 *)arg0 + 0xE6);
        *(u16 *)((u8 *)arg0 + 6) = v;
        *(u16 *)((u8 *)arg0 + 0x2C) = v;
        sub_0807C600(arg0, 2);
    }
}

void sub_0808DD50(void *arg0) {
    if (*(u8 *)((u8 *)arg0 + 0xE0) == 0xA) {
        *(u8 *)((u8 *)arg0 + 0xE1) = 0x1D;
        if (sub_0807CE30(arg0) == 0) {
            sub_0807CB08();
            *(u8 *)((u8 *)arg0 + 0x54) = 0x3C;
            *(u8 *)((u8 *)arg0 + 0x4D) = 8;
            return;
        }
    }
    sub_0807C484(arg0);
    sub_08083300(arg0, 0x44);
    *(u32 *)(*(u32 *)((u8 *)arg0 + 0x74) + 0x78) = *(u32 *)((u8 *)arg0 + 0x78);
    *(u8 *)((u8 *)arg0 + 0x4D) = 4;
}
