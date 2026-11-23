typedef struct {
    u8 pad00[2];
    u16 posX;
    u8 pad04[2];
    u16 posY;
    u8 pad08[0x3E];
    u16 posX2;
    u16 pad48;
    u16 posY2;
    u8 pad4C[0x1C];
    u32 unk68;
} MoveEnt;

void sub_080550B0(void *arg0, u16 a, u16 b, s32 c);

void sub_080122AC(MoveEnt *arg0) {
    sub_080550B0(arg0, arg0->posX, arg0->posY, 4);
    arg0->posX = 0xD88;
    arg0->posX2 = 0xD88;
    arg0->posY = 0x6999;
    arg0->posY2 = 0x6999;
    arg0->unk68 += 2;
}
