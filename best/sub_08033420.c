extern u8 D_03002AB0[];

u8 sub_08033420(void) {
    u8 result = 1;
    u8 i = 3;
    u8 *base = D_03002AB0;
    u8 *actor;
    u16 base_x, base_y, actor_x, actor_y;

    for (; i > 0; i--) {
        actor = base + i * 0x124;
        if (actor[0x3A] != 0 && (actor[0xF0] & 0x50) == 0) {
            base_x = *(u16 *)(base + 0x02);
            actor_x = *(u16 *)(actor + 0x02);
            if (base_x != actor_x) {
                result = 0;
                break;
            }
            base_y = *(u16 *)(base + 0x06);
            actor_y = *(u16 *)(actor + 0x06);
            if (base_y != actor_y) {
                result = 0;
                break;
            }
        }
    }

    return result;
}
