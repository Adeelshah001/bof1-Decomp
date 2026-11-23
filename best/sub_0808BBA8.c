extern u8 D_02023C40[];
extern u16 sub_080915D4(void);
extern void sub_08037FC4(void *, u16);
extern void sub_08083300(void *, s32);
extern void sub_0808BB68(void *);
extern void sub_08083484(void *);
extern void sub_0808BEF4(void *, s32);

void sub_0808B984(void *arg0) {
    u8 *obj = (u8 *)arg0;
    u8 *p = obj + 0x54;
    u8 val;
    u8 v2;
    u8 *base = (u8 *)0x02023C40;

    val = *p;
    v2 = val + 1;
    if (v2 == 0xC0) {
        v2 = 0xA0;
    }
    *p = v2;
    *(u16 *)(obj + 6) = (u16)((base[v2] | (base[0x500 + v2] << 8)) + 0x2F48);
}

void sub_0808BA8C(void *arg0) {
    u8 *obj = (u8 *)arg0;
    u16 val = (u16)sub_080915D4();
    u8 *ptr = (u8 *)*(u32 *)(obj + 0x74);
    u8 v;

    sub_08037FC4(obj, val);
    sub_08083300(obj, 0x26);
    ptr[0x55] = 0x20;
    v = obj[0x54];
    ptr[0x54] = v;
    obj[0x4D] = 4;
}

void sub_0808B814(void *arg0) {
    u8 *obj = (u8 *)arg0;
    u8 val;
    u8 r5;
    u8 *ptr;

    val = obj[0x55] - 1;
    obj[0x55] = val;
    if (val != 0) {
        r5 = (val & 1) ? 0xE : 8;
        obj[0x41] = r5;
        sub_0808BB68(obj);
    } else {
        obj[0x41] = 8;
        sub_08083484(obj);
        ptr = (u8 *)*(u32 *)(obj + 0x74);
        *(u16 *)(ptr + 0x14) = (u16)val;
        *(u16 *)(ptr + 0x16) = 0xFC;
        obj[0x4D] = 8;
        sub_0808BB68(obj);
    }
}

void sub_0808BBA8(void *arg0) {
    u8 *obj = (u8 *)arg0;
    u8 orig;
    u8 val;
    u8 r2;

    orig = obj[0x54];
    val = orig - 1;
    obj[0x54] = val;
    if (val != 0) {
        r2 = (orig & 1) ? 0xE : 8;
        sub_0808BEF4(obj, r2);
    } else {
        obj[0xE0] = 6;
        obj[0xE1] = 0x25;
        sub_08083484(obj);
        obj[0x4D] = 0x12;
        sub_0808BEF4(obj, 8);
    }
}
