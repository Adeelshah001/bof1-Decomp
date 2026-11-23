extern const u8 D_080A669C[];

void sub_08050528(void);
void sub_080A0A68(void *, const void *, u32);
void sub_08048284(void *, s32, u8, s32);
void sub_08050954(Entity *);
void sub_08050970(void *);

struct Unk505F0 {
    u8 pad00[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    s16 unk16;
    u8 pad18[0x44 - 0x18];
    u32 unk44;
    u32 unk48;
};

void sub_08050508(void *arg0)
{
    u8 *p = *(u8 **)((u8 *)arg0 + 0xD4) + 0x6D;
    *p = (*p & 0xFC) | 2;
    sub_08050528();
}

void sub_080505F0(struct Unk505F0 *arg0, u8 arg1)
{
    arg0->unk16 = arg1;
    arg0->unk14 = 0;
    arg0->unk12 = 0;
    arg0->unk10 = 0;
    arg0->unk44 &= 0xFF000000;
    arg0->unk48 = (arg0->unk48 & 0xFF000000) | 0x3000;
}

void sub_08050748(Entity *arg0)
{
    u8 arr[4];
    u8 r1;
    u8 r2;
    s32 r0;
    void (*fn)(Entity *);

    sub_080A0A68(arr, D_080A669C, 4);
    r1 = arg0->unk3B;
    r2 = r1 >> 3;
    r0 = 3;
    r0 &= r1;
    arg0->unk3B = r0;
    fn = sub_08050954;
    arg0->unk64 = (u32)fn;
    arg0->unk2A = 0x184;
    sub_08048284(arg0, 2, arr[r2], 1);
    fn(arg0);
}

void sub_08050798(void *arg0)
{
    u8 *p = (u8 *)arg0;
    *(u16 *)(p + 0x54) = 0x102;
    p[0x61] = 0x18;
    p[0x3B] = 0;
    sub_08050970(arg0);
}
