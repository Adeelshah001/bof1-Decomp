extern u8 D_03000840[];
extern u8 D_030035A0[];
extern void *sub_0803ED98(void);
extern void sub_0800B104(void *);

void sub_0800662C(void *arg0) {
    void *ent;
    u32 actor = (u32)arg0;
    u8 zero = 0;
    u8 twelve = 0x12;

    ent = sub_0803ED98();
    *(void **)D_03000840 = ent;
    if (ent != NULL) {
        *(u8 *)((u8 *)ent + 0x3B) = 0x12;
        *(u8 *)((u8 *)*(void **)D_03000840 + 0x3E) = zero;
        *(u8 *)((u8 *)*(void **)D_03000840 + 0x3A) = 1;
        *(u8 *)((u8 *)*(void **)D_03000840 + 0x3C) = twelve;
        *(void **)((u8 *)*(void **)D_03000840 + 0xD4) = (void *)actor;
    }
    *(u32 *)((u8 *)actor + 0x68) += 2;
}

void sub_08006674(void *arg0) {
    void *ent;
    u32 actor = (u32)arg0;
    u8 zero = 0;

    ent = sub_0803ED98();
    *(void **)D_03000840 = ent;
    if (ent != NULL) {
        *(u8 *)((u8 *)ent + 0x3B) = 0x1D;
        *(u8 *)((u8 *)*(void **)D_03000840 + 0x3E) = zero;
        *(u8 *)((u8 *)*(void **)D_03000840 + 0x3A) = 1;
        *(u8 *)((u8 *)*(void **)D_03000840 + 0x3C) = 0x12;
        *(void **)((u8 *)*(void **)D_03000840 + 0xD4) = zero;
    }
    *(u32 *)((u8 *)actor + 0x68) += 2;
}

void sub_080066BC(void *arg0) {
    void *ent;
    u16 *p;

    ent = sub_0803ED98();
    *(void **)D_03000840 = ent;
    if (ent != NULL) {
        *(u8 *)((u8 *)ent + 0x3B) = 0x14;
        *(u8 *)((u8 *)*(void **)D_03000840 + 0x3C) = 7;
        *(u8 *)((u8 *)*(void **)D_03000840 + 0x3A) = 1;
    }
    p = (u16 *)((u8 *)arg0 + 0x46);
    *p = *(u16 *)((u8 *)arg0 + 2);
    *(p + 2) = *(u16 *)((u8 *)arg0 + 6);
    *(u32 *)((u32)arg0 + 0x68) += 2;
}

void sub_08006574(void *arg0) {
    void *ent;
    u32 actor = (u32)arg0;

    ent = sub_0803ED98();
    *(void **)D_03000840 = ent;
    if (ent != NULL) {
        *(u8 *)((u8 *)ent + 0x3B) = 0x15;
        *(u8 *)((u8 *)*(void **)D_03000840 + 0x3E) = 0;
        *(u8 *)((u8 *)*(void **)D_03000840 + 0x3A) = 1;
        *(u8 *)((u8 *)*(void **)D_03000840 + 0x3C) = 0x12;
        *(void **)((u8 *)*(void **)D_03000840 + 0xD4) = (void *)arg0;
    }
    sub_0800B104((void *)D_030035A0);
    *(u32 *)((u8 *)actor + 0x68) += 2;
}
