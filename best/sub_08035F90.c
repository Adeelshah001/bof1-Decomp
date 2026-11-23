extern u8 D_03002AB0[];
extern u8 D_03002BD4[];
extern u8 D_03002CF8[];
extern u8 D_0300088C[];
extern u8 D_03000890[];
extern u8 D_03002490[];
extern void *sub_0803ED98(void);

void sub_0803374C(void) {
    u8 *base = D_03002CF8;
    u8 *p;
    
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
}

void sub_080336EC(void) {
    u8 *base = D_03002BD4;
    u8 *p;
    u8 i;
    
    for (i = 0; i < 7; i++) {
        p = base + 0xF0 + i * 0x124;
        p[0] |= 0x40;
    }
}

u8 sub_08033420(void) {
    u8 result = 1;
    u8 i = 3;
    u8 *base = D_03002AB0;
    
    while (1) {
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
        i--;
    }
    
    return result;
}

typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u8 pad08[0x3A - 0x08];
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
    u8 pad3D[0x88 - 0x3D];
    u32 unk88;
} EntityLocal;

void sub_080342E8(EntityLocal *arg0) {
    EntityLocal *slot = sub_0803ED98();
    if (slot != NULL) {
        slot->unk3B = 0x15;
        slot->unk3C = 0x0C;
        slot->unk3A = 0x01;
        slot->unk2 = arg0->unk2;
        slot->unk6 = arg0->unk6;
    }
    slot = sub_0803ED98();
    if (slot != NULL) {
        slot->unk3B = 0x16;
        slot->unk3C = 0x0C;
        slot->unk3A = 0x01;
        slot->unk2 = arg0->unk2;
        slot->unk6 = arg0->unk6;
    }
    arg0->unk88 += 2;
}

void sub_08035F90(u8 arg0) {
    u8 sp0 = 1;
    u8 result = 0xFF;
    u8 *var_r2 = &sp0;
    u8 temp_r3 = arg0;
    
    while (1) {
        u8 *temp_r1 = (u8 *)(0x03002490 + *var_r2 * 0x1C);
        if (temp_r1[0x11] == temp_r3) {
            temp_r1[0x18] = 1;
            result = 0;
            break;
        } else {
            (*var_r2)++;
            if (*var_r2 <= 3) {
                continue;
            }
            break;
        }
    }
    
    if (result == 0xFF) {
        D_0300088C[D_03000890[0]] = temp_r3;
        D_03000890[0]++;
    }
}
