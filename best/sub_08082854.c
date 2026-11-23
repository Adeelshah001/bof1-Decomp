void sub_08082854(Entity *arg0) {
    u8 *base = (u8 *)arg0;
    u16 idx = 0;
    u8 val;
    u8 *array1;
    u8 mask1 = 0x80;
    u8 *array2;
    u8 mask2 = 0x80;

    val = base[0x60] - 1;
    if ((val & 0x80) == 0) {
        array1 = base + 0x68;
        do {
            array1[idx++] = val;
            val = val - 1;
        } while ((val & 0x80) == 0);
    }

    val = (base[0x5F] >> 4) - 1;
    if ((val & 0x80) == 0) {
        array2 = base + 0x68;
        do {
            array2[idx++] = val + 4;
            val = val - 1;
        } while ((val & 0x80) == 0);
    }

    array2[idx] = 0x80;
}
