extern u32 D_03002AB0[];
extern u8 D_03004830[];
extern u8 *Entity_FindFreeSlot(void);
extern void sub_0804D220(void);

void sub_0804CE48(void *arg0) {
    if (D_03002AB0[0x22] == 0) {
        *(u16 *)((u8 *)arg0 + 0xA6) += 2;
    }
}

void sub_0804CE7C(void *arg0) {
    u16 v = *(u16 *)((u8 *)arg0 + 0x24);
    if (v == 0) {
        *(void (**)(void))((u8 *)arg0 + 0x64) = sub_0804D220;
        *(u8 *)((u8 *)arg0 + 0x54) = (u8)v;
        *(u16 *)((u8 *)arg0 + 0xA6) += 2;
    }
}

void sub_0804CDC4(void *arg0) {
    u8 *ent = Entity_FindFreeSlot();
    if (ent != NULL) {
        ent[0x3B] = 0xB;
        ent[0x3C] = 0xC;
        ent[0x3A] = 1;
    }
    *(u16 *)((u8 *)arg0 + 0xA6) += 2;
}

void sub_0804CED0(void *arg0) {
    if (*(u16 *)(D_03004830 + 0x2A) == 0x0E0E) {
        *(u16 *)((u8 *)arg0 + 0xA6) += 2;
    }
}
