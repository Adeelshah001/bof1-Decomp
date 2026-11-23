extern u8 D_03002AB0[];
extern u8 D_03002BD4[];
extern u8 D_03002CF8[];
extern void *sub_0803ED98(void);

void sub_0803374C(void) {
    u8 *p;
    u8 *base = D_03002CF8;
    
    p = base + 0xF0;
    p[0] |= 0x40;
    
    p = base + 0x214;
    p[0] |= 0x40;
    
    p = base + 0x338;
    p[0] |= 0x40;
    
    p = base + 0x45C;
    p[0] |= 0x40;
    
    p = base + 0x580;
    p[0] |= 0x40;
    
    base += 0x6A4;
    base[0] |= 0x40;
}

void sub_080336EC(void) {
    u8 *p;
    u8 *base = D_03002BD4;
    
    p = base + 0xF0;
    p[0] |= 0x40;
    
    p = base + 0x214;
    p[0] |= 0x40;
    
    p = base + 0x338;
    p[0] |= 0x40;
    
    p = base + 0x45C;
    p[0] |= 0x40;
    
    p = base + 0x580;
    p[0] |= 0x40;
    
    p = base + 0x6A4;
    p[0] |= 0x40;
    
    base += 0x7C8;
    base[0] |= 0x40;
}

u8 sub_08033420(void) {
    u8 result = 1;
    u8 i;
    u8 *base = D_03002AB0;
    
    for (i = 3; ; i--) {
        u8 *actor = base + i * 0x124;
        if (actor[0x3A] != 0 && (actor[0xF0] & 0x50) == 0) {
            u16 base_x = *(u16 *)(base + 0x02);
            u16 base_y = *(u16 *)(base + 0x06);
            u16 actor_x = *(u16 *)(actor + 0x02);
            u16 actor_y = *(u16 *)(actor + 0x06);
            if (base_x != actor_x || base_y != actor_y) {
                result = 0;
                break;
            }
        }
        if (i == 0) break;
    }
    
    return result;
}

typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u8 pad08[0x3B - 0x08];
    u8 unk3B;
    u8 unk3C;
    u8 unk3A;
    u8 pad3D[0x88 - 0x3E];
    u32 unk88;
} EntityLocal;

void sub_08034288(EntityLocal *arg0) {
    EntityLocal *slot = sub_0803ED98();
    if (slot != NULL) {
        u8 *p = (u8 *)slot + 0x3B;
        *p = 0x13;
        p++;
        *p = 0x0C;
        p -= 2;
        *p = 0x01;
        slot->unk2 = arg0->unk2;
        slot->unk6 = arg0->unk6;
    }
    slot = sub_0803ED98();
    if (slot != NULL) {
        u8 *p = (u8 *)slot + 0x3B;
        *p = 0x14;
        p++;
        *p = 0x0C;
        p -= 2;
        *p = 0x01;
        slot->unk2 = arg0->unk2;
        slot->unk6 = arg0->unk6;
    }
    arg0->unk88 += 2;
}
