extern u8 D_03004F50[];
void sub_08037FC4(void *, u16);
void sub_0807BC1C(void *);
u16 sub_080915B4(void);

void sub_0807BD70(void *arg0) {
    Entity *e = arg0;
    u16 val;
    u8 timer;
    u8 low;
    u8 high;
    u8 v;
    val = sub_080915B4();
    sub_08037FC4(e, val);
    (*(u8 *)((u8 *)e + 0x4D)) += 1;
    timer = D_03004F50[0x5F];
    low = timer & 0xF;
    high = timer >> 4;
    v = (u8)((high - low) << 4);
    *(u8 *)((u8 *)e + 0x55) = v;
    D_03004F50[0x5F] = timer - 1;
}

void sub_0807BBC4(void *arg0) {
    Entity *e = arg0;
    u16 val;
    u8 *p;
    val = sub_080915B4();
    sub_08037FC4(e, val);
    D_03004F50[0x5F] -= 1;
    *(u8 *)((u8 *)e + 6) = 0;
    p = (u8 *)e + 0x55;
    *p = (u8)(D_03004F50[8] * 0x24);
    D_03004F50[8] += 1;
    p -= 8;
    (*p) += 1;
    p -= 0xC;
    *p = 0x0E;
    sub_0807BC1C(e);
}
