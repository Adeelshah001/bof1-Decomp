extern u8 D_03003F94;
extern u8 D_030045B0[];

void sub_08054ED8(void *);
void sub_080550D4(void *);
s32 sub_08037C98(void *, s32);
s32 sub_08037ED4(void *, u16, u16);
void sub_0803824C(void *, void *, u16, u8);

typedef struct {
    s32 unk0;
    s32 unk4;
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
    s32 unk10;
    s32 unk14;
    u8 pad18[0x2C - 0x18];
    u16 unk2C;
    u8 pad2E[0x46 - 0x2E];
    u16 unk46;
    u8 pad48[0x4A - 0x48];
    u16 unk4A;
    u8 pad4C[0x6F - 0x4C];
    u8 unk6F;
    u8 pad70[0x72 - 0x70];
    u8 unk72;
    u8 pad73[0x7C - 0x73];
    void (*unk7C)(void *);
} Entity550;

u8 sub_08055100(Entity550 *arg0);

void sub_08055058(Entity550 *arg0) {
    u8 *p;
    s32 angle;
    if (sub_08055100(arg0) != 0) {
        angle = sub_08037ED4(arg0, arg0->unk46, arg0->unk4A);
        p = &arg0->unk6F;
        *p = (angle - D_03003F94) & 0x1F;
        sub_0803824C(arg0, &arg0->unk4, D_030045B0[0x45] | (D_030045B0[0x46] << 8), *p);
    }
}

void sub_08054FF8(Entity550 *arg0) {
    sub_08037C98(arg0, 0);
    if (arg0->unk10 != 0) {
        arg0->unk0 += arg0->unk10;
        if (*(u16 *)((u8 *)arg0 + 2) == arg0->unkA) {
            goto step;
        }
        goto done;
    }
    arg0->unk4 += arg0->unk14;
    if ((u16)(arg0->unk2C = *(u16 *)((u8 *)arg0 + 6)) == arg0->unkE) {
step:
        if (--arg0->unk72 != 0) {
            sub_080550D4(arg0);
        } else {
            arg0->unk7C = sub_08054ED8;
        }
done:
        arg0->unk2C = *(u16 *)((u8 *)arg0 + 6);
    }
}
