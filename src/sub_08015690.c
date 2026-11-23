extern u8 D_03002BD4[];
extern u8 D_0300166C;
extern u8 D_03001674;
extern u8 D_03001698;
extern u8 D_030016A4;
extern u8 D_030023DC;
extern u8 D_03004154[];
extern u8 D_03004584;
extern u8 D_03002AB0[];
extern u8 D_03004830[];

void sub_080075A4(u16);
void sub_08033B88(void *, s32);
void sub_080074C4(void);
void sub_0800518C(s32, s32, s32);
void *sub_0803ED98(void);
void sub_0803ADDC(s32, s32);
void sub_08072CC4(s32);

void sub_08015EC4(Entity *entity) {
    sub_080075A4(0x83AA);
    sub_08033B88(D_03002BD4, 3);
    (*(u32 *)(D_03002BD4 - 0x9C))++;
    sub_080074C4();
    entity->unk68 += 2;
}

void sub_08015690(void) {
    if (D_030023DC != 1) {
        sub_0800518C(0x11E, 0x188, 0xFFFFE3DC);
        D_03001698 = 8;
        D_03001674 = 8;
        D_0300166C = 0x20;
        D_030016A4 = 0x20;
        D_03004830[0x2B]++;
    }
}

void sub_08016B90(void) {
    void *entity;
    
    sub_0803ADDC(0xE8, 0xFFFF);
    entity = sub_0803ED98();
    *(void **)D_03004154 = entity;
    ((u8 *)entity)[0x3A] = 1;
    ((u8 *)entity)[0x3C] = 6;
    ((u8 *)entity)[0x41] = 8;
    
    *(u16 *)((u8 *)entity + 2) = *(u16 *)(D_03002AB0 + 2);
    *(u16 *)((u8 *)entity + 6) = *(u16 *)(D_03002AB0 + 6);
    *(u16 *)((u8 *)entity + 0x2C) = *(u16 *)(D_03002AB0 + 6) + 0x10;
    
    D_03004830[0x2C] = 0x1E;
    D_03004830[0x2B]++;
}

void sub_08016D74(void) {
    u8 temp = D_03004830[0x2B];
    
    if (temp & 1) {
        if (temp == 3) {
            D_03002AB0[0xB8] &= 0xFB;
            D_03004830[0x2A] = 0;
            D_03004830[0x2B] = 0;
            return;
        }
        sub_08072CC4(0x3C1C);
        if (D_03004584 == 0) {
            D_03004830[0x2B]++;
        }
    }
}
