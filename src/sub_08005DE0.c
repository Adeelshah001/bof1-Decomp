void sub_080076DC(void);
void *sub_0803ED98(void);

extern u8 D_03004830[];
extern u8 D_03002510[];
extern u8 *D_03000840;
extern void *D_03000844;
extern u8 D_03000848;

typedef struct {
    u8 pad0[2];
    u16 field_2;
    u8 pad4[2];
    u16 field_6;
    u8 pad8[0x2C - 8];
    u16 field_2C;
} Unk2510;

void sub_08005DE0(void) {
    if ((s8)D_03004830[0x2C] == 0) {
        Unk2510 *base = (Unk2510 *)D_03002510;
        base->field_2 = 0x5F8;
        base->field_6 = 0xB458;
        base->field_2C = 0xB458;
        sub_080076DC();
        D_03004830[0x2C] = 0x50;
        D_03004830[0x2B] += 1;
    }
}

void sub_08006404(u8 arg0) {
    u8 *entity = (u8 *)sub_0803ED98();
    D_03000840 = entity;
    if (entity != NULL) {
        entity[0x3A] = 1;
        D_03000840[0x3C] = 0x0C;
        D_03000840[0x3B] = arg0;
        if (D_03000844 != NULL) {
            D_03000840[0x61] = D_03000848;
            *(u16 *)(D_03000840 + 2) = *(u16 *)((u8 *)D_03000844 + 2);
            *(u16 *)(D_03000840 + 6) = *(u16 *)((u8 *)D_03000844 + 6);
        }
    }
}

void sub_0800652C(void *arg0) {
    void *entity = sub_0803ED98();
    D_03000840 = (u8 *)entity;
    if (entity != NULL) {
        ((u8 *)entity)[0x3B] = 7;
        ((u8 *)D_03000840)[0x3E] = 0;
        ((u8 *)D_03000840)[0x3A] = 1;
        ((u8 *)D_03000840)[0x3C] = 0x12;
        *(void **)((u8 *)entity + 0xD4) = arg0;
    }
    *(u32 *)((u8 *)arg0 + 0x68) += 2;
}
