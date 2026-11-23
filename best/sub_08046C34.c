extern u8 D_080A6638[];

s32 sub_08046BBC(void *);
void sub_08046D00(void *);
void sub_080A0AC8(void *, s32, s32);
void sub_080A0A68(void *, const void *, s32);
void sub_08037FC4(void *, u8);
void sub_0803A8EC(void *);
extern void sub_0804749C(void);

typedef struct {
    u8 pad00[0x40];
    u8 unk40;
    u8 pad41[0x61 - 0x41];
    u8 unk61;
    u8 pad62[0x64 - 0x62];
    u32 unk64;
} EntityLocal;

void sub_08046C34(void *arg0) {
    u8 buf[8];
    EntityLocal *e = arg0;

    e->unk61 = (u8)((e->unk61 + 2) & 3);
    if (((s32)sub_08046BBC(arg0) << 24) == 0) {
        sub_08046D00(arg0);
    } else {
        sub_080A0AC8(buf, 0, 4);
        buf[1] = 1;
        sub_080A0A68(buf + 4, D_080A6638, 4);
        e->unk40 = buf[e->unk61];
        sub_08037FC4(arg0, buf[4 + e->unk61]);
        e->unk64 = (u32)sub_0804749C;
    }
    sub_0803A8EC(arg0);
}
