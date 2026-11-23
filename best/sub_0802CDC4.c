extern u8 D_030040E4;
extern u8 D_030045B0[];
extern const u8 D_080A6382[];

void sub_080A0AC8(void *, s32, s32);
void sub_080A0A68(void *, const void *, s32);
void sub_08037B84(void *, u8);

typedef struct {
    u8 pad00[0x61];
    u8 unk61;
} StructCDC4;

u32 sub_0802CDC4(StructCDC4 *arg0)
{
    u8 dir = arg0->unk61;

    if (D_030040E4 != 0) {
        dir += D_030045B0[0x25] >> 4;
        dir &= 3;
    }
    return dir;
}

void sub_0802CCEC(void *arg0)
{
    u8 sp0[4];
    u8 sp4[8];
    u8 *p = sp0;
    u8 idx;
    u8 val;

    sub_080A0AC8(p, 0, 4);
    p[1] = 1;
    sub_080A0A68(sp4, D_080A6382, 8);
    idx = sub_0802CDC4(arg0);
    val = p[idx];
    *(u8 *)((u8 *)arg0 + 0x40) = val;
    if (*(u8 *)((u8 *)arg0 + 0xBA) & 9) {
        idx += 4;
    }
    sub_08037B84(arg0, sp4[idx]);
}
