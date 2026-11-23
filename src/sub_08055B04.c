typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x3B - 0x2E];
    u8 unk3B;
    u8 unk3C;
    u8 pad3D[0x46 - 0x3D];
    u16 unk46;
    u8 pad48[0x5C - 0x48];
    u8 unk5C;
    u8 pad5D[0x5F - 0x5D];
    u8 unk5F;
    u8 pad60[0x64 - 0x60];
    u32 unk64;
    u8 pad68[0x6C - 0x68];
    u8 unk6C;
} Entity55;

extern u8 D_030023E0[];
extern u8 D_03003F98;

u8 sub_08055660(u8);
void sub_08037FC4(void *, s32);
s32 sub_0803A8EC(void *);
void sub_08045114(void *);
void sub_080379D4(s32);
u8 sub_08001770(s32);
void sub_080017EC(s32);
s32 sub_08037C98(void *, s32);
void sub_0803EE38(void *);
void sub_08055A64(void *);
void sub_08055B54(void *);

void sub_08055B04(Entity55 *arg0) {
    if (sub_08055660(arg0->unk5C) != 0) {
        u8 *scene;
        arg0->unk64 = (u32)sub_08045114;
        arg0->unk6C++;
        arg0->unk5F = 0x10;
        scene = D_030023E0;
        scene += 0xA4;
        if (*(u16 *)scene != 0x91) {
            sub_080379D4(0x14);
        }
        arg0->unk2C -= 4;
    }
    sub_0803A8EC(arg0);
}

void sub_08055934(Entity55 *arg0) {
    if (sub_08001770(0x98) == 0) {
        sub_08037FC4(arg0, 4);
        arg0->unk3C = 0x85;
        arg0->unk64 = (u32)sub_08055A64;
        sub_08037C98(arg0, 0);
        if (D_03003F98 & 0x80) {
            sub_080017EC(0x98);
            goto destroy;
        }
        sub_0803A8EC(arg0);
        return;
    }
destroy:
    sub_0803EE38(arg0);
}

void sub_080557E4(Entity55 *arg0) {
    Entity55 *e = arg0;
    u32 val;
    if (arg0->unk3B == 8) {
        val = arg0->unk2 + 0xD;
    } else {
        val = arg0->unk2 - 0xD;
    }
    arg0->unk2 = val;
    arg0->unk46 = val;
    e->unk64 = (u32)sub_08055B54;
    sub_08037FC4(e, 0xE);
    sub_0803A8EC(arg0);
}
