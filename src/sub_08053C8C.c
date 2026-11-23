extern u8 D_03003FA4[];
void sub_080A0774(Entity *arg0, u32 arg1);

void sub_08053C8C(void) {
    u8 i = 0;
    while (i < D_03003FA4[0]) {
        Entity *e = (Entity *)(D_03003420 + (i << 7));
        if (e->unk3A != 0) {
            sub_080A0774(e, *(u32 *)(D_03003420 + 0x78 + (i << 7)));
        }
        i++;
    }
}
